//
//  UIView+QNTools.h
//  Pods
//
//  Created by 研究院01 on 17/3/24.
//
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, QNShakeDirection) {
    QNShakeDirectionHorizontal = 0,
    QNShakeDirectionVertical
};


@interface UIView (QNTools)

/**
 截图

 @return UIImage
 */
- (UIImage *)snapshotImage;

/**
 截图一个view中所有视图 包括旋转缩放效果

 @param maxWidth maxWidth
 @return 
 */
- (UIImage *)snapshotImage:(CGFloat)maxWidth;

/**
 存成PDF

 @return NSData
 */
- (NSData *)snapshotPDF;

/**
 找到第一响应者

 @return UView
 */
- (UIView *)findFirstResponder;

- (void)shake:(int)times direction:(int)direction currentTimes:(int)current withDelta:(CGFloat)delta speed:(NSTimeInterval)interval shakeDirection:(QNShakeDirection)shakeDirection completion:(void (^)(void))completionHandler;

/**
  移除所有子视图
 */
- (void)removeAllSubviews;

@property (nullable, nonatomic, readonly) UIViewController *viewController;

@end

NS_ASSUME_NONNULL_END
