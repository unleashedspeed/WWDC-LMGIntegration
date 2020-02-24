//
//  LMGDABusiness+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDBusiness.h"

@interface LMGDABusiness (LocalData)

- (nonnull LMGLDBusiness *)toLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end

@interface LMGLDBusiness (LocalData)

- (nonnull LMGDABusiness *)toDataAccess;
- (nonnull LMGDABusiness *)toBasicDataAccess;
- (void)mergeDataFrom:(nonnull LMGDABusiness *)business;

@end

@interface NSArray (BusinessLocalData)

- (nonnull NSArray<LMGLDPagedResultBusiness *> *)pagedResultBusinessesToLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end
