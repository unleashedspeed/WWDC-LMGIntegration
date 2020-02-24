// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDOffer.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDBusiness;
@class LMGLDLocation;
@class LMGLDPagedResultBusiness;
@class LMGLDSchedule;

@interface LMGLDOfferID : NSManagedObjectID {}
@end

@interface _LMGLDOffer : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDOfferID *objectID;

@property (nonatomic, strong, nullable) NSNumber* bookmarked;

@property (atomic) BOOL bookmarkedValue;
- (BOOL)bookmarkedValue;
- (void)setBookmarkedValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSString* details;

@property (nonatomic, strong, nullable) NSNumber* flag;

@property (atomic) int16_t flagValue;
- (int16_t)flagValue;
- (void)setFlagValue:(int16_t)value_;

@property (nonatomic, strong) NSString* headline;

@property (nonatomic, strong, nullable) NSString* heroImage;

@property (nonatomic, strong) NSString* id;

@property (nonatomic, strong) NSNumber* isFullyLoaded;

@property (atomic) BOOL isFullyLoadedValue;
- (BOOL)isFullyLoadedValue;
- (void)setIsFullyLoadedValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSString* legal;

@property (nonatomic, strong, nullable) NSString* promoCode;

@property (nonatomic, strong, nullable) NSString* shareUrl;

@property (nonatomic, strong) NSString* subHeadline;

@property (nonatomic, strong, nullable) LMGLDBusiness *business;

@property (nonatomic, strong, nullable) NSSet<LMGLDLocation*> *locations;
- (nullable NSMutableSet<LMGLDLocation*>*)locationsSet;

@property (nonatomic, strong, nullable) NSSet<LMGLDPagedResultBusiness*> *pagedResultBusinessIndex;
- (nullable NSMutableSet<LMGLDPagedResultBusiness*>*)pagedResultBusinessIndexSet;

@property (nonatomic, strong, nullable) LMGLDSchedule *redemptionSchedule;

@end

@interface _LMGLDOffer (LocationsCoreDataGeneratedAccessors)
- (void)addLocations:(NSSet<LMGLDLocation*>*)value_;
- (void)removeLocations:(NSSet<LMGLDLocation*>*)value_;
- (void)addLocationsObject:(LMGLDLocation*)value_;
- (void)removeLocationsObject:(LMGLDLocation*)value_;

@end

@interface _LMGLDOffer (PagedResultBusinessIndexCoreDataGeneratedAccessors)
- (void)addPagedResultBusinessIndex:(NSSet<LMGLDPagedResultBusiness*>*)value_;
- (void)removePagedResultBusinessIndex:(NSSet<LMGLDPagedResultBusiness*>*)value_;
- (void)addPagedResultBusinessIndexObject:(LMGLDPagedResultBusiness*)value_;
- (void)removePagedResultBusinessIndexObject:(LMGLDPagedResultBusiness*)value_;

@end

@interface _LMGLDOffer (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSNumber*)primitiveBookmarked;
- (void)setPrimitiveBookmarked:(nullable NSNumber*)value;

- (BOOL)primitiveBookmarkedValue;
- (void)setPrimitiveBookmarkedValue:(BOOL)value_;

- (nullable NSString*)primitiveDetails;
- (void)setPrimitiveDetails:(nullable NSString*)value;

- (nullable NSNumber*)primitiveFlag;
- (void)setPrimitiveFlag:(nullable NSNumber*)value;

- (int16_t)primitiveFlagValue;
- (void)setPrimitiveFlagValue:(int16_t)value_;

- (NSString*)primitiveHeadline;
- (void)setPrimitiveHeadline:(NSString*)value;

- (nullable NSString*)primitiveHeroImage;
- (void)setPrimitiveHeroImage:(nullable NSString*)value;

- (NSString*)primitiveId;
- (void)setPrimitiveId:(NSString*)value;

- (NSNumber*)primitiveIsFullyLoaded;
- (void)setPrimitiveIsFullyLoaded:(NSNumber*)value;

- (BOOL)primitiveIsFullyLoadedValue;
- (void)setPrimitiveIsFullyLoadedValue:(BOOL)value_;

- (nullable NSString*)primitiveLegal;
- (void)setPrimitiveLegal:(nullable NSString*)value;

- (nullable NSString*)primitivePromoCode;
- (void)setPrimitivePromoCode:(nullable NSString*)value;

- (NSString*)primitiveSubHeadline;
- (void)setPrimitiveSubHeadline:(NSString*)value;

- (LMGLDBusiness*)primitiveBusiness;
- (void)setPrimitiveBusiness:(LMGLDBusiness*)value;

- (NSMutableSet<LMGLDLocation*>*)primitiveLocations;
- (void)setPrimitiveLocations:(NSMutableSet<LMGLDLocation*>*)value;

- (NSMutableSet<LMGLDPagedResultBusiness*>*)primitivePagedResultBusinessIndex;
- (void)setPrimitivePagedResultBusinessIndex:(NSMutableSet<LMGLDPagedResultBusiness*>*)value;

- (LMGLDSchedule*)primitiveRedemptionSchedule;
- (void)setPrimitiveRedemptionSchedule:(LMGLDSchedule*)value;

@end

@interface LMGLDOfferAttributes: NSObject 
+ (NSString *)bookmarked;
+ (NSString *)details;
+ (NSString *)flag;
+ (NSString *)headline;
+ (NSString *)heroImage;
+ (NSString *)id;
+ (NSString *)isFullyLoaded;
+ (NSString *)legal;
+ (NSString *)promoCode;
+ (NSString *)subHeadline;
@end

@interface LMGLDOfferRelationships: NSObject
+ (NSString *)business;
+ (NSString *)locations;
+ (NSString *)pagedResultBusinessIndex;
+ (NSString *)redemptionSchedule;
@end

NS_ASSUME_NONNULL_END
