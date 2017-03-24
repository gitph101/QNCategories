//
//  UIView+QNFrame.h
//  Pods
//
//  Created by 研究院01 on 17/3/24.
//
//

#import <UIKit/UIKit.h>

@interface UIView (QNFrame)

@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat top;         
@property (nonatomic) CGFloat right;       
@property (nonatomic) CGFloat bottom;

@property (nonatomic) CGFloat width;       
@property (nonatomic) CGFloat height;

@property (nonatomic) CGFloat centerX;     
@property (nonatomic) CGFloat centerY;

@property (nonatomic) CGPoint origin;      
@property (nonatomic) CGSize  size;

@end
