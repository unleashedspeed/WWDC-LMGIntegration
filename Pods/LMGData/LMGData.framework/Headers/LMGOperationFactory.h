//
//  LMGOperationFactory.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-20.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
@import LMGDomain;
#import "LMGUseCaseOperation.h"

@protocol LMGIdentificationOperationsFactory <NSObject>

- (nonnull LMGUseCaseOperation<NoParams *, LMGUser *> *)getUser;
- (nonnull LMGUseCaseOperation<LMGIdentifyUserParams *, LMGUser *> *)identifyUser;
- (nonnull LMGUseCaseOperation<LMGIntegrationKey *, LMGSession *> *)startSession;
- (nonnull LMGUseCaseOperation<NoParams *, NoParams *> *)logout;

@end

@protocol LMGBusinessOperationsFactory <NSObject>

- (nonnull LMGUseCaseOperation<LMGBusinessesListRequestParams *, LMGPagedResult<LMGBusiness *> *> *)getBusinessList;
- (nonnull LMGUseCaseOperation<LMGCollectionRequestParams *, LMGPagedResult<LMGBusiness *> *> *)getCollectionBusinessesList;
- (nonnull LMGUseCaseOperation<LMGDetailsRequestParams *, LMGBusiness *> *)getBusinessDetails;

@end

@protocol LMGOfferOperationsFactory <NSObject>

- (nonnull LMGUseCaseOperation<LMGDetailsRequestParams *, LMGOffer *> *)getOfferDetails;
- (nonnull LMGUseCaseOperation<LMGBookmarkOfferParams *, NoParams *> *)bookmarkOffer;

@end

@protocol LMGOfferRedemptionOperationsFactory <NSObject>

- (nonnull LMGUseCaseOperation<LMGDetailsRequestParams *, LMGRedemptionState *> *)getRedemptionState;
- (nonnull LMGUseCaseOperation<LMGRedemptionTransitionRequestParams *, LMGRedemptionState *> *)transitionToNextState;

@end

@protocol LMGCollectionOperationsFactory <NSObject>

- (nonnull LMGUseCaseOperation<LMGDetailsRequestParams *, LMGCollection *> *)getCollectionDetails;
- (nonnull LMGUseCaseOperation<LMGCollectionsListRequestParams *, LMGPagedResult<LMGCollection *> *> *)getCollectionsList;

@end

@protocol LMGLocationOperationsFactory <NSObject>

- (nonnull LMGUseCaseOperation<LMGLocationsMapRequestParams *, LMGPagedResult<LMGLocation *> *> *)getMapLocations;

@end

@protocol LMGSearchTermsOperationsFactory <NSObject>

- (nonnull LMGUseCaseOperation<NoParams *, NSArray<NSString *> *> *)getSearchTerms;
- (nonnull LMGUseCaseOperation<LMGSearchTermsRequestParams *, NoParams *> *)saveSearchTerm;

@end

@protocol LMGDeviceLocationOperationsFactory <NSObject>

- (nonnull LMGUseCaseOperation<LMGLocationRequestParams *, LMGCoordinate *> *)getCurrentLocation;

@end

@protocol LMGOperationFactory <LMGIdentificationOperationsFactory, LMGBusinessOperationsFactory, LMGOfferOperationsFactory, LMGOfferRedemptionOperationsFactory, LMGCollectionOperationsFactory, LMGLocationOperationsFactory, LMGDeviceLocationOperationsFactory, LMGSearchTermsOperationsFactory>
@end
