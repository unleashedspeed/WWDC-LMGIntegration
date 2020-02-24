//
//  LMGLDCollectionLocalSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-20.
//

#import <Foundation/Foundation.h>
@import LMGDataAccess;

@interface LMGLDCollectionLocalSource : NSObject<LMGDACollectionLocalSource>

- (nonnull instancetype)initWithManagedObjectContext:(nonnull NSManagedObjectContext *)moc NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
