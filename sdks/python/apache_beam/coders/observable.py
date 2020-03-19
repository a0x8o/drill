#
# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.
# The ASF licenses this file to You under the Apache License, Version 2.0
# (the "License"); you may not use this file except in compliance with
# the License.  You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

"""Observable base class for iterables.

For internal use only; no backwards-compatibility guarantees.
"""
# pytype: skip-file

from __future__ import absolute_import

from builtins import object


class ObservableMixin(object):
  """For internal use only; no backwards-compatibility guarantees.

  An observable iterable.

  Subclasses need to call self.notify_observers with any object yielded.
  """
  def __init__(self):
    self.observers = []

  def register_observer(self, callback):
    self.observers.append(callback)

  def notify_observers(self, value, **kwargs):
    # self.observers is almost always empty
    if self.observers:
      for o in self.observers:
        o(value, **kwargs)
