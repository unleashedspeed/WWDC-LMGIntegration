//
//  LMGSDCLLocationManager.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface LMGSDCLLocationManager : NSObject

- (nonnull instancetype)initWithManager:(nonnull CLLocationManager *)locationManager NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (BOOL)isAuthorized;
- (void)getLocationWithAccuracy:(CLLocationAccuracy)accuracy completion:(void (^)(CLLocation *location, NSError *error))completionBlock;

@end
