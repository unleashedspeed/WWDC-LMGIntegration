//
//  LMGDALocationCategory+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDLocationCategory.h"

@interface LMGDALocationCategory (LocalData)

- (nonnull LMGLDLocationCategory *)toLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end

@interface LMGLDLocationCategory (LocalData)

- (nonnull LMGDALocationCategory *)toDataAccess;
- (void)mergeDataFrom:(nonnull LMGDALocationCategory *)locationCategory;

@end

@interface NSArray (LocationCategoryLocalData)

- (nonnull NSArray<LMGLDLocationCategory *> *)categoriesToLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end
