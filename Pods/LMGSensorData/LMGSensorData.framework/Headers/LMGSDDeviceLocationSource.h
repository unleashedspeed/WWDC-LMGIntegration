//
//  LMGSDDeviceLocationSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
@import LMGDataAccess;
#import "LMGSDCLLocationManager.h"

@interface LMGSDDeviceLocationSource : NSObject<LMGDADeviceLocationSensorSource>

- (nonnull instancetype)initWithManager:(nonnull LMGSDCLLocationManager *)locationManager NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
