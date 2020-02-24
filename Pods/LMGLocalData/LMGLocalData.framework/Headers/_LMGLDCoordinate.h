// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDCoordinate.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDAddress;

@interface LMGLDCoordinateID : NSManagedObjectID {}
@end

@interface _LMGLDCoordinate : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDCoordinateID *objectID;

@property (nonatomic, strong) NSNumber* accuracy;

@property (atomic) int16_t accuracyValue;
- (int16_t)accuracyValue;
- (void)setAccuracyValue:(int16_t)value_;

@property (nonatomic, strong) NSDate* createdAt;

@property (nonatomic, strong) NSNumber* latitude;

@property (atomic) double latitudeValue;
- (double)latitudeValue;
- (void)setLatitudeValue:(double)value_;

@property (nonatomic, strong) NSNumber* longitude;

@property (atomic) double longitudeValue;
- (double)longitudeValue;
- (void)setLongitudeValue:(double)value_;

@property (nonatomic, strong, nullable) NSSet<LMGLDAddress*> *addresses;
- (nullable NSMutableSet<LMGLDAddress*>*)addressesSet;

@end

@interface _LMGLDCoordinate (AddressesCoreDataGeneratedAccessors)
- (void)addAddresses:(NSSet<LMGLDAddress*>*)value_;
- (void)removeAddresses:(NSSet<LMGLDAddress*>*)value_;
- (void)addAddressesObject:(LMGLDAddress*)value_;
- (void)removeAddressesObject:(LMGLDAddress*)value_;

@end

@interface _LMGLDCoordinate (CoreDataGeneratedPrimitiveAccessors)

- (NSNumber*)primitiveAccuracy;
- (void)setPrimitiveAccuracy:(NSNumber*)value;

- (int16_t)primitiveAccuracyValue;
- (void)setPrimitiveAccuracyValue:(int16_t)value_;

- (NSDate*)primitiveCreatedAt;
- (void)setPrimitiveCreatedAt:(NSDate*)value;

- (NSNumber*)primitiveLatitude;
- (void)setPrimitiveLatitude:(NSNumber*)value;

- (double)primitiveLatitudeValue;
- (void)setPrimitiveLatitudeValue:(double)value_;

- (NSNumber*)primitiveLongitude;
- (void)setPrimitiveLongitude:(NSNumber*)value;

- (double)primitiveLongitudeValue;
- (void)setPrimitiveLongitudeValue:(double)value_;

- (NSMutableSet<LMGLDAddress*>*)primitiveAddresses;
- (void)setPrimitiveAddresses:(NSMutableSet<LMGLDAddress*>*)value;

@end

@interface LMGLDCoordinateAttributes: NSObject 
+ (NSString *)accuracy;
+ (NSString *)createdAt;
+ (NSString *)latitude;
+ (NSString *)longitude;
@end

@interface LMGLDCoordinateRelationships: NSObject
+ (NSString *)addresses;
@end

NS_ASSUME_NONNULL_END
