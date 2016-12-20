/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.apache.drill.exec.compile;

import java.io.IOException;
import java.net.URL;
import java.net.URLClassLoader;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.atomic.AtomicLong;

import org.apache.drill.common.config.DrillConfig;
import org.apache.drill.exec.compile.ClassTransformer.ClassNames;
import org.apache.drill.exec.exception.ClassTransformationException;
import org.apache.drill.exec.server.options.OptionManager;
import org.codehaus.commons.compiler.CompileException;

import com.google.common.collect.MapMaker;

/**
 * Per-compilation unit class loader that holds both caching and compilation
 * steps. */

public class QueryClassLoader extends URLClassLoader {
  static final org.slf4j.Logger logger = org.slf4j.LoggerFactory.getLogger(QueryClassLoader.class);

  private ClassCompilerSelector compilerSelector;

  private AtomicLong index = new AtomicLong(0);

  private ConcurrentMap<String, byte[]> customClasses = new MapMaker().concurrencyLevel(4).makeMap();

  public QueryClassLoader(DrillConfig config, OptionManager sessionOptions) {
    super(new URL[0], Thread.currentThread().getContextClassLoader());
    compilerSelector = new ClassCompilerSelector(this, config, sessionOptions);
  }

  public long getNextClassIndex() {
    return index.getAndIncrement();
  }

  public void injectByteCode(String className, byte[] classBytes) throws IOException {
    if (customClasses.containsKey(className)) {
      throw new IOException(String.format("The class defined %s has already been loaded.", className));
    }
    customClasses.put(className, classBytes);
  }

  @Override
  protected Class<?> findClass(String className) throws ClassNotFoundException {
    byte[] ba = customClasses.get(className);
    if (ba != null) {
      return this.defineClass(className, ba, 0, ba.length);
    }else{
      return super.findClass(className);
    }
  }

  public byte[][] getClassByteCode(final ClassNames className, final String sourceCode)
      throws CompileException, IOException, ClassNotFoundException, ClassTransformationException {
    return compilerSelector.getClassByteCode(className, sourceCode);
  }

}
