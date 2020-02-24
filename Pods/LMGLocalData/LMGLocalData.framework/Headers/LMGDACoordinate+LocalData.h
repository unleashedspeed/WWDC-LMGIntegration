//
//  LMGDACoordinate+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDCoordinate.h"


@interface LMGDACoordinate (LocalData)

- (nonnull LMGLDCoordinate *)toLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end

@interface LMGLDCoordinate (LocalData)

- (nonnull LMGDACoordinate *)toDataAccess;

@end
