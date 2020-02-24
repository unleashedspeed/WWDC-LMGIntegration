#import "_LMGLDCollection.h"

@interface LMGLDCollection : _LMGLDCollection

+ (nonnull instancetype)findOrCreateWithId:(nonnull NSString *)id in:(nonnull NSManagedObjectContext *)context;
+ (nonnull NSArray<LMGLDCollection *> *)findOrCreateWithIds:(nonnull NSArray *)ids in:(nonnull NSManagedObjectContext *)context;

@end
