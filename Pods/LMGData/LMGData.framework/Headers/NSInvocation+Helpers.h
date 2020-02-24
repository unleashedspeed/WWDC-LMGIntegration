//
//  NSInvocation+Helpers.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-28.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSInvocation (Helpers)

// Returns an initialized invocation from a target and a selector.
+ (id)invocationWithTarget:(NSObject*)targetObject selector:(SEL)selector;

// Returns an invocation from a class and a selector. The selector property of the
// invocation is initialized but you still need to set the target before invoking it.
+ (id)invocationWithClass:(Class)targetClass selector:(SEL)selector;

// Returns an invocation from a protocol and a selector. The selector property of the
// invocation is initialized but you still need to set the target before invoking it.
+ (id)invocationWithProtocol:(Protocol*)targetProtocol selector:(SEL)selector;

@end
