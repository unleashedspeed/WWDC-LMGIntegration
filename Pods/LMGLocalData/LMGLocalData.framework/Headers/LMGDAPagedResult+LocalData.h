//
//  LMGDAPagedResult+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDPagedResult.h"


@interface LMGDAPagedResult (LocalData)

- (nonnull LMGLDPagedResult *)toLocalDataWith:(nonnull NSManagedObjectContext *)context paramsDescription:(nonnull NSString *)paramsDescription;

@end

@interface LMGLDPagedResult (LocalData)

- (nonnull LMGDAPagedResult *)toDataAccess;

@end
