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
class face;
struct eyes_status;

/**
 *Face tracker component. All transformations components of entity with face_tracker component will update
 *relatively face, which index was specified in face asset. Also updates face asset resources. Subclass of component.
 */
class BNB_EXPORT face_tracker {
public:
    virtual ~face_tracker() {}

    /**
     *Fabric method for face tracker creating.
     *@return face tracker component (face_tracker)
     */
    static std::shared_ptr<face_tracker> create();

    /**
     *Sets face to face tracker.
     *@param face (face): face asset
     */
    virtual void set_face(const std::shared_ptr<face> & face) = 0;

    /**@return face (face): face asset */
    virtual std::shared_ptr<face> get_face() = 0;

    /**
     *true if fase with index, specified in face asset was recognized
     *@return face recognition flag (bool)
     */
    virtual bool has_face() const = 0;

    /**
     *true if mouth is open
     *@return flag (bool)
     */
    virtual bool is_mouth_open() const = 0;

    /**
     *true if is smiling
     *@return flag (bool)
     */
    virtual bool is_smiling() const = 0;

    /**
     *true if eyebrows up
     *@return flag (bool)
     */
    virtual bool is_eyebrows_up() const = 0;

    /**
     *true if disgust
     *@return flag (bool)
     */
    virtual bool is_disgust() const = 0;

    /**@return eyes status (eyes_status) */
    virtual eyes_status get_eyes_status() const = 0;

    /**@return upcast to base type */
    virtual std::shared_ptr<component> as_component() = 0;
};

} }  // namespace bnb::interfaces
/// @}

