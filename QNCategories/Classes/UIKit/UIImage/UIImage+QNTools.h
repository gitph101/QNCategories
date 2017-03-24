//
//  UIImage+QNTools.h
//  Pods
//
//  Created by 研究院01 on 17/3/24.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (QNTools)

+ (UIImage *)imageWithFileName:(NSString *)name;

+ (UIImage *)imageWithFileName:(NSString *)name inBundle:(NSBundle*)bundle;

///GIF
+ (UIImage *)animatedGIFNamed:(NSString *)name;

+ (UIImage *)animatedGIFWithData:(NSData *)data;

- (UIImage *)animatedImageByScalingAndCroppingToSize:(CGSize)size;

@end
