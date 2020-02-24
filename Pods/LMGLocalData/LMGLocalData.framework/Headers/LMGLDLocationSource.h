//
//  LMGLDLocationSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
@import LMGDataAccess;

@interface LMGLDLocationSource : NSObject<LMGDALocationLocalSource>

- (nonnull instancetype)initWithManagedObjectContext:(nonnull NSManagedObjectContext *)moc NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
