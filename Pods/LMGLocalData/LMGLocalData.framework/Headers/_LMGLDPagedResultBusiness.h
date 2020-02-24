// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDPagedResultBusiness.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDBusiness;
@class LMGLDOffer;
@class LMGLDPagedResult;

@interface LMGLDPagedResultBusinessID : NSManagedObjectID {}
@end

@interface _LMGLDPagedResultBusiness : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDPagedResultBusinessID *objectID;

@property (nonatomic, strong, nullable) LMGLDBusiness *business;

@property (nonatomic, strong, nullable) NSOrderedSet<LMGLDOffer*> *offers;
- (nullable NSMutableOrderedSet<LMGLDOffer*>*)offersSet;

@property (nonatomic, strong, nullable) LMGLDPagedResult *pagedResult;

@end

@interface _LMGLDPagedResultBusiness (OffersCoreDataGeneratedAccessors)
- (void)addOffers:(NSOrderedSet<LMGLDOffer*>*)value_;
- (void)removeOffers:(NSOrderedSet<LMGLDOffer*>*)value_;
- (void)addOffersObject:(LMGLDOffer*)value_;
- (void)removeOffersObject:(LMGLDOffer*)value_;

- (void)insertObject:(LMGLDOffer*)value inOffersAtIndex:(NSUInteger)idx;
- (void)removeObjectFromOffersAtIndex:(NSUInteger)idx;
- (void)insertOffers:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeOffersAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInOffersAtIndex:(NSUInteger)idx withObject:(LMGLDOffer*)value;
- (void)replaceOffersAtIndexes:(NSIndexSet *)indexes withOffers:(NSArray *)values;

@end

@interface _LMGLDPagedResultBusiness (CoreDataGeneratedPrimitiveAccessors)

- (LMGLDBusiness*)primitiveBusiness;
- (void)setPrimitiveBusiness:(LMGLDBusiness*)value;

- (NSMutableOrderedSet<LMGLDOffer*>*)primitiveOffers;
- (void)setPrimitiveOffers:(NSMutableOrderedSet<LMGLDOffer*>*)value;

- (LMGLDPagedResult*)primitivePagedResult;
- (void)setPrimitivePagedResult:(LMGLDPagedResult*)value;

@end

@interface LMGLDPagedResultBusinessRelationships: NSObject
+ (NSString *)business;
+ (NSString *)offers;
+ (NSString *)pagedResult;
@end

NS_ASSUME_NONNULL_END
