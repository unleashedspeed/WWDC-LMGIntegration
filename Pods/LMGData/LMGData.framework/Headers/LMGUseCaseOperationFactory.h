//
//  LMGUseCaseOperationFactory.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-19.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGOperationFactory.h"

@protocol LMGSessionRepository;
@protocol LMGUserRepository;
@protocol LMGOfferRepository;
@protocol LMGBusinessRepository;
@protocol LMGCollectionRepository;
@protocol LMGDeviceLocationRepository;
@protocol LMGLocationsRepository;
@protocol LMGSearchTermsRepository;

@interface LMGUseCaseOperationFactory : NSObject<LMGOperationFactory>

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter sessionRepository:(nonnull id<LMGSessionRepository>)sessionRepository userRepository:(nonnull id<LMGUserRepository>)userRepository offerRepository:(nonnull id<LMGOfferRepository>)offerRepository businessRepository:(nonnull id<LMGBusinessRepository>)businessRepository collectionRepository:(nonnull id<LMGCollectionRepository>)collectionRepository locationsRepository:(nonnull id<LMGLocationsRepository>)locationsRepository deviceLocationRepository:(nonnull id<LMGDeviceLocationRepository>)deviceLocationRepository searchTermsRepository:(nonnull id<LMGSearchTermsRepository>)searchTermsRepository NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
