/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <cstdint>

namespace bnb { namespace interfaces {

/** Class, which provide dual filter blur algorithm adjust interface. */
class BNB_EXPORT dual_filter_blur {
public:
    virtual ~dual_filter_blur() {}

    virtual void set_radius(int32_t radius) = 0;
};

} }  // namespace bnb::interfaces
/// @}

