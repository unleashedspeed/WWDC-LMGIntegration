#import "_LMGLDAddress.h"

@interface LMGLDAddress : _LMGLDAddress

+ (nonnull instancetype)findOrCreateWithId:(nonnull NSString *)id in:(nonnull NSManagedObjectContext *)context;

@end
