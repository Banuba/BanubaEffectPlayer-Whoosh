/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <memory>

namespace bnb { namespace interfaces {

class component;
struct vec3;

class BNB_EXPORT transformation_3d {
public:
    virtual ~transformation_3d() {}

    /**
     *Fabric method for transformation creating.
     *@return transformation component (transformation)
     */
    static std::shared_ptr<transformation_3d> create();

    /**
     *Sets transformation translation value.
     *@param position (vec3): translation value.
     */
    virtual void set_translation(const vec3 & position) = 0;

    /**@return translation value (vec3). */
    virtual vec3 get_translation() const = 0;

    /**
     *Sets transformation rotations angles. Angles must be in degrees.
     *@param rotation (vec3): rotation value.
     */
    virtual void set_rotation(const vec3 & angles_deg) = 0;

    /**@return scale value (vec3). */
    virtual vec3 get_rotation() const = 0;

    /**
     *Sets transformation scale value.
     *@param scale (vec3): scale value.
     */
    virtual void set_scale(const vec3 & factor) = 0;

    /**@return rotation value (vec3). */
    virtual vec3 get_scale() const = 0;

    /**@return upcast to base type */
    virtual std::shared_ptr<component> as_component() = 0;
};

} }  // namespace bnb::interfaces
/// @}

