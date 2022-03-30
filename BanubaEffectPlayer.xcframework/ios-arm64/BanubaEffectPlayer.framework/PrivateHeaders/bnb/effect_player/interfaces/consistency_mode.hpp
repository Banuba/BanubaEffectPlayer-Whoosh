/// \file
/// \addtogroup EffectPlayer
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from effect_player.djinni

#pragma once

#include <functional>

namespace bnb { namespace interfaces {

enum class consistency_mode : int {
    synchronous,
    /** switches to async-inconsistent mode while effect is loading */
    synchronous_when_effect_loaded,
    asynchronous_inconsistent,
    asynchronous_consistent,
    /** switches to async-inconsistent mode while effect is loading */
    asynchronous_consistent_when_effect_loaded,
};

} }  // namespace bnb::interfaces

namespace std {

template <>
struct hash<::bnb::interfaces::consistency_mode> {
    size_t operator()(::bnb::interfaces::consistency_mode type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
/// @}

