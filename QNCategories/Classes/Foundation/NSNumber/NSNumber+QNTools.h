//
//  NSNumber+QNTools.h
//  Pods
//
//  Created by 研究院01 on 17/3/27.
//
//

#import <Foundation/Foundation.h>

@interface NSNumber (QNTools)

/**
 Creates and returns an NSNumber object from a string.
 Valid format: @"12", @"12.345", @" -0xFF", @" .23e99 "...
 
 @param string  The string described an number.
 
 @return an NSNumber when parse succeed, or nil if an error occurs.
 */

+ (nullable NSNumber *)numberWithString:(NSString *)string;

@end
