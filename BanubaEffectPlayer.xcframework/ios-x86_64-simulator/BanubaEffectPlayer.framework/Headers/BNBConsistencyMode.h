// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from effect_player.djinni

#import <Foundation/Foundation.h>

/**
 * These modes describe the relationship between processing loop and render loop frames
 *
 * <h3> Synchronous - Asynchronous:</h3>
 * <br/> - Synchronous means to output (render) a frame only once after a new frame was fully processed
 * <br/> - Asynchronous may render multiple (not waiting for frx), further divided into Consistent and
 *    Inconsistent sub-modes. (note: Synchronous mode by definition is always Consistent.)
 *
 * <h3>Consistent - Inconsistent:</h3>
 * <br/> - Consistent renders the processed frames as-is, the only change being in the advancement of time
 *    (e.g. animations, videos), while
 * <br/> - Inconsistent changes the camera image for that frame to the latest available (not yet processed),
 *    resulting in smoother rendering in case frx is slow or unsteady.
 *
 * <h3>"Smart" modes:</h3>
 * <br/> There are modes with the "when effect loaded" suffix. These modes behave exactly the same as
 *    corresponding modes without such suffix, but only with one difference - they are activated only
 *    when the effect was completely loaded.
 * <br/> These modes can be used to avoid image freeze during effect activation.
 */
typedef NS_ENUM(NSInteger, BNBConsistencyMode)
{
    BNBConsistencyModeSynchronous,
    /** switches to async-inconsistent mode while effect is loading */
    BNBConsistencyModeSynchronousWhenEffectLoaded,
    BNBConsistencyModeAsynchronousInconsistent,
    BNBConsistencyModeAsynchronousConsistent,
    /** switches to async-inconsistent mode while effect is loading */
    BNBConsistencyModeAsynchronousConsistentWhenEffectLoaded,
};
