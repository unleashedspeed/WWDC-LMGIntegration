//
//  LMGTheme.h
//  Platform Client UI
//
//  Created by Myroslav Pomazan on 2018-08-15.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol LMGThemeSpacing

@property (nonatomic, readonly, assign) CGFloat small;
@property (nonatomic, readonly, assign) CGFloat regular;
@property (nonatomic, readonly, assign) CGFloat large;
@property (nonatomic, readonly, assign) CGFloat xLarge;
@property (nonatomic, readonly, assign) CGFloat xxLarge;
@property (nonatomic, readonly, assign) CGFloat xxxLarge;

@end

@protocol LMGThemeColour

@property (nonnull, nonatomic, readonly, strong) UIColor *brand;
@property (nonnull, nonatomic, readonly, strong) UIColor *brandVariant;
@property (nonnull, nonatomic, readonly, strong) UIColor *onBrand;

@property (nonnull, nonatomic, readonly, strong) UIColor *action;
@property (nonnull, nonatomic, readonly, strong) UIColor *redeemAction;
@property (nonnull, nonatomic, readonly, strong) UIColor *actionVariant;
@property (nonnull, nonatomic, readonly, strong) UIColor *onAction;

@property (nonnull, nonatomic, readonly, strong) UIColor *disabled;
@property (nonnull, nonatomic, readonly, strong) UIColor *onDisabled;

@property (nonnull, nonatomic, readonly, strong) UIColor *container;
@property (nonnull, nonatomic, readonly, strong) UIColor *headingOnContainer;
@property (nonnull, nonatomic, readonly, strong) UIColor *bodyOnContainer;
@property (nonnull, nonatomic, readonly, strong) UIColor *captionOnContainer;
@property (nonnull, nonatomic, readonly, strong) UIColor *pillButton;

@property (nonnull, nonatomic, readonly, strong) UIColor *surface;
@property (nonnull, nonatomic, readonly, strong) UIColor *headingOnSurface;
@property (nonnull, nonatomic, readonly, strong) UIColor *bodyOnSurface;
@property (nonnull, nonatomic, readonly, strong) UIColor *captionOnSurface;

@property (nonnull, nonatomic, readonly, strong) UIColor *headingOnImage;
@property (nonnull, nonatomic, readonly, strong) UIColor *bodyOnImage;
@property (nonnull, nonatomic, readonly, strong) UIColor *captionOnImage;

@property (nonnull, nonatomic, readonly, strong) UIColor *divider;
@property (nonnull, nonatomic, readonly, strong) UIColor *onDivider;

@property (nonnull, nonatomic, readonly, strong) UIColor *success;
@property (nonnull, nonatomic, readonly, strong) UIColor *onSuccess;
@property (nonnull, nonatomic, readonly, strong) UIColor *warning;
@property (nonnull, nonatomic, readonly, strong) UIColor *onWarning;
@property (nonnull, nonatomic, readonly, strong) UIColor *error;
@property (nonnull, nonatomic, readonly, strong) UIColor *onError;

@property (nonnull, nonatomic, readonly, strong) UIColor *exclusiveFlag;
@property (nonnull, nonatomic, readonly, strong) UIColor *limitedFlag;
@property (nonnull, nonatomic, readonly, strong) UIColor *featuredFlag;
@property (nonnull, nonatomic, readonly, strong) UIColor *neweFlag;
@property (nonnull, nonatomic, readonly, strong) UIColor *trendingFlag;
@property (nonnull, nonatomic, readonly, strong) UIColor *lockedFlag;
@property (nonnull, nonatomic, readonly, strong) UIColor *otherFlag;
@property (nonnull, nonatomic, readonly, strong) UIColor *onFlag;

@property (nonnull, nonatomic, readonly, strong) UIColor *navBar;
@property (nonnull, nonatomic, readonly, strong) UIColor *onNavBar;
@property (nonnull, nonatomic, readonly, strong) UIColor *onTransparentNavBar;

@property (nonnull, nonatomic, readonly, strong) UIColor *largeTitle;
@property (nonnull, nonatomic, readonly, strong) UIColor *title1;
@property (nonnull, nonatomic, readonly, strong) UIColor *title2;
@property (nonnull, nonatomic, readonly, strong) UIColor *title3;
@property (nonnull, nonatomic, readonly, strong) UIColor *headline;
@property (nonnull, nonatomic, readonly, strong) UIColor *body;
@property (nonnull, nonatomic, readonly, strong) UIColor *callout;
@property (nonnull, nonatomic, readonly, strong) UIColor *subhead;
@property (nonnull, nonatomic, readonly, strong) UIColor *footnote;
@property (nonnull, nonatomic, readonly, strong) UIColor *caption1;
@property (nonnull, nonatomic, readonly, strong) UIColor *caption2;
@property (nonnull, nonatomic, readonly, strong) UIColor *overline;

@end

@protocol LMGThemeTypography

@property (nonnull, nonatomic, readonly, strong) UIFont *largeTitle;
@property (nonnull, nonatomic, readonly, strong) UIFont *title1;
@property (nonnull, nonatomic, readonly, strong) UIFont *title2;
@property (nonnull, nonatomic, readonly, strong) UIFont *title3;
@property (nonnull, nonatomic, readonly, strong) UIFont *headline;
@property (nonnull, nonatomic, readonly, strong) UIFont *body;
@property (nonnull, nonatomic, readonly, strong) UIFont *callout;
@property (nonnull, nonatomic, readonly, strong) UIFont *subhead;
@property (nonnull, nonatomic, readonly, strong) UIFont *footnote;
@property (nonnull, nonatomic, readonly, strong) UIFont *caption1;
@property (nonnull, nonatomic, readonly, strong) UIFont *caption2;
@property (nonnull, nonatomic, readonly, strong) UIFont *button;
@property (nonnull, nonatomic, readonly, strong) UIFont *overline;
@property (nonnull, nonatomic, readonly, strong) UIFont *flag;

@end

@protocol LMGThemeSizing

@property (nonatomic, readonly, assign) CGFloat smallContentRadius;
@property (nonatomic, readonly, assign) CGFloat largeContentRadius;
@property (nonatomic, readonly, assign) CGFloat listDividerHeight;

@end

@protocol LMGThemeImage

@property (nonnull, nonatomic, readonly, strong) UIImage *navBarMoreIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *heroPlaceholder;
@property (nonnull, nonatomic, readonly, strong) UIImage *profilePlaceholder;
@property (nonnull, nonatomic, readonly, strong) UIImage *callIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *smSaveIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *smSavedIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *shareIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *webIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *navBarBackIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *directionsIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *openDetailIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *zoomToLocationIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *userLocation;
@property (nonnull, nonatomic, readonly, strong) UIImage *mapPin;
@property (nonnull, nonatomic, readonly, strong) UIImage *saveIcon;
@property (nonnull, nonatomic, readonly, strong) UIImage *savedIcon;
 
@end

@protocol LMGTheme

@property (nonnull, nonatomic, readonly, strong) id<LMGThemeSpacing> spacing;
@property (nonnull, nonatomic, readonly, strong) id<LMGThemeColour> colour;
@property (nonnull, nonatomic, readonly, strong) id<LMGThemeTypography> typography;
@property (nonnull, nonatomic, readonly, strong) id<LMGThemeSizing> sizing;
@property (nonnull, nonatomic, readonly, strong) id<LMGThemeImage> image;
@property (nonnull, nonatomic, readonly, strong) NSBundle *bundle;

@end

@interface LMGDefaultTheme : NSObject<LMGTheme>
@end
