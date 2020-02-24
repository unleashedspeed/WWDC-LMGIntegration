//
//  LMGDASchedule+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDSchedule.h"

@interface LMGDASchedule (LocalData)

- (nonnull LMGLDSchedule *)toLocalDataWithContext:(nonnull NSManagedObjectContext *)context;

@end

@interface LMGLDSchedule (LocalData)

- (nonnull LMGDASchedule *)toDataAccess;

@end
