/// \file
/// \addtogroup Spal
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from spal.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <cstdint>
#include <memory>

namespace bnb { namespace interfaces {

class BNB_EXPORT haptic {
public:
    virtual ~haptic() {}

    static std::shared_ptr<haptic> create();

    virtual bool is_ios_api_available() = 0;

    virtual bool is_android_api_available() = 0;

    /** Common API (always available) */
    virtual void vibrate() = 0;

    /** iOS API: Taptic Engine (iPhone 6S, 6S Plus, and above) */
    virtual void peak() = 0;

    virtual void pop() = 0;

    virtual void canceled() = 0;

    virtual void try_again() = 0;

    virtual void failed() = 0;

    /** iOS API: Haptic Feedback (iPhone 7, 7 Plus, and above) */
    virtual void success() = 0;

    virtual void warning() = 0;

    virtual void error() = 0;

    virtual void light() = 0;

    virtual void medium() = 0;

    virtual void heavy() = 0;

    virtual void selection() = 0;

    /** Android API */
    virtual void vibrate_with_params(int64_t duration_ms, int32_t amplitude) = 0;
};

} }  // namespace bnb::interfaces
/// @}

