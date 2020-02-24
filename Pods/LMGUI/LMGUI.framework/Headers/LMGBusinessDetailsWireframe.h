//
//  LMGBusinessDetailsWireframe.h
//  LMGUI
//
//  Created by Myroslav Pomazan on 2018-09-26.
//

#import <Foundation/Foundation.h>

@import LMGData;
@import SafariServices;

@interface LMGBusinessDetailsWireframe : NSObject

+ (nonnull UIViewController *)detailsControllerForBusiness:(nonnull LMGPlatformId *)businessId location:(nullable LMGPlatformId *)locationId;

@end
