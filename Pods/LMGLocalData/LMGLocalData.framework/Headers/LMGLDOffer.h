#import "_LMGLDOffer.h"

@interface LMGLDOffer : _LMGLDOffer

+ (nonnull instancetype)findOrCreateWithId:(nonnull NSString *)id in:(nonnull NSManagedObjectContext *)context;
+ (nonnull NSArray<LMGLDOffer *> *)findOrCreateWithIds:(nonnull NSArray *)ids in:(nonnull NSManagedObjectContext *)context;

@end
