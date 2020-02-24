//
//  LMGLDDeviceLocationSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-28.
//

#import <Foundation/Foundation.h>
@import LMGDataAccess;
#import "LMGLDKeyValueStorage.h"

@interface LMGLDDeviceLocationSource : NSObject<LMGDADeviceLocationLocalSource>

- (nonnull instancetype)initWithStorage:(nonnull LMGLDKeyValueStorage *)storage NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
