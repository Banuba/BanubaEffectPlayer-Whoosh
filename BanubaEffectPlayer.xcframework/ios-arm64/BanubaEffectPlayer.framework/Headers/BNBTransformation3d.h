// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#import "BNBVec3.h"
#import <Foundation/Foundation.h>
@class BNBComponent;
@class BNBTransformation3d;


__attribute__((__visibility__("default"))) @interface BNBTransformation3d : NSObject

/**
 *Fabric method for transformation creating.
 *@return transformation component (transformation)
 */
+ (nullable BNBTransformation3d *)create;

/**
 *Sets transformation translation value.
 *@param position (vec3): translation value.
 */
- (void)setTranslation:(nonnull BNBVec3 *)position;

/**@return translation value (vec3). */
- (nonnull BNBVec3 *)getTranslation;

/**
 *Sets transformation rotations angles. Angles must be in degrees.
 *@param rotation (vec3): rotation value.
 */
- (void)setRotation:(nonnull BNBVec3 *)anglesDeg;

/**@return scale value (vec3). */
- (nonnull BNBVec3 *)getRotation;

/**
 *Sets transformation scale value.
 *@param scale (vec3): scale value.
 */
- (void)setScale:(nonnull BNBVec3 *)factor;

/**@return rotation value (vec3). */
- (nonnull BNBVec3 *)getScale;

/**@return upcast to base type */
- (nullable BNBComponent *)asComponent;

@end
