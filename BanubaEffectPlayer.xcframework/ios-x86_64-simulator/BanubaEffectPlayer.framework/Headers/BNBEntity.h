// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#import "BNBComponentType.h"
#import <Foundation/Foundation.h>
@class BNBComponent;
@class BNBEntity;
@class BNBLayer;


/**
 * A structure element of the scene.
 *
 * To construct a scene, you should form a hierarchy of entities to create its
 * structure, then add different components such as lights, cameras, and
 * geometry to entities to create visible content.
 *
 * Each entity has a name which could be used for finding the entity in a hierarchy.
 *
 * Entities in the scene form a tree hierarchy between parents and children.
 *
 * Each entity could be in an enabled or disabled state. The disabling of the entity
 * is equivalent to removing the entity and all its children from the hierarchy.
 *
 * An entity is a container for components. Each entity could contain several components,
 * but only one component of each component type. The Transform component is mandatory
 * and it implicitly placed in each entity.
 *
 */
__attribute__((__visibility__("default"))) @interface BNBEntity : NSObject

/**
 * Set a new name to the entity. Name could be empty.
 *@param name (string): new entity name.
 */
- (void)setName:(nonnull NSString *)name;

/**@return entity name (string) */
- (nonnull NSString *)getName;

/**
 *add entiy as child to hierarchy
 *@param child (entity): child entity.
 */
- (void)addChild:(nullable BNBEntity *)child;

/**
 *remove entiy as child to hierarchy
 *@param child (entity): child entity.
 */
- (void)removeChild:(nullable BNBEntity *)child;

/**get all child entites list. */
- (nonnull NSArray<BNBEntity *> *)getChildren;

/**remove all child entites list. */
- (void)clearChildren;

/**
 * Perform depth-first traverse of entity tree.
 * Return first found child with name `entityName` or NULL if such an entity doesn't exist.
 *@param entityName (string): name of desired entity
 *@return found entity (entity) or null
 */
- (nullable BNBEntity *)findChildByName:(nonnull NSString *)entityName;

/**@return parent entity and null if given entity is root. */
- (nullable BNBEntity *)getParent;

/**
 *Set enable/disable entity flag. The disabling of the entity is equivalent to removing the entity and all its children from the hierarchy.
 *@param active (bool) activity flag.
 */
- (void)setActive:(BOOL)active;

/**@return activity flag (bool) */
- (BOOL)isActive;

/**
 *Add entity for given layer if it is wasn't added before.
 *@param layer (layer): layer to add.
 */
- (void)addIntoLayer:(nullable BNBLayer *)layer;

/**
 *Removes entity from given layer if it is was added before.
 *@params layer (layer): layer from remove.
 */
- (void)removeFromLayer:(nullable BNBLayer *)layer;

/**returns list of layers in which entity was added. */
- (nonnull NSArray<BNBLayer *> *)getLayers;

/**
 *add given component to entity if component of given type wasn't added before.
 *@param component (component): component to add.
 */
- (void)addComponent:(nullable BNBComponent *)component;

/**
 *check if component of given type was added.
 *@param component_type (component_type): component type to check.
 *@return flag (bool)
 */
- (BOOL)hasComponent:(BNBComponentType)type;

/**
 *get component of given type.
 *@param component_type (component_type): component type to get.
 *@return component of given type (component)
 */
- (nullable BNBComponent *)getComponent:(BNBComponentType)type;

/**
 *remove given component to entity if component of given component was added before.
 *@param component (component): component to remove.
 */
- (void)removeComponent:(nullable BNBComponent *)component;

@end