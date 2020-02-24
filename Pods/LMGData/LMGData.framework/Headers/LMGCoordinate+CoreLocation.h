//
//  LMGCoordinate+CoreLocation.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-28.
//

#import <CoreLocation/CoreLocation.h>
@import LMGDomain;

@interface LMGCoordinate (CoreLocation)

+ (nonnull instancetype)coordinateFrom:(nonnull CLLocation *)location;

@end
