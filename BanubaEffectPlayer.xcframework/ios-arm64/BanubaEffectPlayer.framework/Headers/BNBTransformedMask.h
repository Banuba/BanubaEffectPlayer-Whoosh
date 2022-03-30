// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from types.djinni

#import <Foundation/Foundation.h>

__attribute__((__visibility__("default"))) @interface BNBTransformedMask : NSObject
- (nonnull instancetype)initWithWidth:(int32_t)width
                               height:(int32_t)height
                              channel:(int32_t)channel
                              inverse:(BOOL)inverse
                       basisTransform:(nonnull NSArray<NSNumber *> *)basisTransform;
+ (nonnull instancetype)transformedMaskWithWidth:(int32_t)width
                                          height:(int32_t)height
                                         channel:(int32_t)channel
                                         inverse:(BOOL)inverse
                                  basisTransform:(nonnull NSArray<NSNumber *> *)basisTransform;

@property (nonatomic, readonly) int32_t width;

@property (nonatomic, readonly) int32_t height;

@property (nonatomic, readonly) int32_t channel;

@property (nonatomic, readonly) BOOL inverse;

/** (common -> mask) transformation */
@property (nonatomic, readonly, nonnull) NSArray<NSNumber *> * basisTransform;

@end