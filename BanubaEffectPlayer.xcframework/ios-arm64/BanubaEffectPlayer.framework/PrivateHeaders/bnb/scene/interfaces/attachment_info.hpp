/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include "bnb/scene/interfaces/attachment_load_op.hpp"
#include "bnb/scene/interfaces/attachment_store_op.hpp"
#include "bnb/scene/interfaces/pixel_format_type.hpp"
#include "bnb/scene/interfaces/vec4.hpp"
#include <utility>

namespace bnb { namespace interfaces {

struct attachment_info final {
    attachment_load_op load_behaviour;
    attachment_store_op store_behaviour;
    pixel_format_type format;
    vec4 clear_color;

    attachment_info(attachment_load_op load_behaviour_,
                    attachment_store_op store_behaviour_,
                    pixel_format_type format_,
                    vec4 clear_color_)
    : load_behaviour(std::move(load_behaviour_))
    , store_behaviour(std::move(store_behaviour_))
    , format(std::move(format_))
    , clear_color(std::move(clear_color_))
    {}
};

} }  // namespace bnb::interfaces
/// @}

