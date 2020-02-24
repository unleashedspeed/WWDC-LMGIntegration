// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDSocialMedia.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDBusiness;

@interface LMGLDSocialMediaID : NSManagedObjectID {}
@end

@interface _LMGLDSocialMedia : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDSocialMediaID *objectID;

@property (nonatomic, strong) NSString* name;

@property (nonatomic, strong) NSString* urlPath;

@property (nonatomic, strong, nullable) LMGLDBusiness *business;

@end

@interface _LMGLDSocialMedia (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (NSString*)primitiveUrlPath;
- (void)setPrimitiveUrlPath:(NSString*)value;

- (LMGLDBusiness*)primitiveBusiness;
- (void)setPrimitiveBusiness:(LMGLDBusiness*)value;

@end

@interface LMGLDSocialMediaAttributes: NSObject 
+ (NSString *)name;
+ (NSString *)urlPath;
@end

@interface LMGLDSocialMediaRelationships: NSObject
+ (NSString *)business;
@end

NS_ASSUME_NONNULL_END
