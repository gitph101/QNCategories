//
//  UIImage+QNModify.h
//  Pods
//
//  Created by 研究院01 on 17/3/24.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (QNModify)

- (void)drawInRect:(CGRect)rect withContentMode:(UIViewContentMode)contentMode clipsToBounds:(BOOL)clips;

- (UIImage *)imageByResizeToSize:(CGSize)size;

- (UIImage *)qimageByResizeToSize:(CGSize)size contentMode:(UIViewContentMode)contentMode;

- (UIImage *)imageByCropToRect:(CGRect)rect;

- (UIImage *)imageByInsetEdge:(UIEdgeInsets)insets withColor:(UIColor *)color;

- (UIImage *)imageByRoundCornerRadius:(CGFloat)radius;

- (UIImage *)imageByRoundCornerRadius:(CGFloat)radius
                          borderWidth:(CGFloat)borderWidth
                          borderColor:(UIColor *)borderColor;

- (UIImage *)imageByRoundCornerRadius:(CGFloat)radius
                              corners:(UIRectCorner)corners
                          borderWidth:(CGFloat)borderWidth
                          borderColor:(UIColor *)borderColor
                       borderLineJoin:(CGLineJoin)borderLineJoin;

- (UIImage *)imageByRotateLeft90;

- (UIImage *)imageByRotateRight90;

- (UIImage *)imageByRotate:(CGFloat)radians fitSize:(BOOL)fitSize;

@end
