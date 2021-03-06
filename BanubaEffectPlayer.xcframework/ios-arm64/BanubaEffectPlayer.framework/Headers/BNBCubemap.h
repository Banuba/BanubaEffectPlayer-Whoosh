// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#import <Foundation/Foundation.h>
@class BNBImage;


/**Class, which repesent cubemap texture interface. Subclass of image */
__attribute__((__visibility__("default"))) @interface BNBCubemap : NSObject

/**
 *Load cubemap texture data from specified file name. For now only supported .ktx (cuemap) images.
 *@param file_name (string): absolute path for image file.
 */
- (void)load:(nonnull NSString *)filename;

/**@return upcast to base type */
- (nullable BNBImage *)asImage;

@end
