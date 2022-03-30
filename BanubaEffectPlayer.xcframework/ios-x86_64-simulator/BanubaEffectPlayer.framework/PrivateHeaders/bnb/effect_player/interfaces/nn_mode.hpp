/// \file
/// \addtogroup EffectPlayer
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from effect_player.djinni

#pragma once

#include <functional>

namespace bnb { namespace interfaces {

enum class nn_mode : int {
    /** Means automatically decision, based on device performance and compatibility of NN's player with current platform */
    automatically,
    /** Means enable NN's when current platform compatible with NN's player */
    enable,
    /** Means disable in any case */
    disable,
};

} }  // namespace bnb::interfaces

namespace std {

template <>
struct hash<::bnb::interfaces::nn_mode> {
    size_t operator()(::bnb::interfaces::nn_mode type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
/// @}
