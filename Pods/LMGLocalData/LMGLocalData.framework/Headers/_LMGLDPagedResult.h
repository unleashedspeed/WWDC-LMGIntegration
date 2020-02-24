// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDPagedResult.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDPagedResultBusiness;
@class LMGLDCollection;
@class LMGLDPagedResultLocation;

@interface LMGLDPagedResultID : NSManagedObjectID {}
@end

@interface _LMGLDPagedResult : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDPagedResultID *objectID;

@property (nonatomic, strong, nullable) NSString* nextPage;

@property (nonatomic, strong, nullable) NSString* paramsDescription;

@property (nonatomic, strong, nullable) NSOrderedSet<LMGLDPagedResultBusiness*> *businesses;
- (nullable NSMutableOrderedSet<LMGLDPagedResultBusiness*>*)businessesSet;

@property (nonatomic, strong, nullable) NSOrderedSet<LMGLDCollection*> *collections;
- (nullable NSMutableOrderedSet<LMGLDCollection*>*)collectionsSet;

@property (nonatomic, strong, nullable) NSOrderedSet<LMGLDPagedResultLocation*> *locations;
- (nullable NSMutableOrderedSet<LMGLDPagedResultLocation*>*)locationsSet;

@end

@interface _LMGLDPagedResult (BusinessesCoreDataGeneratedAccessors)
- (void)addBusinesses:(NSOrderedSet<LMGLDPagedResultBusiness*>*)value_;
- (void)removeBusinesses:(NSOrderedSet<LMGLDPagedResultBusiness*>*)value_;
- (void)addBusinessesObject:(LMGLDPagedResultBusiness*)value_;
- (void)removeBusinessesObject:(LMGLDPagedResultBusiness*)value_;

- (void)insertObject:(LMGLDPagedResultBusiness*)value inBusinessesAtIndex:(NSUInteger)idx;
- (void)removeObjectFromBusinessesAtIndex:(NSUInteger)idx;
- (void)insertBusinesses:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeBusinessesAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInBusinessesAtIndex:(NSUInteger)idx withObject:(LMGLDPagedResultBusiness*)value;
- (void)replaceBusinessesAtIndexes:(NSIndexSet *)indexes withBusinesses:(NSArray *)values;

@end

@interface _LMGLDPagedResult (CollectionsCoreDataGeneratedAccessors)
- (void)addCollections:(NSOrderedSet<LMGLDCollection*>*)value_;
- (void)removeCollections:(NSOrderedSet<LMGLDCollection*>*)value_;
- (void)addCollectionsObject:(LMGLDCollection*)value_;
- (void)removeCollectionsObject:(LMGLDCollection*)value_;

- (void)insertObject:(LMGLDCollection*)value inCollectionsAtIndex:(NSUInteger)idx;
- (void)removeObjectFromCollectionsAtIndex:(NSUInteger)idx;
- (void)insertCollections:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeCollectionsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInCollectionsAtIndex:(NSUInteger)idx withObject:(LMGLDCollection*)value;
- (void)replaceCollectionsAtIndexes:(NSIndexSet *)indexes withCollections:(NSArray *)values;

@end

@interface _LMGLDPagedResult (LocationsCoreDataGeneratedAccessors)
- (void)addLocations:(NSOrderedSet<LMGLDPagedResultLocation*>*)value_;
- (void)removeLocations:(NSOrderedSet<LMGLDPagedResultLocation*>*)value_;
- (void)addLocationsObject:(LMGLDPagedResultLocation*)value_;
- (void)removeLocationsObject:(LMGLDPagedResultLocation*)value_;

- (void)insertObject:(LMGLDPagedResultLocation*)value inLocationsAtIndex:(NSUInteger)idx;
- (void)removeObjectFromLocationsAtIndex:(NSUInteger)idx;
- (void)insertLocations:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeLocationsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInLocationsAtIndex:(NSUInteger)idx withObject:(LMGLDPagedResultLocation*)value;
- (void)replaceLocationsAtIndexes:(NSIndexSet *)indexes withLocations:(NSArray *)values;

@end

@interface _LMGLDPagedResult (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString*)primitiveNextPage;
- (void)setPrimitiveNextPage:(nullable NSString*)value;

- (nullable NSString*)primitiveParamsDescription;
- (void)setPrimitiveParamsDescription:(nullable NSString*)value;

- (NSMutableOrderedSet<LMGLDPagedResultBusiness*>*)primitiveBusinesses;
- (void)setPrimitiveBusinesses:(NSMutableOrderedSet<LMGLDPagedResultBusiness*>*)value;

- (NSMutableOrderedSet<LMGLDCollection*>*)primitiveCollections;
- (void)setPrimitiveCollections:(NSMutableOrderedSet<LMGLDCollection*>*)value;

- (NSMutableOrderedSet<LMGLDPagedResultLocation*>*)primitiveLocations;
- (void)setPrimitiveLocations:(NSMutableOrderedSet<LMGLDPagedResultLocation*>*)value;

@end

@interface LMGLDPagedResultAttributes: NSObject 
+ (NSString *)nextPage;
+ (NSString *)paramsDescription;
@end

@interface LMGLDPagedResultRelationships: NSObject
+ (NSString *)businesses;
+ (NSString *)collections;
+ (NSString *)locations;
@end

NS_ASSUME_NONNULL_END
