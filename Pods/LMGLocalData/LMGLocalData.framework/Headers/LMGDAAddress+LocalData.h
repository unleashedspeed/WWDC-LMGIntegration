//
//  LMGDAAddress+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDAddress.h"

@interface LMGDAAddress (LocalData)

- (nonnull LMGLDAddress *)toLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end

@interface LMGLDAddress (LocalData)

- (nonnull LMGDAAddress *)toDataAccess;

@end
