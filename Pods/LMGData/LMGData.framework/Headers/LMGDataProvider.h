//
//  LMGDataProvider.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-24.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
@import LMGDomain;
#import "LMGSafeObservable.h"
#import "LMGUseCaseOperation.h"
#import "LMGCancellable.h"

@protocol LMGDataProviderObserver;
@class LMGContentFilter;

@interface LMGDataProvider<DataType, Params : id<LMGDataListRequestParams>> : NSObject

- (nonnull instancetype)initWithQueue:(nonnull NSOperationQueue *)queue contentFilter:(nonnull LMGContentFilter *)contentFilter notificationBus:(nonnull id<LMGNotificationCenter>)notificationBus factoryBlock:(LMGUseCaseOperation<Params, LMGPagedResult<DataType> *> *_Nonnull(^_Nonnull)(void))factoryBlock NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@property (nonatomic, assign, readonly) BOOL hasNextPage;

- (nullable Params)params;
- (void)setParams:(nonnull Params)params;

- (nonnull NSArray<DataType> *)allObjects;
- (nonnull id<LMGCancellable>)fetchWithReload:(BOOL)shouldReload;
- (nullable id<LMGCancellable>)loadNextPage;

- (nullable DataType)objectAtIndex:(NSInteger)index;
- (NSInteger)numberOfObjects;

- (void)addObserver:(nonnull id<LMGDataProviderObserver>)observer;
- (void)removeObserver:(nonnull id<LMGDataProviderObserver>)observer;
- (void)notifyResult:(nonnull NSArray<DataType> *)result;
- (void)notifyError:(nonnull NSError *)error;

@end

extern NSString *_Nonnull const lmgDataProviderDomain;
extern NSInteger const lmgNoDataErrorCode;

@interface NSError (NoData)

+ (nonnull instancetype)noData;

@end
