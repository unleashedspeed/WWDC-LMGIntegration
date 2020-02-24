//
//  LMGDASocialMedia+LocalData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

@import LMGDataAccess;
#import "LMGLDSocialMedia.h"

@interface LMGDASocialMedia (LocalData)

- (nonnull LMGLDSocialMedia *)toLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end

@interface LMGLDSocialMedia (LocalData)

- (nonnull LMGDASocialMedia *)toDataAccess;

@end

@interface NSArray (SocialMediaLocalData)

- (nonnull NSArray<LMGLDSocialMedia *> *)socialMediaToLocalDataWith:(nonnull NSManagedObjectContext *)context;

@end
