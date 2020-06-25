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

package org.apache.drill.exec.store.druid.druid;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.fasterxml.jackson.databind.node.ObjectNode;
import org.apache.commons.lang3.StringUtils;
import org.apache.drill.exec.store.druid.common.DruidConstants;
import org.apache.drill.exec.store.druid.common.DruidFilter;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

import static org.apache.drill.exec.store.druid.common.DruidConstants.INTERVAL_DIMENSION_NAME;

public class SelectQueryBuilder {
  private static final ObjectMapper objectMapper = new ObjectMapper();

  public SelectQueryBuilder() {}

  public SelectQuery build(String datasource,
                           List<String> dimensions,
                           DruidFilter druidFilter,
                           PagingSpec pagingSpec,
                           String minTime,
                           String maxTime)
    throws JsonProcessingException {
    List<JsonNode> userInputIntervals =
      druidFilter == null
        ? new ArrayList<>()
        : parseIntervalsFromFilter(druidFilter.toJson());
    List<String> queryIntervals = getQueryIntervals(userInputIntervals, minTime, maxTime);
    ObjectNode finalFilter =
      druidFilter == null
        ? null
        : (ObjectNode) objectMapper.readTree(removeIntervalFilter(druidFilter.toJson(), userInputIntervals));

    return new SelectQuery(
      datasource,getDimensionsAsSpec(dimensions),
      finalFilter,
      queryIntervals,
      pagingSpec);
  }

  private List<DruidDimensionSpec> getDimensionsAsSpec(List<String> columns) {
    return columns.stream().map(column -> {
      String type = StringUtils.equalsAnyIgnoreCase(column, DruidConstants.DRUID_TIME_DIMENSIONS) ? "extraction" : "default";
      DruidExtractionFunctionSpec extractionFunctionSpec =
        StringUtils.equalsAnyIgnoreCase(column, DruidConstants.DRUID_TIME_DIMENSIONS) ? getTimeExtractionFunction() : null;
      return new DruidDimensionSpec(type, column, column, "STRING", extractionFunctionSpec);
    }).collect(Collectors.toList());
  }

  private DruidExtractionFunctionSpec getTimeExtractionFunction() {
    return new DruidExtractionFunctionSpec("timeFormat", DruidConstants.ISO_8601_DATE_STRING_FORMAT);
  }

  private List<JsonNode> parseIntervalsFromFilter(String filter)
      throws JsonProcessingException {
    //if the filter is on the special Interval Dimension, then use it for the interval.
    JsonNode filterNode = objectMapper.readTree(filter);
    return filterNode.findValues(INTERVAL_DIMENSION_NAME);
  }

  private List<String> getQueryIntervals(List<JsonNode> userInputIntervals,
                                         String minTime,
                                         String maxTime) {
    if (userInputIntervals.isEmpty()) {
      String interval = String.format("%s/%s", minTime, maxTime);
      return Stream.of(interval).collect(Collectors.toList());
    }

    JsonNode firstIntervalNode = userInputIntervals.get(0);
    String interval = firstIntervalNode.asText();
    return Stream.of(interval).collect(Collectors.toList());
  }

  private String removeIntervalFilter(String filter, List<JsonNode> userInputIntervals) {
    for (JsonNode intervalNode : userInputIntervals) {
      String interval = intervalNode.asText();
      String intervalSubString1 = ",{\"eventInterval\":\"" + interval + "\"}";
      String intervalSubString2 = "{\"eventInterval\":\"" + interval + "\"},";
      filter = filter.replace(intervalSubString1, "");
      filter = filter.replace(intervalSubString2, "");
    }
    return filter;
  }
}
