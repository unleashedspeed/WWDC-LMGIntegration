//
//  LMGAnalyticsDispatcher.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-19.
//

#import <Foundation/Foundation.h>
@import LMGDomain;
@import LMGNotificationBus;


@interface LMGAnalyticsDispatcher : NSObject

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


@end
