// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from types.djinni

#import "BNBTransformedMask.h"
#import <Foundation/Foundation.h>

__attribute__((__visibility__("default"))) @interface BNBTransformedMaskGpu : NSObject
- (nonnull instancetype)initWithMeta:(nonnull BNBTransformedMask *)meta
                                mask:(int32_t)mask;
+ (nonnull instancetype)transformedMaskGpuWithMeta:(nonnull BNBTransformedMask *)meta
                                              mask:(int32_t)mask;

@property (nonatomic, readonly, nonnull) BNBTransformedMask * meta;

@property (nonatomic, readonly) int32_t mask;

@end
