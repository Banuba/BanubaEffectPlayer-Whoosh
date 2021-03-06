/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>

namespace bnb { namespace interfaces {

/**Base class, represents media files handling. */
class BNB_EXPORT media {
public:
    virtual ~media() {}

    /**
     *set playback start position.
     *@param position (float): playback start position (seconds)
     */
    virtual void set_start_position(float position) = 0;

    /**
     *set playback end position.
     *@param position (float): playback end position (seconds)
     */
    virtual void set_end_position(float position) = 0;

    /**
     *set playback looping.
     *@param looped (bool): loop playback flag
     */
    virtual void set_looped(bool looped) = 0;

    /**@return loop playback flag (bool) */
    virtual bool is_looped() const = 0;

    /**@return playback start position (float) */
    virtual float get_start_position() const = 0;

    /**@return playback end position (float) */
    virtual float get_end_position() const = 0;

    /**@return playback active flag. */
    virtual bool is_playing() const = 0;

    /**starts video playback */
    virtual void play() = 0;

    /**pause video playback */
    virtual void pause() = 0;

    /**stop video playback */
    virtual void stop() = 0;

    /**resume paused video playback */
    virtual void resume() = 0;
};

} }  // namespace bnb::interfaces
/// @}

