/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * INTEL CONFIDENTIAL
 *
 * Copyright (c) 2018 Intel Corporation
 *
 * This software and the related documents are Intel copyrighted materials, and
 * your use of them is governed by the express license under which they were
 * provided to you (License). Unless the License provides otherwise, you may not
 * use, modify, copy, publish, distribute, disclose or transmit this software or
 * the related documents without Intel's prior written permission.
 *
 * This software and the related documents are provided as is, with no express or
 * implied warranties, other than those that are expressly stated in the License.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * @file
 *
 */

#pragma once
#include <limits>

#include "rss/world/LaneDrivingDirection.hpp"
#include "rss/world/LaneSegmentId.hpp"
#include "rss/world/LaneSegmentType.hpp"
#include "rss/world/MetricRange.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

struct LaneSegment
{
  ::rss::world::LaneSegmentId id;
  ::rss::world::LaneSegmentType type{::rss::world::LaneSegmentType::Normal};
  ::rss::world::LaneDrivingDirection drivingDirection{::rss::world::LaneDrivingDirection::Bidirectional};
  ::rss::world::MetricRange length;
  ::rss::world::MetricRange width;

  ::rss::world::LaneSegmentType getType() const
  {
    return type;
  }

  void setType(::rss::world::LaneSegmentType const newVal)
  {
    type = newVal;
  }

  ::rss::world::LaneDrivingDirection getDrivingDirection() const
  {
    return drivingDirection;
  }

  void setDrivingDirection(::rss::world::LaneDrivingDirection const newVal)
  {
    drivingDirection = newVal;
  }
};

} // namespace world
} // namespace rss