// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDAddress.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDCoordinate;
@class LMGLDLocation;

@interface LMGLDAddressID : NSManagedObjectID {}
@end

@interface _LMGLDAddress : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDAddressID *objectID;

@property (nonatomic, strong, nullable) NSString* building;

@property (nonatomic, strong) NSString* city;

@property (nonatomic, strong) NSString* country;

@property (nonatomic, strong) NSString* id;

@property (nonatomic, strong) NSString* postalCode;

@property (nonatomic, strong) NSString* province;

@property (nonatomic, strong) NSString* streetAddress;

@property (nonatomic, strong, nullable) NSString* suite;

@property (nonatomic, strong, nullable) LMGLDCoordinate *coordinate;

@property (nonatomic, strong, nullable) NSSet<LMGLDLocation*> *locations;
- (nullable NSMutableSet<LMGLDLocation*>*)locationsSet;

@end

@interface _LMGLDAddress (LocationsCoreDataGeneratedAccessors)
- (void)addLocations:(NSSet<LMGLDLocation*>*)value_;
- (void)removeLocations:(NSSet<LMGLDLocation*>*)value_;
- (void)addLocationsObject:(LMGLDLocation*)value_;
- (void)removeLocationsObject:(LMGLDLocation*)value_;

@end

@interface _LMGLDAddress (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString*)primitiveBuilding;
- (void)setPrimitiveBuilding:(nullable NSString*)value;

- (NSString*)primitiveCity;
- (void)setPrimitiveCity:(NSString*)value;

- (NSString*)primitiveCountry;
- (void)setPrimitiveCountry:(NSString*)value;

- (NSString*)primitiveId;
- (void)setPrimitiveId:(NSString*)value;

- (NSString*)primitivePostalCode;
- (void)setPrimitivePostalCode:(NSString*)value;

- (NSString*)primitiveProvince;
- (void)setPrimitiveProvince:(NSString*)value;

- (NSString*)primitiveStreetAddress;
- (void)setPrimitiveStreetAddress:(NSString*)value;

- (nullable NSString*)primitiveSuite;
- (void)setPrimitiveSuite:(nullable NSString*)value;

- (LMGLDCoordinate*)primitiveCoordinate;
- (void)setPrimitiveCoordinate:(LMGLDCoordinate*)value;

- (NSMutableSet<LMGLDLocation*>*)primitiveLocations;
- (void)setPrimitiveLocations:(NSMutableSet<LMGLDLocation*>*)value;

@end

@interface LMGLDAddressAttributes: NSObject 
+ (NSString *)building;
+ (NSString *)city;
+ (NSString *)country;
+ (NSString *)id;
+ (NSString *)postalCode;
+ (NSString *)province;
+ (NSString *)streetAddress;
+ (NSString *)suite;
@end

@interface LMGLDAddressRelationships: NSObject
+ (NSString *)coordinate;
+ (NSString *)locations;
@end

NS_ASSUME_NONNULL_END
