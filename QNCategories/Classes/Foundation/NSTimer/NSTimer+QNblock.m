//
//  NSTimer+QNblock.m
//  Pods
//
//  Created by 研究院01 on 17/3/27.
//
//

#import "NSTimer+QNblock.h"

@implementation NSTimer (QNblock)

+(id)scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^)())inBlock repeats:(BOOL)inRepeats
{
    void (^block)() = [inBlock copy];
    id ret = [self scheduledTimerWithTimeInterval:inTimeInterval target:self selector:@selector(_qn_ExecuteSimpleBlock:) userInfo:block repeats:inRepeats];
    return ret;
}

+(id)timerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^)())inBlock repeats:(BOOL)inRepeats
{
    void (^block)() = [inBlock copy];
    id ret = [self timerWithTimeInterval:inTimeInterval target:self selector:@selector(_qn_ExecuteSimpleBlock:) userInfo:block repeats:inRepeats];
    return ret;
}

+(void)_qn_ExecuteSimpleBlock:(NSTimer *)inTimer;
{
    if([inTimer userInfo])
    {
        void (^block)() = (void (^)())[inTimer userInfo];
        block();
    }
}

@end
