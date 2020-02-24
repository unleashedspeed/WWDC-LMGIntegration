#import "_LMGLDPagedResult.h"

@interface LMGLDPagedResult : _LMGLDPagedResult

+ (nullable instancetype)findWithParamsDescription:(nonnull NSString *)paramsDescription in:(nonnull NSManagedObjectContext *)context expect:(NSError * _Nullable * _Nullable)error;

+ (nonnull instancetype)findOrCreateWithParamsDescription:(nonnull NSString *)paramsDescription in:(nonnull NSManagedObjectContext *)context;

+ (void)deleteWithParamsDescription:(nonnull NSString *)paramsDescription in:(nonnull NSManagedObjectContext *)context;

+ (NSUInteger)countForParamsDescription:(nonnull NSString *)paramsDescription in:(nonnull NSManagedObjectContext *)context;

@end
