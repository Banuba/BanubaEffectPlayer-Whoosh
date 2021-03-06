// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#import <Foundation/Foundation.h>


/**Class, represents 3D mesh interface */
__attribute__((__visibility__("default"))) @interface BNBMesh : NSObject

/**@return mesh name (string) */
- (nonnull NSString *)getName;

/**@return sub geometries names list (list<string>) */
- (nonnull NSArray<NSString *> *)getSubGeometries;

/**@return animations names list (list<string>) */
- (nonnull NSArray<NSString *> *)getAnimations;

@end
