#import "_LMGLDLocation.h"

@interface LMGLDLocation : _LMGLDLocation

+ (nonnull instancetype)findOrCreateWithId:(nonnull NSString *)id in:(nonnull NSManagedObjectContext *)context;
+ (nonnull NSArray<LMGLDLocation *> *)findOrCreateWithIds:(nonnull NSArray *)ids in:(nonnull NSManagedObjectContext *)context;

@end
