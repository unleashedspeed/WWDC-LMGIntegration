// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LMGLDCollection.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class LMGLDPagedResult;

@interface LMGLDCollectionID : NSManagedObjectID {}
@end

@interface _LMGLDCollection : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) LMGLDCollectionID *objectID;

@property (nonatomic, strong, nullable) NSString* iconUrlPath;

@property (nonatomic, strong) NSString* id;

@property (nonatomic, strong, nullable) NSString* imageUrlPath;

@property (nonatomic, strong, nullable) NSString* infoUrlPath;

@property (nonatomic, strong) NSString* name;

@property (nonatomic, strong) NSString* shortName;

@property (nonatomic, strong) NSString* slug;

@property (nonatomic, strong, nullable) NSSet<LMGLDPagedResult*> *pagedResult;
- (nullable NSMutableSet<LMGLDPagedResult*>*)pagedResultSet;

@end

@interface _LMGLDCollection (PagedResultCoreDataGeneratedAccessors)
- (void)addPagedResult:(NSSet<LMGLDPagedResult*>*)value_;
- (void)removePagedResult:(NSSet<LMGLDPagedResult*>*)value_;
- (void)addPagedResultObject:(LMGLDPagedResult*)value_;
- (void)removePagedResultObject:(LMGLDPagedResult*)value_;

@end

@interface _LMGLDCollection (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString*)primitiveIconUrlPath;
- (void)setPrimitiveIconUrlPath:(nullable NSString*)value;

- (NSString*)primitiveId;
- (void)setPrimitiveId:(NSString*)value;

- (nullable NSString*)primitiveImageUrlPath;
- (void)setPrimitiveImageUrlPath:(nullable NSString*)value;

- (nullable NSString*)primitiveInfoUrlPath;
- (void)setPrimitiveInfoUrlPath:(nullable NSString*)value;

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (NSString*)primitiveShortName;
- (void)setPrimitiveShortName:(NSString*)value;

- (NSString*)primitiveSlug;
- (void)setPrimitiveSlug:(NSString*)value;

- (NSMutableSet<LMGLDPagedResult*>*)primitivePagedResult;
- (void)setPrimitivePagedResult:(NSMutableSet<LMGLDPagedResult*>*)value;

@end

@interface LMGLDCollectionAttributes: NSObject 
+ (NSString *)iconUrlPath;
+ (NSString *)id;
+ (NSString *)imageUrlPath;
+ (NSString *)infoUrlPath;
+ (NSString *)name;
+ (NSString *)shortName;
+ (NSString *)slug;
@end

@interface LMGLDCollectionRelationships: NSObject
+ (NSString *)pagedResult;
@end

NS_ASSUME_NONNULL_END
