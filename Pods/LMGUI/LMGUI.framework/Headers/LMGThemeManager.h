//
//  LMGThemeManager.h
//  Platform Client UI
//
//  Created by Myroslav Pomazan on 2018-08-15.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGTheme.h"

@interface LMGThemeManager : NSObject

+ (nonnull id<LMGTheme>)currentTheme;
+ (void)applyTheme:(nonnull id<LMGTheme>)theme;
+ (void)applyDefaultTheme;

@end
