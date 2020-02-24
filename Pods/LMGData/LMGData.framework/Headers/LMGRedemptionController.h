//
//  LMGRedemptionController.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGRedemptionObserver.h"
#import "LMGOperationFactory.h"
#import "LMGCancellable.h"

extern NSString *_Nonnull const LMGRedemptionControllerErrorDomain;
extern NSInteger const LMGRedemptionControllerErrorRequestCancelled;

@class LMGClient;
@class LMGRedemptionState;

@interface LMGRedemptionController : NSObject

@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *offerId;
@property (nonnull, nonatomic, copy, readonly) LMGPlatformId *locationId;
@property (nullable, nonatomic, copy, readonly) LMGRedemptionState *currentState;

- (nonnull instancetype)initWith:(nonnull id<LMGOfferRedemptionOperationsFactory,LMGDeviceLocationOperationsFactory>)operationFactory queue:(nonnull NSOperationQueue *)queue offerId:(nonnull LMGPlatformId *)offerId locationId:(nonnull LMGPlatformId *)locationId NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull id<LMGCancellable>)refresh;
- (nullable id<LMGCancellable>)transitionToNextState;

- (void)addObserver:(nonnull id<LMGRedemptionObserver>)observer;
- (void)removeObserver:(nonnull id<LMGRedemptionObserver>)observer;

@end

@interface NSError (LMGRedemptionOperationsFactory)

+ (nonnull NSError *)redemptionCancelled;

@end
