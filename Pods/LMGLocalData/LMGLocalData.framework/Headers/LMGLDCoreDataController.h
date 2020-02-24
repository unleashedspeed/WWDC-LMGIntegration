//
//  LMGLDCoreDataController.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-31.
//

#import <Foundation/Foundation.h>
@import CoreData;

NS_ASSUME_NONNULL_BEGIN

@interface LMGLDCoreDataController : NSObject

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
