/// \file
/// \addtogroup Types
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from types.djinni

#pragma once

#include "bnb/types/interfaces/pixel_format.hpp"
#include <bnb/types/base_types.hpp>
#include <cstdint>
#include <utility>

namespace bnb { namespace interfaces {

struct pixel_buffer final {
    ::bnb::data_t data;
    pixel_format format;
    int32_t width;
    int32_t heigth;

    pixel_buffer(::bnb::data_t data_,
                 pixel_format format_,
                 int32_t width_,
                 int32_t heigth_)
    : data(std::move(data_))
    , format(std::move(format_))
    , width(std::move(width_))
    , heigth(std::move(heigth_))
    {}
};

} }  // namespace bnb::interfaces
/// @}

