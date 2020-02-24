//
//  LMGLDOfferLocalSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import <Foundation/Foundation.h>
@import LMGDataAccess;

@interface LMGLDOfferLocalSource : NSObject<LMGDAOfferLocalSource>

- (nonnull instancetype)initWithManagedObjectContext:(nonnull NSManagedObjectContext *)moc NS_DESIGNATED_INITIALIZER NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
