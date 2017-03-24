//
//  UIColor+QNTools.h
//  Pods
//
//  Created by 研究院01 on 17/3/24.
//
//

#import <UIKit/UIKit.h>

@interface UIColor (QNTools)

/**
 随机色
 */
+ (UIColor *)randomColor;

+ (UIColor *)colorWithHex:(UInt32)hex;
+ (UIColor *)colorWithHex:(UInt32)hex andAlpha:(CGFloat)alpha;
+ (UIColor *)colorWithHexString:(NSString *)hexString;
- (NSString *)HEXString;

@end
