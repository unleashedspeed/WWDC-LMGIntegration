#import "_LMGLDBusiness.h"

@interface LMGLDBusiness : _LMGLDBusiness


+ (nullable instancetype)findWithId:(nonnull NSString *)id in:(nonnull NSManagedObjectContext *)context expect:(NSError * _Nullable * _Nullable)error;


+ (nonnull instancetype)findOrCreateWithId:(nonnull NSString *)id in:(nonnull NSManagedObjectContext *)context;


+ (nonnull NSArray<LMGLDBusiness *> *)findOrCreateWithIds:(nonnull NSArray *)ids in:(nonnull NSManagedObjectContext *)context;

@end
