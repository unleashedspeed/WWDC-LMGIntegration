// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDPagedResultLocation.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDLocation;
@class LMGLDPagedResult;

@interface LMGLDPagedResultLocationID : NSManagedObjectID {}
@end

@interface _LMGLDPagedResultLocation : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDPagedResultLocationID *objectID;

@property (nonatomic, strong, nullable) LMGLDLocation *location;

@property (nonatomic, strong, nullable) LMGLDPagedResult *pagedResult;

@end

@interface _LMGLDPagedResultLocation (CoreDataGeneratedPrimitiveAccessors)

- (LMGLDLocation*)primitiveLocation;
- (void)setPrimitiveLocation:(LMGLDLocation*)value;

- (LMGLDPagedResult*)primitivePagedResult;
- (void)setPrimitivePagedResult:(LMGLDPagedResult*)value;

@end

@interface LMGLDPagedResultLocationRelationships: NSObject
+ (NSString *)location;
+ (NSString *)pagedResult;
@end

NS_ASSUME_NONNULL_END
