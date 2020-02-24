//
//  LMGData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-11-20.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for LMGData.
FOUNDATION_EXPORT double LMGDataVersionNumber;

//! Project version string for LMGData.
FOUNDATION_EXPORT const unsigned char LMGDataVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LMGData/PublicHeader.h>

#import <LMGData/LMGClient.h>
#import <LMGData/LMGClient+Shared.h>
#import <LMGData/LMGOperationFactory.h>
#import <LMGData/LMGSafeObservable.h>
#import <LMGData/LMGUseCaseOperation.h>
#import <LMGData/LMGUseCaseOperationFactory.h>
#import <LMGData/LMGCoordinate+CoreLocation.h>
#import <LMGData/NSInvocation+Helpers.h>
#import <LMGData/LMGDataProvider.h>
#import <LMGData/LMGDataProviderObserver.h>
#import <LMGData/LMGRedemptionController.h>
#import <LMGData/LMGRedemptionObserver.h>
#import <LMGData/LMGCancellable.h>
#import <LMGData/LMGUseCaseOperation+Cancellable.h>
