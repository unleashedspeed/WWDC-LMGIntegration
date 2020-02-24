//
//  LMGDAOffer+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDOffer.h"

@interface LMGDAOffer (LocalData)

- (nonnull LMGLDOffer *)toLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end

@interface LMGLDOffer (LocalData)

- (nonnull LMGDAOffer *)toFullDetailDataAccess;
- (nonnull LMGDAOffer *)toListDetailDataAccess;
- (void)mergeDataFrom:(nonnull LMGDAOffer *)offer;

@end

@interface NSArray (OfferLocalData)

- (nonnull NSArray<LMGLDOffer *> *)offersToLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end

