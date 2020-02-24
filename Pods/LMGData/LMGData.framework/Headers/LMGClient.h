//
//  LMGClient.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-19.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@import LMGDomain;
#import "LMGDataProvider.h"
#import "LMGRedemptionController.h"
#import "LMGCancellable.h"

@protocol LMGOperationFactory;

@interface LMGClient : NSObject

@property (nonnull, nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nullable, nonatomic, readonly) LMGContentFilter *contentFilter;

- (nonnull instancetype)initWith:(nonnull id<LMGOperationFactory>)operationFactory queue:(nonnull NSOperationQueue *)queue notificationCenter:(nonnull NSNotificationCenter *)notificationCenter NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (void)setIntegrationKey:(nonnull LMGIntegrationKey *)integrationKey;

- (void)getUserWithBlock:(void (^_Nonnull)(LMGUser * _Nonnull))block;
- (void)identify:(nonnull LMGUserId *)userId traits:(nullable LMGUserTraits *)traits;
- (void)setUserHash:(nullable LMGUserHMAC *)userHash;
- (void)updateUser:(nonnull LMGUserTraits *)traits;
- (void)logout;

- (void)getSearchTermsWithBlock:(void (^_Nonnull)(NSArray<NSString *> * _Nonnull terms))block;
- (void)saveSearchTerm:(nonnull NSString *)term;

- (void)setContentFilterWithBuilder:(void (^_Nullable)(LMGContentFilterBuilder * _Nonnull builder))builderBlock;

- (nonnull id<LMGCancellable>)getBusinessWithParams:(nonnull LMGDetailsRequestParams *)params completion:(void (^_Nonnull)(LMGBusiness * _Nullable business, NSError * _Nullable error))block;
- (nonnull LMGDataProvider<LMGBusiness *, LMGBusinessesListRequestParams *> *)businessListProvider;
- (nonnull LMGDataProvider<LMGBusiness *, LMGCollectionRequestParams *> *)collectionBusinessesListProvider;

- (nonnull id<LMGCancellable>)getOfferWithParams:(nonnull LMGDetailsRequestParams *)params completion:(void (^_Nonnull)(LMGOffer * _Nullable offer, NSError * _Nullable error))block;
- (nonnull id<LMGCancellable>)bookmark:(BOOL)bookmark offer:(nonnull LMGPlatformId *)offerId atLocation:(nullable LMGPlatformId *)locationId completion:(void (^_Nonnull)(NSError * _Nullable error))block;

- (nonnull id<LMGCancellable>)getCollectionWithParams:(nonnull LMGDetailsRequestParams *)params completion:(void (^_Nonnull)(LMGCollection * _Nullable collection, NSError * _Nullable error))block;
- (nonnull LMGDataProvider<LMGCollection *, LMGCollectionsListRequestParams *> *)collectionsListProvider;

- (nonnull LMGDataProvider<LMGLocation *, LMGLocationsMapRequestParams *> *)locationsMapProvider;

- (nonnull LMGRedemptionController *)redemptionControllerForOffer:(nonnull LMGPlatformId *)offerId atLocation:(nonnull LMGPlatformId *)locationId;

@end
