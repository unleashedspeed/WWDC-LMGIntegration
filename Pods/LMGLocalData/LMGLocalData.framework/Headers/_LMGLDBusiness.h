// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDBusiness.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDLocationCategory;
@class LMGLDLocation;
@class LMGLDOffer;
@class LMGLDPagedResultBusiness;
@class LMGLDSocialMedia;

@interface LMGLDBusinessID : NSManagedObjectID {}
@end

@interface _LMGLDBusiness : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDBusinessID *objectID;

@property (nonatomic, strong, nullable) NSString* details;

@property (nonatomic, strong, nullable) NSString* heroImage;

@property (nonatomic, strong) NSString* id;

@property (nonatomic, strong) NSNumber* isFullyLoaded;

@property (atomic) BOOL isFullyLoadedValue;
- (BOOL)isFullyLoadedValue;
- (void)setIsFullyLoadedValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSString* logoImage;

@property (nonatomic, strong) NSString* name;

@property (nonatomic, strong, nullable) NSString* phoneNumber;

@property (nonatomic, strong) NSString* shortName;

@property (nonatomic, strong, nullable) NSString* slogan;

@property (nonatomic, strong, nullable) NSString* websiteUrlPath;

@property (nonatomic, strong, nullable) NSOrderedSet<LMGLDLocationCategory*> *categories;
- (nullable NSMutableOrderedSet<LMGLDLocationCategory*>*)categoriesSet;

@property (nonatomic, strong, nullable) NSSet<LMGLDLocation*> *locations;
- (nullable NSMutableSet<LMGLDLocation*>*)locationsSet;

@property (nonatomic, strong, nullable) NSOrderedSet<LMGLDOffer*> *offers;
- (nullable NSMutableSet<LMGLDOffer*>*)offersSet;

@property (nonatomic, strong, nullable) NSSet<LMGLDPagedResultBusiness*> *pagedResults;
- (nullable NSMutableSet<LMGLDPagedResultBusiness*>*)pagedResultsSet;

@property (nonatomic, strong, nullable) NSSet<LMGLDSocialMedia*> *socialMedia;
- (nullable NSMutableSet<LMGLDSocialMedia*>*)socialMediaSet;

@end

@interface _LMGLDBusiness (CategoriesCoreDataGeneratedAccessors)
- (void)addCategories:(NSOrderedSet<LMGLDLocationCategory*>*)value_;
- (void)removeCategories:(NSOrderedSet<LMGLDLocationCategory*>*)value_;
- (void)addCategoriesObject:(LMGLDLocationCategory*)value_;
- (void)removeCategoriesObject:(LMGLDLocationCategory*)value_;

- (void)insertObject:(LMGLDLocationCategory*)value inCategoriesAtIndex:(NSUInteger)idx;
- (void)removeObjectFromCategoriesAtIndex:(NSUInteger)idx;
- (void)insertCategories:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeCategoriesAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInCategoriesAtIndex:(NSUInteger)idx withObject:(LMGLDLocationCategory*)value;
- (void)replaceCategoriesAtIndexes:(NSIndexSet *)indexes withCategories:(NSArray *)values;

@end

@interface _LMGLDBusiness (LocationsCoreDataGeneratedAccessors)
- (void)addLocations:(NSSet<LMGLDLocation*>*)value_;
- (void)removeLocations:(NSSet<LMGLDLocation*>*)value_;
- (void)addLocationsObject:(LMGLDLocation*)value_;
- (void)removeLocationsObject:(LMGLDLocation*)value_;

@end

@interface _LMGLDBusiness (OffersCoreDataGeneratedAccessors)
- (void)addOffers:(NSSet<LMGLDOffer*>*)value_;
- (void)removeOffers:(NSSet<LMGLDOffer*>*)value_;
- (void)addOffersObject:(LMGLDOffer*)value_;
- (void)removeOffersObject:(LMGLDOffer*)value_;

@end

@interface _LMGLDBusiness (PagedResultsCoreDataGeneratedAccessors)
- (void)addPagedResults:(NSSet<LMGLDPagedResultBusiness*>*)value_;
- (void)removePagedResults:(NSSet<LMGLDPagedResultBusiness*>*)value_;
- (void)addPagedResultsObject:(LMGLDPagedResultBusiness*)value_;
- (void)removePagedResultsObject:(LMGLDPagedResultBusiness*)value_;

@end

@interface _LMGLDBusiness (SocialMediaCoreDataGeneratedAccessors)
- (void)addSocialMedia:(NSSet<LMGLDSocialMedia*>*)value_;
- (void)removeSocialMedia:(NSSet<LMGLDSocialMedia*>*)value_;
- (void)addSocialMediaObject:(LMGLDSocialMedia*)value_;
- (void)removeSocialMediaObject:(LMGLDSocialMedia*)value_;

@end

@interface _LMGLDBusiness (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString*)primitiveDetails;
- (void)setPrimitiveDetails:(nullable NSString*)value;

- (nullable NSString*)primitiveHeroImage;
- (void)setPrimitiveHeroImage:(nullable NSString*)value;

- (NSString*)primitiveId;
- (void)setPrimitiveId:(NSString*)value;

- (NSNumber*)primitiveIsFullyLoaded;
- (void)setPrimitiveIsFullyLoaded:(NSNumber*)value;

- (BOOL)primitiveIsFullyLoadedValue;
- (void)setPrimitiveIsFullyLoadedValue:(BOOL)value_;

- (nullable NSString*)primitiveLogoImage;
- (void)setPrimitiveLogoImage:(nullable NSString*)value;

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (nullable NSString*)primitivePhoneNumber;
- (void)setPrimitivePhoneNumber:(nullable NSString*)value;

- (NSString*)primitiveShortName;
- (void)setPrimitiveShortName:(NSString*)value;

- (nullable NSString*)primitiveSlogan;
- (void)setPrimitiveSlogan:(nullable NSString*)value;

- (nullable NSString*)primitiveWebsiteUrlPath;
- (void)setPrimitiveWebsiteUrlPath:(nullable NSString*)value;

- (NSMutableOrderedSet<LMGLDLocationCategory*>*)primitiveCategories;
- (void)setPrimitiveCategories:(NSMutableOrderedSet<LMGLDLocationCategory*>*)value;

- (NSMutableSet<LMGLDLocation*>*)primitiveLocations;
- (void)setPrimitiveLocations:(NSMutableSet<LMGLDLocation*>*)value;

- (NSMutableSet<LMGLDOffer*>*)primitiveOffers;
- (void)setPrimitiveOffers:(NSMutableSet<LMGLDOffer*>*)value;

- (NSMutableSet<LMGLDPagedResultBusiness*>*)primitivePagedResults;
- (void)setPrimitivePagedResults:(NSMutableSet<LMGLDPagedResultBusiness*>*)value;

- (NSMutableSet<LMGLDSocialMedia*>*)primitiveSocialMedia;
- (void)setPrimitiveSocialMedia:(NSMutableSet<LMGLDSocialMedia*>*)value;

@end

@interface LMGLDBusinessAttributes: NSObject 
+ (NSString *)details;
+ (NSString *)heroImage;
+ (NSString *)id;
+ (NSString *)isFullyLoaded;
+ (NSString *)logoImage;
+ (NSString *)name;
+ (NSString *)phoneNumber;
+ (NSString *)shortName;
+ (NSString *)slogan;
+ (NSString *)websiteUrlPath;
@end

@interface LMGLDBusinessRelationships: NSObject
+ (NSString *)categories;
+ (NSString *)locations;
+ (NSString *)offers;
+ (NSString *)pagedResults;
+ (NSString *)socialMedia;
@end

NS_ASSUME_NONNULL_END
