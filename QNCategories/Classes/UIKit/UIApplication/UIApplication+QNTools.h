//
//  UIApplication+QNTools.h
//  Pods
//
//  Created by 研究院01 on 17/3/27.
//
//

#import <UIKit/UIKit.h>

@interface UIApplication (QNTools)

@property (nullable, nonatomic, readonly) NSString *appBundleName;

/// Application's Bundle ID.  e.g. "com.ibireme.MyApp"
@property (nullable, nonatomic, readonly) NSString *appBundleID;

/// Application's Version.  e.g. "1.2.0"
@property (nullable, nonatomic, readonly) NSString *appVersion;

/// Application's Build number. e.g. "123"
@property (nullable, nonatomic, readonly) NSString *appBuildVersion;

@end
