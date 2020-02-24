//
//  LMGRedemptionObserver.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>

@class LMGRedemptionState;

@protocol LMGRedemptionObserver <NSObject>

- (void)redemptionStateChangedTo:(nonnull LMGRedemptionState *)state;
- (void)redemptionFailedWithError:(nonnull NSError *)error;
- (void)redemptionRequiresPrompt:(void(^_Nonnull)(BOOL))resolver;

@end
