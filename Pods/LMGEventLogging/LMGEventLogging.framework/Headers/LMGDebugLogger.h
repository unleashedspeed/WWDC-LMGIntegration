//
//  LMGDebugLogger.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-17.
//

#import <Foundation/Foundation.h>
@import LMGNotificationBus;

@interface LMGDebugLogger : NSObject

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
