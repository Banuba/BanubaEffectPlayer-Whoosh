// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from effect_player.djinni

#import "BNBCameraOrientation.h"
#import "BNBConsistencyMode.h"
#import "BNBEffectPlayerConfiguration.h"
#import "BNBEffectPlayerPlaybackState.h"
#import "BNBFaceSearchMode.h"
#import "BNBFrameData.h"
#import "BNBPixelBuffer.h"
#import "BNBPixelFormat.h"
#import "BNBPixelRect.h"
#import "BNBProcessImageParams.h"
#import "BNBRenderBackendType.h"
#import "BanubaEffectPlayer/BNBFullImageData.h"
#import <Foundation/Foundation.h>
@class BNBDebugInterface;
@class BNBEffectManager;
@class BNBEffectPlayer;
@class BNBInputManager;
@protocol BNBCameraPoiListener;
@protocol BNBEffectActivationCompletionListener;
@protocol BNBEffectInfoListener;
@protocol BNBFaceNumberListener;
@protocol BNBFrameDataListener;
@protocol BNBFrameDurationListener;
@protocol BNBLowLightListener;


/**
 * The EffectPlayer class provides ability to play AR effects on set of images or video.
 * <h2>Lifecycle</h2>
 * In order to support an application lifecycle EffectPlayer provides  special methods
 * to control it during application states like pause or losing focus.
 * <h3>Effect playback</h3>
 * Initial playback state of newly created Effect Player instance is `active`. With playback
 * control methods described below, the player can be launched/resumed or paused. State of effect
 * player becomes stopped/inactive at the moment of surface loss or by calling the
 * EffectPlayer::playback_stop method.
 * One can use next three methods to control effect playback:
 *   <br/> - `EffectPlayer.playback_play`. Switching to active state attempt. Possible from
 *   paused or stopped state and has no effect if effect playback is already active. Playback
 *   resumes from the position saved before `EffectPlayer.playbackPause` call.
 *   <br/> - `EffectPlayer.playback_pause`. Suspend current playback attempt. The recognizer thread
 *   is stopped and all the video textures and audio units playback is stopped as well. Effect
 *   player doesn't react on EffectPlayer::pushFrame calls in suspended state except
 *   asynchronous-inconsistent mode.
 *   <br/> - `EffectPlayer.playbackStop`. Switch to inactive state. In addition to pause clears
 *   recognizer's buffer. The next switch to active state will result in total rerun of active
 *   effect which means that it will be started from the very beginning.
 * <h2>Android usage example</h2>
 * If you want an application to be active on windowed mode and if the
 * focus is on another application you can switch EffectPlayer into active state when
 * `onStart` activity callback occurs and switch to paused when `onStop` occurs. Otherwise you
 * can suspend `EffectPlayer` on `onPause` and resume on `onResume` callback to make an
 * instance of the `EffectPlayer` inactive while activity losing focus.
 * <h2> Context/surface control</h2>
 * There are two methods that have to be used to ensure correct operating of the
 * EffectPlayer. Losing context without notifying the EffectPlayer
 * leads to application crash. Methods for context changes notification:
 *   <br/> - `EffectPlayer.surfaceCreated`
 *   <br/> - `EffectPlayer.surfaceDestroyed`
 * <h2> Multi-Threading performance and safety. Listeners.</h2>
 * EffectPlayer allows to call some of its methods from several threads (simultaneously) for convenience and increased performance.
 * This is allowed only during normal operation, all invocations from other threads MUST finish before
 * you start destroying the EffectPlayer instance.
 * Most methods belong to one of the two groups:
 *   <br/> - MUST be called from the "Main" (also "Render") thread ("Not Reentrant, Not Thread-safe")
 *   <br/> - MAY be called from "Any" thread. Most are "Thread-safe"
 * Listener callbacks can be called back from any thread.
 * Generally for best performance and responsiveness you'll have 3 threads:
 *   <br/> - Main(render) thread for drawing-related operations
 *   <br/> - "Camera" thread for handling and push()-ing frames into EffectPlayer
 *   <br/> - UI Thread for handling user interactions and other tasks
 */
__attribute__((__visibility__("default"))) @interface BNBEffectPlayer : NSObject

+ (nullable BNBEffectPlayer *)create:(nonnull BNBEffectPlayerConfiguration *)configuration;

/**
 * Get major version of EffectPlayer. Use this method to filter out breaking changes in
 * implementation of this class.
 * @note this is not version of SDK.
 * @see EffectPlayer.versionMinor
 */
+ (int32_t)versionMajor;

/**
 * Get minor version of EffectPlayer
 * @see EffectPlayer.versionMajor
 */
+ (int32_t)versionMinor;

/**
 * Add callback to receive FPS information.
 * Thread-safe. May be called from any thread
 */
- (void)addFrameDurationListener:(nullable id<BNBFrameDurationListener>)frameDurationListener;

/**
 * Remove callback to receive FPS information.
 * Thread-safe. May be called from any thread
 */
- (void)removeFrameDurationListener:(nullable id<BNBFrameDurationListener>)frameDurationListener;

/**
 * Add callback to receive faces count in frame.
 * Thread-safe. May be called from any thread
 */
- (void)addFaceNumberListener:(nullable id<BNBFaceNumberListener>)faceNumberListener;

/**
 * Remove callback to receive faces count in frame.
 * Thread-safe. May be called from any thread
 */
- (void)removeFaceNumberListener:(nullable id<BNBFaceNumberListener>)faceNumberListener;

/**
 * Add callback to receive frame data right after processing in recognizer.
 * Thread-safe. May be called from any thread
 */
- (void)addFrameDataListener:(nullable id<BNBFrameDataListener>)frameDataListener;

/**
 * Remove callback to receive frame data right after processing in recognizer.
 * Thread-safe. May be called from any thread
 */
- (void)removeFrameDataListener:(nullable id<BNBFrameDataListener>)frameDataListener;

/**
 * Add callback to receive low light info
 * Thread-safe. May be called from any thread
 */
- (void)addLowLightListener:(nullable id<BNBLowLightListener>)lowLightListener;

/**
 * Remove callback to receive low light info
 * Thread-safe. May be called from any thread
 */
- (void)removeLowLightListener:(nullable id<BNBLowLightListener>)lowLightListener;

/**
 * Add callback to receive center of the face in frame relative to top-left
 * corner in [0, 1] space.
 * Thread-safe. May be called from any thread
 */
- (void)addCameraPoiListener:(nullable id<BNBCameraPoiListener>)cameraPoiListener;

/**
 * Remove callback to receive center of the face in frame relative to top-left
 * Thread-safe. May be called from any thread
 */
- (void)removeCameraPoiListener:(nullable id<BNBCameraPoiListener>)cameraPoiListener;

/**
 * Add callback to receive current effect info from Effect Player.
 * Thread-safe. May be called from any thread
 */
- (void)addEffectInfoListener:(nullable id<BNBEffectInfoListener>)effectInfoListener;

/**
 * Remove callback to receive current effect info from Effect Player.
 * Thread-safe. May be called from any thread
 */
- (void)removeEffectInfoListener:(nullable id<BNBEffectInfoListener>)effectInfoListener;

/**
 * Add callback to receive current effect activation notification from Effect Player.
 * Thread-safe. May be called from any thread
 */
- (void)addEffectActivationCompletionListener:(nullable id<BNBEffectActivationCompletionListener>)effectActivationCompletionListener;

/**
 * Remove callback to receive current effect activation notification from Effect Player.
 * Thread-safe. May be called from any thread
 */
- (void)removeEffectActivationCompletionListener:(nullable id<BNBEffectActivationCompletionListener>)effectActivationCompletionListener;

/**
 * Sets maximum allowed face results, if face tracking feature is present.
 * Thread-safe. May be called from any thread
 * This option is relevant only for GLFX effects.
 */
- (void)setMaxFaces:(int32_t)maxFaces;

/**
 * Set OpenGL name of input external texture.
 * https://developer.android.com/reference/android/graphics/SurfaceTexture .
 * MUST be called from the render thread
 *
 * @param name Texture name
 * @param width Textute width
 * @param height Texture height
 *
 * @see setUseExtCamTex
 *
 * <br/> Note: This function is Android only.
 * <br/> Note: We use texture size to calculate aspect ratio only.
 */
- (void)setExternalCameraTexture:(int32_t)name
                           width:(int32_t)width
                          height:(int32_t)height;

/**
 * Use external texture as input source.
 * MUST be called from the render thread
 * @see setExternalCameraTexture
 * @note This function is Android only
 */
- (void)setUseExtCamTex:(BOOL)value;

/**
 * Use to notify the EffectPlayer that the surface exists and effect can be played.
 * 0, 0 for width and height are valid values.
 * MUST be called from the render thread
 */
- (void)surfaceCreated:(int32_t)width
                height:(int32_t)height;

/**
 * Notify about rendering surface being resized.
 * MUST be called from the render thread
 */
- (void)surfaceChanged:(int32_t)width
                height:(int32_t)height;

/**
 * This method should be called right before an active context will become invalid.
 * Switches playback state to inactive state. If it's not done an application will be
 * crashed on next draw iteration. After losing the surface effect playback can't be
 * resumed from last position.
 * MUST be called from the render thread
 */
- (void)surfaceDestroyed;

/**
 * Draw the current effect into the current OpenGL framebuffer. Uses internal frame_data
 * object obtained from latest push_frame recognition result.
 *
 * Return current frame number if drawing was performed and caller should swap buffers
 * otherwise `DRAW_SKIPPED`(-1)
 * MUST be called from the render thread
 */
- (int64_t)draw;

/**
 * Draw the current effect into the current OpenGL framebuffer. Uses externally provided frameData
 * object instead of internal one obtained from latest push_frame recognition result.
 *
 * Return frame number from provided frameData if drawing was performed and caller should swap buffers
 * otherwise `DRAW_SKIPPED`(-1)
 * MUST be called from the render thread
 */
- (int64_t)drawWithExternalFrameData:(nullable BNBFrameData *)frameData;

/**
 * Record last rendering ("draw_()") result into current OpenGL framebuffer.
 * Content is cropped to maintain effect_size() aspect ratio
 * MUST be called from the render thread
 */
- (void)captureBlit:(int32_t)captureWidth
      captureHeight:(int32_t)captureHeight;

/**
 * Receive the last rendered frame in binary form.
 *
 * @return 4-byte per pixel data, size is `fx_width * fx_height * 4`
 * MUST be called from the render thread
 */
- (nonnull BNBPixelBuffer *)readPixels;

/** Thread-safe. May be called from any thread */
- (void)setRenderConsistencyMode:(BNBConsistencyMode)value;

/**
 * Request display of sub-area of the input image into sub-area of the output surface, with optional x,y flips
 * imageRect is fitted inside viewportRect
 * Resets transform to default if either rect has 0 dimensions
 * @param imageRect rectangle in input image coordinates(pixels) after applying input rotations and flips
 * @param viewportRect rectangle in output surface coordinates(pixels)
 * MUST be called from the render thread
 */
- (void)setRenderTransform:(nonnull BNBPixelRect *)imageRect
              viewportRect:(nonnull BNBPixelRect *)viewportRect
                     xFlip:(BOOL)xFlip
                     yFlip:(BOOL)yFlip;

/**
 * Process an image with current effect.
 *
 * Must be called from the render thread.
 *
 * @param inputImage to avoid conversion recommended to use YUV image
 * @param outputPixelFormat to avoid conversion recommended to use RGBA
 * @param params extra image processing arguments
 */
- (nonnull NSData *)processImage:(nonnull BNBFullImageData *)inputImage
               outputPixelFormat:(BNBPixelFormat)outputPixelFormat
                          params:(nonnull BNBProcessImageParams *)params;

/**
 * Process an image with current effect.
 * Prefer this method over `processImage` when you have extra input data
 * besides just an input image.
 *
 * Must be called from render thread.
 *
 * @param inputFrameData `FrameData` with an image
 * @param outputPixelFormat to avoid conversion recommended to use RGBA
 * @param params extra image processing arguments
 */
- (nonnull NSData *)processImageFrameData:(nullable BNBFrameData *)inputFrameData
                        outputPixelFormat:(BNBPixelFormat)outputPixelFormat
                                   params:(nonnull BNBProcessImageParams *)params;

/**
 * Process image with current effect.
 * Must be called from render thread.
 * NOTE: inputImage have copy overhead, preferable to use process_image method
 * MUST be called from the render thread
 * @param inputImage input image with `width * height * 4` size
 * @param outputPixelFormat to avoid conversion recommended to use RGBA
 */
- (nonnull NSData *)processImageData:(nonnull NSData *)inputImage
                               width:(int32_t)width
                              height:(int32_t)height
                         orientation:(BNBCameraOrientation)orientation
                          isMirrored:(BOOL)isMirrored
                    inputPixelFormat:(BNBPixelFormat)inputPixelFormat
                   outputPixelFormat:(BNBPixelFormat)outputPixelFormat
                              params:(nonnull BNBProcessImageParams *)params;

/**
 * Provides image to process and to play effect.
 * Thread-safe. May be called from any thread
 */
- (void)pushFrame:(nonnull BNBFullImageData *)fullImage;

/**
 * Provides image to process and to play effect.
 * Thread-safe. May be called from any thread
 */
- (void)pushFrameWithNumber:(nonnull BNBFullImageData *)fullImage
                frameNumber:(int64_t)frameNumber;

/**
 * Provides FrameData to process and to play effect.
 * Must contain full image.
 * Thread-safe. May be called from any thread
 */
- (void)pushFrameData:(nullable BNBFrameData *)frameData;

/**
 * Provides FrameData with frame number to process and to play effect.
 * Must contain full image.
 * Thread-safe. May be called from any thread
 */
- (void)pushFrameDataWithNumber:(nullable BNBFrameData *)frameData
                    frameNumber:(int32_t)frameNumber;

/** MUST be called from the main(render) thread */
- (void)playbackPlay;

- (void)playbackPause;

- (void)playbackStop;

/** Thread-safe. May be called from any thread */
- (BNBEffectPlayerPlaybackState)getPlaybackState;

/** Set audio enabled */
- (void)enableAudio:(BOOL)enable;

/**
 * Get interface to control user iterations. This events will be passed to effect.
 * Thread-safe. May be called from any thread
 */
- (nullable BNBInputManager *)getInputManager;

/**
 * Initialize video processing. To provide frames use *process_video_frame* methods.
 * Effect audio is recorded as well and can be accessed using *process_recorded_audio*
 * and *write_recorded_audio*.
 * *push_frame* should not be called during processing.
 * MUST be called from the render thread
 * @throw Exception Must be aborted with stop_video_processing()
 */
- (void)startVideoProcessing:(int64_t)screenWidth
                screenHeight:(int64_t)screenHeight
                 orientation:(BNBCameraOrientation)orientation
                 resetEffect:(BOOL)resetEffect
                 offlineMode:(BOOL)offlineMode;

/**
 * Finish processing and return renderer to normal state.
 * MUST be called from the render thread
 */
- (void)stopVideoProcessing:(BOOL)resetEffect;

/**
 * Provide frame data to evaluate video processing.
 * MUST be called from the render thread
 * @param inputFrameData Frame Data to process.
 * @param params Processing params.
 * @param recognizerIterations Number of processing iterations. Higher number means higher processing quality, but lower speed. Must be greater than 1. Pass null value for default number.
 * @return Frame data with frame processing results.
 */
- (nullable BNBFrameData *)processVideoFrameData:(nullable BNBFrameData *)inputFrameData
                                          params:(nonnull BNBProcessImageParams *)params
                            recognizerIterations:(nullable NSNumber *)recognizerIterations;

/**
 * Provide frame to evaluate video processing.
 * MUST be called from the render thread
 * @param inputImage Image to process.
 * @param params Processing params.
 * @param recognizerIterations Number of processing iterations. Higher number means higher processing quality, but lower speed. Must be greater than 1. Pass null value for default number.
 * @return Frame data with frame processing results.
 */
- (nullable BNBFrameData *)processVideoFrame:(nonnull BNBFullImageData *)inputImage
                                      params:(nonnull BNBProcessImageParams *)params
                        recognizerIterations:(nullable NSNumber *)recognizerIterations;

/**
 * Draw processed frame to image buffer.
 * MUST be called from the render thread
 * @param inputFrameData FrameData to draw.
 * @param timeNs Frame position on timeline.
 * @param outputPixelFormat Output image format.
 * @return Buffer with processed image in selected format.
 */
- (nonnull NSData *)drawVideoFrame:(nullable BNBFrameData *)inputFrameData
                            timeNs:(int64_t)timeNs
                 outputPixelFormat:(BNBPixelFormat)outputPixelFormat;

/**
 * The same as *draw_video_frame* but accepts preallocated buffer to avoid recreation for every frame.
 * MUST be called from the render thread
 */
- (nonnull NSData *)drawVideoFrameAllocated:(nullable BNBFrameData *)inputFrameData
                                     timeNs:(int64_t)timeNs
                          outputPixelFormat:(BNBPixelFormat)outputPixelFormat
                            allocatedBuffer:(nonnull NSData *)allocatedBuffer;

/** Thread-safe. May be called from any thread */
- (BOOL)isVoiceChangerConfigured;

/**
 * Process recorded voice with voice changer effects mixing with recorded sounds.
 * Copies in->out if no voice changer or effect is active.
 * Not thread-safe but can be called from any thread.
 * Recorded sounds have the same lifetime as the effect(e.g reset after load_effect, etc.).
 * @param inFilename Input filename.
 * @param outFilename Must have ".wav" extension.
 * @param mixVolume Relative volume for mixing in sounds, [0..1].
 */
- (void)processRecordedAudio:(nonnull NSString *)inFilename
                 outFilename:(nonnull NSString *)outFilename
                   mixVolume:(float)mixVolume;

/**
 * Save recorded audio.
 * Not thread-safe but can be called from any thread.
 * @param filename ".wav" extension must be used.
 * @param lengthMs Track length. Set to '0' to use full duration.
 */
- (void)writeRecordedAudio:(nonnull NSString *)filename
                  lengthMs:(int64_t)lengthMs;

/**
 * Trigger record start events in EP and Effect.
 * Records all sounds during recording
 * to be replayed by `processRecordedAudio`.
 * If @param playAudioWhileRecording is true, the audio will continue to play. Otherwise, the audio will be muted. 
 * Thread-safe. May be called from any thread
 */
- (void)onVideoRecordStart:(BOOL)playAudioWhileRecording;

/**
 * Triggers record stop events in EP and Effect.
 * Thread-safe. May be called from any thread
 */
- (void)onVideoRecordEnd;

/**
 * Check is device compatible with Neural Networks player
 * Thread-safe. May be called from any thread
 * On some platforms (e.g. Android) may require the first invocation to be on the render thread
 */
- (BOOL)isDeviceNnCompatible;

/**
 * Request to start framedata capture process. Output file is in CBOR format.
 * Thread-safe. May be called from any thread
 * @param folder Output folder.
 * @param filename Output filename. If the value is an empty string, filename is generated based on
 *   date and time.
 */
- (void)startFramedataCapture:(nonnull NSString *)folder
                     filename:(nullable NSString *)filename;

/** @see startFramedataCapture */
- (void)stopFramedataCapture;

/**
 * Get effect manager object
 * Thread-safe. May be called from any thread
 */
- (nullable BNBEffectManager *)effectManager;

/** For internal usage only */
- (nullable BNBDebugInterface *)debugInterface;

/**
 * Force recognizer offline mode
 * Thread-safe. May be called from any thread
 */
- (void)setRecognizerOfflineMode:(BOOL)on;

+ (void)setRenderBackend:(BNBRenderBackendType)backendType;

+ (BNBRenderBackendType)getCurrentRenderBackendType;

/**
 * Change face search mode
 * Thread-safe. May be called from any thread
 */
- (void)setFaceSearchMode:(BNBFaceSearchMode)faceSearch;

/**
 * process pushed frame, if available (for syncronous recognizer mode)
 * return true if frame was processed
 */
- (BOOL)recognizerProcessFromBuffer;

@end
