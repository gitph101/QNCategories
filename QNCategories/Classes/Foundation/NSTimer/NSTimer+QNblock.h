//
//  NSTimer+QNblock.h
//  Pods
//
//  Created by 研究院01 on 17/3/27.
//
//

#import <Foundation/Foundation.h>

@interface NSTimer (QNblock)

+ (NSTimer *)scheduledTimerWithTimeInterval:(NSTimeInterval)seconds block:(void (^)(NSTimer *timer))block repeats:(BOOL)repeats;

+ (NSTimer *)timerWithTimeInterval:(NSTimeInterval)seconds block:(void (^)(NSTimer *timer))block repeats:(BOOL)repeats;
@end
