/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <functional>

namespace bnb { namespace interfaces {

enum class trigger_type : int {
    left_eye_status,
    right_eye_status,
    smile_status,
    mouth_status,
    brows_raised_status,
    brows_shifted_status,
    glasses_status,
};

} }  // namespace bnb::interfaces

namespace std {

template <>
struct hash<::bnb::interfaces::trigger_type> {
    size_t operator()(::bnb::interfaces::trigger_type type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
/// @}

