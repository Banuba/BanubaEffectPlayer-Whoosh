// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#import "BNBComponentType.h"
#import "BNBFeatureId.h"
#import "BNBTriggerStatusType.h"
#import "BNBTriggerType.h"
#import <Foundation/Foundation.h>
@class BNBAssetManager;
@class BNBCamera;
@class BNBComponent;
@class BNBEntity;
@class BNBLayer;
@class BNBRenderList;


/**
 * A class representing a displayable scene. Aggregates in one place the
 * hierarchy of Entities with their Components,  AssetManager and RenderList
 * and makes it work all together.
 */
__attribute__((__visibility__("default"))) @interface BNBScene : NSObject

/** Set a new name for a scene. The name could be empty. */
- (void)setName:(nonnull NSString *)name;

/** Get a scene name. */
- (nonnull NSString *)getName;

/** Get the root of entities hierarchy. It always exists and has a name "Root". */
- (nullable BNBEntity *)getRoot;

/** Get the AssetManager of a current scene. It always exists. */
- (nullable BNBAssetManager *)getAssetManager;

- (void)addLayer:(nullable BNBLayer *)layer;

- (nonnull NSArray<BNBLayer *> *)getLayers;

/** Get all components present in this scene of specified type */
- (nonnull NSArray<BNBComponent *> *)getComponents:(BNBComponentType)type;

/** Return first found layer with name `layerName` or NULL if such layer doesn't exist. */
- (nullable BNBLayer *)getLayer:(nonnull NSString *)layerName;

- (void)removeLayer:(nullable BNBLayer *)layer;

- (void)setRenderList:(nullable BNBRenderList *)renderList;

- (nullable BNBRenderList *)getRenderList;

- (void)clearRenderList;

- (nullable BNBCamera *)getCamera;

- (void)enableRecognizerFeature:(BNBFeatureId)feature;

- (void)disableRecognizerFeature:(BNBFeatureId)feature;

- (BNBTriggerStatusType)getTriggerStatus:(BNBTriggerType)trigger;

- (nullable BNBEntity *)createEntity:(nonnull NSString *)name;

- (int64_t)getNativeContext;

@end
