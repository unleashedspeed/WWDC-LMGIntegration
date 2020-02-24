// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDLocationCategory.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDBusiness;

@interface LMGLDLocationCategoryID : NSManagedObjectID {}
@end

@interface _LMGLDLocationCategory : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDLocationCategoryID *objectID;

@property (nonatomic, strong, nullable) NSString* iconUrlPath;

@property (nonatomic, strong) NSString* id;

@property (nonatomic, strong) NSString* name;

@property (nonatomic, strong) NSString* shortName;

@property (nonatomic, strong, nullable) NSSet<LMGLDBusiness*> *businesses;
- (nullable NSMutableSet<LMGLDBusiness*>*)businessesSet;

@end

@interface _LMGLDLocationCategory (BusinessesCoreDataGeneratedAccessors)
- (void)addBusinesses:(NSSet<LMGLDBusiness*>*)value_;
- (void)removeBusinesses:(NSSet<LMGLDBusiness*>*)value_;
- (void)addBusinessesObject:(LMGLDBusiness*)value_;
- (void)removeBusinessesObject:(LMGLDBusiness*)value_;

@end

@interface _LMGLDLocationCategory (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString*)primitiveIconUrlPath;
- (void)setPrimitiveIconUrlPath:(nullable NSString*)value;

- (NSString*)primitiveId;
- (void)setPrimitiveId:(NSString*)value;

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (NSString*)primitiveShortName;
- (void)setPrimitiveShortName:(NSString*)value;

- (NSMutableSet<LMGLDBusiness*>*)primitiveBusinesses;
- (void)setPrimitiveBusinesses:(NSMutableSet<LMGLDBusiness*>*)value;

@end

@interface LMGLDLocationCategoryAttributes: NSObject 
+ (NSString *)iconUrlPath;
+ (NSString *)id;
+ (NSString *)name;
+ (NSString *)shortName;
@end

@interface LMGLDLocationCategoryRelationships: NSObject
+ (NSString *)businesses;
@end

NS_ASSUME_NONNULL_END
