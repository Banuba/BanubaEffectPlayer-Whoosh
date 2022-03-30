/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <functional>

namespace bnb { namespace interfaces {

enum class render_backend_type : int {
    wgpu,
    opengl,
    webgl1,
    metal,
};

} }  // namespace bnb::interfaces

namespace std {

template <>
struct hash<::bnb::interfaces::render_backend_type> {
    size_t operator()(::bnb::interfaces::render_backend_type type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
/// @}

