// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#import <Foundation/Foundation.h>
@class BNBImage;


/** Class, represents render_target (render pass) interface */
__attribute__((__visibility__("default"))) @interface BNBRenderTarget : NSObject

/**@return render target name (string) */
- (nonnull NSString *)getName;

/**@param samples (int) msaa samples counts */
- (void)setSamplesCount:(int32_t)samples;

/**@return msaa samples counts */
- (int32_t)getSamplesCount;

/**
 *set render target surface extent
 *@param width (int): surface width
 *@param height (int): surface height
 */
- (void)setExtent:(int32_t)width
           height:(int32_t)height;

/**@return render target width (int) */
- (int32_t)getWidth;

/**@return render target height (int) */
- (int32_t)getHeight;

/**
 *set render target surface extent scale
 *@param width (int): surface width scale
 *@param height (int): surface height scale
 */
- (void)setScale:(float)scale;

/**@return render target width scale (int) */
- (float)getScale;

/**
 *add color or depth attachment to render target
 *@param attachment (image): surface attachment
 */
- (void)addAttachment:(nullable BNBImage *)attachment;

/**
 *removes color or depth attachment from render target, if it was aded early
 *@param attachment (image): surface attachment
 */
- (void)removeAttachment:(nullable BNBImage *)attachment;

/**@returns list of added attachments (list<image>). */
- (nonnull NSArray<BNBImage *> *)getAttachments;

@end