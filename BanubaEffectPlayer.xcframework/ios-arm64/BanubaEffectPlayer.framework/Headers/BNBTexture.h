// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#import "BNBTextureFilteringMode.h"
#import <Foundation/Foundation.h>
@class BNBImage;


/**Class, which repesent 2D texture interface. Subclass of image */
__attribute__((__visibility__("default"))) @interface BNBTexture : NSObject

/**
 *Load texture data from specified file descriptor.
 *@param fd (i32): file descriptor, should be closed on the caller side.
 */
- (void)loadByFd:(int32_t)fd;

/**
 *Load texture data from specified file name. For now only supported .png, .jpeg, .jpg, .ktx (2d) images.
 *@param fileName (string): absolute path for image file
 */
- (void)load:(nonnull NSString *)fileName;

/**@return width (int) of loaded image */
- (int32_t)getWidth;

/**@return height (int) of loaded image */
- (int32_t)getHeight;

/**@return channels count of loaded image (R, RG, RGBA, i.e. 1, 2, or 4). */
- (int32_t)getLayers;

/**
 *set mimpap generation flag. (affect only on ogl backend).
 *@param enable (bool): mipmap generation enable flag.
 */
- (void)setMips:(BOOL)enable;

/**@return flag (bool) : mimpap generation flag  */
- (BOOL)hasMips;

/**
 *enable/disable texture tiling
 *@param enable (bool): tiled wrapping flag
 */
- (void)setTiling:(BOOL)enable;

/**@return tiled texture wrapping flag (bool). */
- (BOOL)getTiling;

/**
 *set texture filtering mode
 *param mode (texture_filtering_mode)
 */
- (void)setFiltering:(BNBTextureFilteringMode)type;

/**@return filtering mode (texture_filtering_mode) */
- (BNBTextureFilteringMode)getFilteringMode;

/**@return upcast to base type */
- (nullable BNBImage *)asImage;

@end
