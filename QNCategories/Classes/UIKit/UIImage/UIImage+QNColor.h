//
//  UIImage+QNColor.h
//  Pods
//
//  Created by 研究院01 on 17/3/24.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (QNColor)

+ (UIImage *)imageWithColor:(UIColor *)color;

+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

- (UIColor *)colorAtPoint:(CGPoint )point;

- (UIColor *)colorAtPixel:(CGPoint)point;

@end
