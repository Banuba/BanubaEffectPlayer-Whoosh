// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from effect_player.djinni

#import "BNBPixelRect.h"
#import <Foundation/Foundation.h>

__attribute__((__visibility__("default"))) @interface BNBProcessImageParams : NSObject
- (nonnull instancetype)initWithAcneProcessing:(BOOL)acneProcessing
                                 acneUserAreas:(nullable NSArray<BNBPixelRect *> *)acneUserAreas
                              faceDataJsonPath:(nullable NSString *)faceDataJsonPath;
+ (nonnull instancetype)processImageParamsWithAcneProcessing:(BOOL)acneProcessing
                                               acneUserAreas:(nullable NSArray<BNBPixelRect *> *)acneUserAreas
                                            faceDataJsonPath:(nullable NSString *)faceDataJsonPath;

/** Set this param to force running of acne processing feature */
@property (nonatomic, readonly) BOOL acneProcessing;

/** User-defined acne areas to mask, rectangles are in input image coordinate space */
@property (nonatomic, readonly, nullable) NSArray<BNBPixelRect *> * acneUserAreas;

/** For internal use, not for clients. Stores path to JSON with face data, to mock frx results */
@property (nonatomic, readonly, nullable) NSString * faceDataJsonPath;

@end
