/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <cstdint>
#include <string>

namespace bnb { namespace interfaces {

struct vec3;

/**Interface for adjustment physics simulation. */
class BNB_EXPORT physics_simulator {
public:
    virtual ~physics_simulator() {}

    /**
     *Sets gravitation vector.
     *@param gravity (vec3): gravity value
     */
    virtual void set_gravity(const vec3 & gravity) = 0;

    /**
     *Sets damping value.
     *@param damping (float): damping value
     */
    virtual void set_damping(float damping) = 0;

    /**
     *Sets inverse bone mass.
     *@param bone_name (string): bone name
     *@param value (float): inverse bone mass
     */
    virtual void set_inv_mass(const std::string & bone_name, float value) = 0;

    /**
     *Add sphere collider.
     *@param sphere_index (int): index for sphere
     *@param center (vec3): sphere center in world space
     *@param radius (float): sphere radius
     */
    virtual void set_sphere_collider(int32_t sphere_index, const vec3 & center, float radius) = 0;

    /**
     *Add constraint between bone1 and bone2.
     *@param bone1_name (string): from bone name
     *@param bone2_name (string): to bone name
     *@param distance (float): constaint length
     */
    virtual void set_constraint(const std::string & bone1_name, const std::string & bone2_name, float distance) = 0;

    /**Reset simulator to default state */
    virtual void reset() = 0;
};

} }  // namespace bnb::interfaces
/// @}

