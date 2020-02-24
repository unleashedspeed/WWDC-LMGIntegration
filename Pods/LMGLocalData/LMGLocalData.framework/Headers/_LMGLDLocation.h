// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDLocation.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDAddress;
@class LMGLDBusiness;
@class LMGLDOffer;
@class LMGLDPagedResultLocation;

@interface LMGLDLocationID : NSManagedObjectID {}
@end

@interface _LMGLDLocation : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDLocationID *objectID;

@property (nonatomic, strong, nullable) NSNumber* distance;

@property (atomic) int32_t distanceValue;
- (int32_t)distanceValue;
- (void)setDistanceValue:(int32_t)value_;

@property (nonatomic, strong) NSString* id;

@property (nonatomic, strong) NSString* name;

@property (nonatomic, strong, nullable) NSString* phoneNumber;

@property (nonatomic, strong, nullable) NSString* shareUrl;

@property (nonatomic, strong, nullable) NSString* websiteUrlPath;

@property (nonatomic, strong, nullable) LMGLDAddress *address;

@property (nonatomic, strong, nullable) LMGLDBusiness *business;

@property (nonatomic, strong, nullable) NSSet<LMGLDOffer*> *offer;
- (nullable NSMutableSet<LMGLDOffer*>*)offerSet;

@property (nonatomic, strong, nullable) NSSet<LMGLDPagedResultLocation*> *pagedResult;
- (nullable NSMutableSet<LMGLDPagedResultLocation*>*)pagedResultSet;

@end

@interface _LMGLDLocation (OfferCoreDataGeneratedAccessors)
- (void)addOffer:(NSSet<LMGLDOffer*>*)value_;
- (void)removeOffer:(NSSet<LMGLDOffer*>*)value_;
- (void)addOfferObject:(LMGLDOffer*)value_;
- (void)removeOfferObject:(LMGLDOffer*)value_;

@end

@interface _LMGLDLocation (PagedResultCoreDataGeneratedAccessors)
- (void)addPagedResult:(NSSet<LMGLDPagedResultLocation*>*)value_;
- (void)removePagedResult:(NSSet<LMGLDPagedResultLocation*>*)value_;
- (void)addPagedResultObject:(LMGLDPagedResultLocation*)value_;
- (void)removePagedResultObject:(LMGLDPagedResultLocation*)value_;

@end

@interface _LMGLDLocation (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSNumber*)primitiveDistance;
- (void)setPrimitiveDistance:(nullable NSNumber*)value;

- (int32_t)primitiveDistanceValue;
- (void)setPrimitiveDistanceValue:(int32_t)value_;

- (NSString*)primitiveId;
- (void)setPrimitiveId:(NSString*)value;

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (nullable NSString*)primitivePhoneNumber;
- (void)setPrimitivePhoneNumber:(nullable NSString*)value;

- (nullable NSString*)primitiveWebsiteUrlPath;
- (void)setPrimitiveWebsiteUrlPath:(nullable NSString*)value;

- (LMGLDAddress*)primitiveAddress;
- (void)setPrimitiveAddress:(LMGLDAddress*)value;

- (LMGLDBusiness*)primitiveBusiness;
- (void)setPrimitiveBusiness:(LMGLDBusiness*)value;

- (NSMutableSet<LMGLDOffer*>*)primitiveOffer;
- (void)setPrimitiveOffer:(NSMutableSet<LMGLDOffer*>*)value;

- (NSMutableSet<LMGLDPagedResultLocation*>*)primitivePagedResult;
- (void)setPrimitivePagedResult:(NSMutableSet<LMGLDPagedResultLocation*>*)value;

@end

@interface LMGLDLocationAttributes: NSObject 
+ (NSString *)distance;
+ (NSString *)id;
+ (NSString *)name;
+ (NSString *)phoneNumber;
+ (NSString *)websiteUrlPath;
@end

@interface LMGLDLocationRelationships: NSObject
+ (NSString *)address;
+ (NSString *)business;
+ (NSString *)offer;
+ (NSString *)pagedResult;
@end

NS_ASSUME_NONNULL_END
