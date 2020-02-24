// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDSchedule.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDOffer;

@interface LMGLDScheduleID : NSManagedObjectID {}
@end

@interface _LMGLDSchedule : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDScheduleID *objectID;

@property (nonatomic, strong) NSString* humanReadable;

@property (nonatomic, strong, nullable) LMGLDOffer *offer;

@end

@interface _LMGLDSchedule (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveHumanReadable;
- (void)setPrimitiveHumanReadable:(NSString*)value;

- (LMGLDOffer*)primitiveOffer;
- (void)setPrimitiveOffer:(LMGLDOffer*)value;

@end

@interface LMGLDScheduleAttributes: NSObject 
+ (NSString *)humanReadable;
@end

@interface LMGLDScheduleRelationships: NSObject
+ (NSString *)offer;
@end

NS_ASSUME_NONNULL_END
