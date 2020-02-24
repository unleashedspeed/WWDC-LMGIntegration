//
//  LMGCollectionRouter.h
//  Platform Client UI
//
//  Created by Myroslav Pomazan on 2018-08-28.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
@import LMGData;

@interface LMGCollectionWireframe : NSObject

+ (nonnull UIViewController *)collectionViewControllerFor:(nonnull LMGPlatformId *)collectionId;
+ (nonnull UIViewController *)collectionViewControllerFor:(nonnull LMGPlatformId *)collectionId branding:(nullable LMGBranding *)branding;
+ (nonnull UIViewController *)embeddedCollectionViewControllerFor:(nonnull LMGPlatformId *)collectionId;
    
@end
