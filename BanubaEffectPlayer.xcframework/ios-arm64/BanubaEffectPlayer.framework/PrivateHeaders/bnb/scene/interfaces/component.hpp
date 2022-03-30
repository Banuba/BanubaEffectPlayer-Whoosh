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

class face_morphing;
class face_tracker;
class hand_tracker;
class mesh_instance;
class transformation_3d;
enum class component_type;

/**Base component class. */
class BNB_EXPORT component {
public:
    virtual ~component() {}

    /**@return component type. Can be face_tracker, transformation, mesh_instance or face_morphing. */
    virtual component_type get_component_type() const = 0;

    /**cast component to face tracker subclass instance. Will throw if derived class is not instance of face_tracker. */
    virtual std::shared_ptr<face_tracker> as_face_tracker() = 0;

    /**cast component to mesh_instance subclass instance. Will throw if derived class is not instance of mesh_instance. */
    virtual std::shared_ptr<mesh_instance> as_mesh_instance() = 0;

    /**cast component to face_morphing subclass instance. Will throw if derived class is not instance of face_morphing. */
    virtual std::shared_ptr<face_morphing> as_face_morphing() = 0;

    /**cast component to transformation_3d subclass instance. Will throw if derived class is not instance of transformation_3d. */
    virtual std::shared_ptr<transformation_3d> as_transformation() = 0;

    /**cast component to hand_tracker subclass instance. Will throw if derived class is not instance of hand_tracker. */
    virtual std::shared_ptr<hand_tracker> as_hand_tracker() = 0;
};

} }  // namespace bnb::interfaces
/// @}

