/*
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
package org.apache.drill.metastore.statistics;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Implementation of {@link StatisticsKind} which contain base
 * table statistics kinds with implemented {@code mergeStatistics()} method.
 */
public class BaseStatisticsKind<T> implements StatisticsKind<T> {

  protected final String statisticKey;
  protected final boolean exact;

  @JsonCreator
  public BaseStatisticsKind(@JsonProperty("name") String statisticKey,
                            @JsonProperty("exact") boolean exact) {
    this.statisticKey = statisticKey;
    this.exact = exact;
  }

  @Override
  public String getName() {
    return statisticKey;
  }

  @Override
  public boolean isExact() {
    return exact;
  }
}
