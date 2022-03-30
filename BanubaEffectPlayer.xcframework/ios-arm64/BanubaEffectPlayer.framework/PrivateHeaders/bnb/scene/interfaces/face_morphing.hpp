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

class beauty_morphing;
class component;
class morphing;
enum class morphing_type;

/**class which is the container for morphind and update it's resources. Subclass of component. */
class BNB_EXPORT face_morphing {
public:
    virtual ~face_morphing() {}

    /**
     *Fabric method for face_morphing creating.
     *@return created (face_morphing).
     */
    static std::shared_ptr<face_morphing> create(morphing_type type);

    /**
     *Sets morphing asset.
     *@param morph (morphing) morphing instance.
     */
    virtual void set_morphing(const std::shared_ptr<morphing> & morph) = 0;

    /**@return setted morphing (morphing). */
    virtual std::shared_ptr<morphing> get_morphing() const = 0;

    /**Cast to beauty_morphing subclass. */
    virtual std::shared_ptr<beauty_morphing> as_beauty_morphing() = 0;

    /**@return visible(bool) visibility flag. */
    virtual bool is_visible() const = 0;

    /**
     *Set face_morphing visibility flag. 
     *Will be overridden if entity with mesh_instance component is child of entity with face_tracker component. Subclass of component.
     *@param visible(bool) visibility flag.
     */
    virtual void set_visible(bool visible) = 0;

    /**
     *set morphing weight. Must be in range [0, 1]
     *@param weight (float)
     */
    virtual void set_weight(float weight) = 0;

    /**@return current morph weight (float) */
    virtual float get_weight() const = 0;

    /**@return upcast to base type */
    virtual std::shared_ptr<component> as_component() = 0;
};

} }  // namespace bnb::interfaces
/// @}

