//
//  LMGDACollection+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDCollection.h"

@interface LMGDACollection (LocalData)

- (nonnull LMGLDCollection *)toLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end

@interface LMGLDCollection (LocalData)

- (nonnull LMGDACollection *)toDataAccess;
- (void)mergeDataFrom:(nonnull LMGDACollection *)collection;

@end

@interface NSArray (CollectionLocalData)

- (nonnull NSArray<LMGLDCollection *> *)collectionsToLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end
