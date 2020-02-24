//
//  LMGDALocation+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDLocation.h"

@interface LMGDALocation (LocalData)

- (nonnull LMGLDLocation *)toLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end

@interface LMGLDLocation (LocalData)

- (nonnull LMGDALocation *)toDataAccess;
- (void)mergeDataFrom:(nonnull LMGDALocation *)location;

@end

@interface NSArray (LocationLocalData)

- (nonnull NSArray<LMGLDLocation *> *)locationsToLocalDataWith:(nonnull NSManagedObjectContext *)context;
- (nonnull NSArray<LMGLDPagedResultLocation *> *)pagedResultLocationsToLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end
