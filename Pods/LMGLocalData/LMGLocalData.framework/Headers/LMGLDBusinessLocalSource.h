//
//  LMGLDBusinessLocalSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import <Foundation/Foundation.h>
@import LMGDataAccess;

@interface LMGLDBusinessLocalSource : NSObject<LMGDABusinessLocalSource>

- (nonnull instancetype)initWithManagedObjectContext:(nonnull NSManagedObjectContext *)moc NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
