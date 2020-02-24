//
//  LMGSessionLocalSource.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-10.
//

#import <Foundation/Foundation.h>
#import "LMGLDKeyValueStorage.h"
@import LMGDataAccess;

@interface LMGLDSessionLocalSource : NSObject<LMGDASessionLocalSource>

- (nonnull instancetype)initWithStorage:(nonnull LMGLDKeyValueStorage *)storage NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

@interface LMGDASession (NSDiscardableContent)<NSDiscardableContent>

@end
