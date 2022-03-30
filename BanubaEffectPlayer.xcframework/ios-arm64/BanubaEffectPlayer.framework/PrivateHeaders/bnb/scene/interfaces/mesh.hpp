/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <string>
#include <vector>

namespace bnb { namespace interfaces {

/**Class, represents 3D mesh interface */
class BNB_EXPORT mesh {
public:
    virtual ~mesh() {}

    /**@return mesh name (string) */
    virtual std::string get_name() const = 0;

    /**@return sub geometries names list (list<string>) */
    virtual std::vector<std::string> get_sub_geometries() const = 0;

    /**@return animations names list (list<string>) */
    virtual std::vector<std::string> get_animations() const = 0;
};

} }  // namespace bnb::interfaces
/// @}
