// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from types.djinni

#import "BNBCameraPosition.h"
#import "BNBPixelRect.h"
#import <Foundation/Foundation.h>


__attribute__((__visibility__("default"))) @interface BNBFaceData : NSObject

- (nonnull NSArray<NSNumber *> *)getLandmarks;

- (nonnull NSArray<NSNumber *> *)getLatents;

- (nonnull NSArray<NSNumber *> *)getVertices;

- (nonnull BNBCameraPosition *)getCameraPosition;

- (BOOL)hasFace;

- (nonnull BNBPixelRect *)getFaceRect;

@end
