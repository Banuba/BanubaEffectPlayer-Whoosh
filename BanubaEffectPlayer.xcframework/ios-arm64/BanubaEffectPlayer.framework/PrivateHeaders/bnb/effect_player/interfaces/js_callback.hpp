/// \file
/// \addtogroup EffectPlayer
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from effect_player.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <string>

namespace bnb { namespace interfaces {

/** Callback for JS execution results. */
class BNB_EXPORT js_callback {
public:
    virtual ~js_callback() {}

    /**
     * This method will be executed on the render thread. 
     * Try not to return as fast as possible.
     * param result String represenation of execution result.
     */
    virtual void on_result(const std::string & result) = 0;
};

} }  // namespace bnb::interfaces
/// @}

