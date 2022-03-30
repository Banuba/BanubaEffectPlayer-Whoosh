// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#import <Foundation/Foundation.h>
@class BNBMedia;


/**Class represents audio track interface. Subclass of media */
__attribute__((__visibility__("default"))) @interface BNBAudioTrack : NSObject

/**
 *set current audio track playback volume.
 *@param volume (float): new audio volume. must be in range [0, 1]
 */
- (void)setVolume:(float)volume;

/**@return current audio track playback volume (float) */
- (float)getVolume;

/**
 *Load audio track file. For now only supports .m4a, .ogg, .mp3 files.
 *@param file (string): absolute path for audio track file.
 */
- (void)load:(nonnull NSString *)file;

/**@return current loaded audio track (string). */
- (nonnull NSString *)getCurrentTrack;

/**cast audio_track to media parent class (media). */
- (nullable BNBMedia *)asMedia;

@end