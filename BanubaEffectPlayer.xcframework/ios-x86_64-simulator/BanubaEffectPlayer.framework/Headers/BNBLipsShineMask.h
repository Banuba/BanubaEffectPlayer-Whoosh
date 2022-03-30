// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from types.djinni

#import "BNBTransformedMaskByte.h"
#import <Foundation/Foundation.h>

__attribute__((__visibility__("default"))) @interface BNBLipsShineMask : NSObject
- (nonnull instancetype)initWithMeta:(nonnull BNBTransformedMaskByte *)meta
                                vMin:(float)vMin
                                vMax:(float)vMax;
+ (nonnull instancetype)lipsShineMaskWithMeta:(nonnull BNBTransformedMaskByte *)meta
                                         vMin:(float)vMin
                                         vMax:(float)vMax;

/**shine_mask */
@property (nonatomic, readonly, nonnull) BNBTransformedMaskByte * meta;

/**blending coeffcient */
@property (nonatomic, readonly) float vMin;

@property (nonatomic, readonly) float vMax;

@end
