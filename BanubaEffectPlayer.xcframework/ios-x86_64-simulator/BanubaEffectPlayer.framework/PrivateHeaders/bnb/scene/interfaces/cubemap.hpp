/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <memory>
#include <string>

namespace bnb { namespace interfaces {

class image;

/**Class, which repesent cubemap texture interface. Subclass of image */
class BNB_EXPORT cubemap {
public:
    virtual ~cubemap() {}

    /**
     *Load cubemap texture data from specified file name. For now only supported .ktx (cuemap) images.
     *@param file_name (string): absolute path for image file.
     */
    virtual void load(const std::string & filename) = 0;

    /**@return upcast to base type */
    virtual std::shared_ptr<image> as_image() = 0;
};

} }  // namespace bnb::interfaces
/// @}
