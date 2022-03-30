/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <cstdint>
#include <memory>
#include <string>

namespace bnb { namespace interfaces {

class image;
class media;
class video_loading_result_listener;

/**Class, represents video texture interface. Subclass of image, also subclass of media. */
class BNB_EXPORT video {
public:
    virtual ~video() {}

    /**@return current loaded video file (string). */
    virtual std::string get_current_video() const = 0;

    /**@return current video rate (float). */
    virtual float get_rate() const = 0;

    /**
     *set video rate. 1.0 - normal video rate
     *@param rate (float)
     */
    virtual void set_rate(float rate) = 0;

    /**@return current loaded video pixels width (int). */
    virtual int32_t get_width() const = 0;

    /**@return current loaded video pixels height (int). */
    virtual int32_t get_height() const = 0;

    /**
     *Load video file for decoding.
     *@param file_name (string): absolute path for video file.
     */
    virtual void load(const std::string & video_path, const std::shared_ptr<video_loading_result_listener> & on_loading_finished) = 0;

    /**
     *Load video file for decoding by file descriptor.
     *@param fd (i32): file descriptor, should be closed on the caller side.
     */
    virtual void load_by_fd(int32_t fd, const std::shared_ptr<video_loading_result_listener> & on_loading_finished) = 0;

    /**cast video to media parent class (media). */
    virtual std::shared_ptr<media> as_media() = 0;

    /**@return upcast to image type */
    virtual std::shared_ptr<image> as_image() = 0;
};

} }  // namespace bnb::interfaces
/// @}

