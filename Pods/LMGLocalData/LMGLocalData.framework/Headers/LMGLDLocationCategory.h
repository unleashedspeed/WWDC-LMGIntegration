#import "_LMGLDLocationCategory.h"

@interface LMGLDLocationCategory : _LMGLDLocationCategory

+ (nonnull instancetype)findOrCreateWithId:(nonnull NSString *)id in:(nonnull NSManagedObjectContext *)context;
+ (nonnull NSArray<LMGLDLocationCategory *> *)findOrCreateWithIds:(nonnull NSArray *)ids in:(nonnull NSManagedObjectContext *)context;

@end
