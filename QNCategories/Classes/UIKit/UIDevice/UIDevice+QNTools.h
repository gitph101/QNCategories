//
//  UIDevice+QNTools.h
//  Pods
//
//  Created by 研究院01 on 17/3/24.
//
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (QNTools)

/// Device system version (e.g. 8.1)
+ (double)systemVersion;

@property (nonatomic, readonly) BOOL isPad;
@property (nonatomic, readonly) BOOL isSimulator;
@property (nonatomic, readonly) BOOL isJailbroken;

- (NSString *)machineModel;
- (NSString *)machineModelName;

+ (NSString *)macAddress;
+ (NSUInteger)getSysInfo:(uint)typeSpecifier;
+ (NSUInteger)cpuFrequency;
+ (NSUInteger)busFrequency;
+ (NSUInteger)ramSize;
+ (NSUInteger)cpuNumber;
/// 获取手机内存总量, 返回的是字节数
+ (NSUInteger)totalMemoryBytes;
/// 获取手机可用内存, 返回的是字节数
+ (NSUInteger)freeMemoryBytes;
/// 获取手机硬盘空闲空间, 返回的是字节数
+ (long long)freeDiskSpaceBytes;
/// 获取手机硬盘空闲空间, 返回的是字节数
+ (long long)totalDiskSpaceBytes;

@end

NS_ASSUME_NONNULL_END

#ifndef kSystemVersion
#define kSystemVersion [UIDevice systemVersion]
#endif

#ifndef kiOS6Later
#define kiOS6Later (kSystemVersion >= 6)
#endif

#ifndef kiOS7Later
#define kiOS7Later (kSystemVersion >= 7)
#endif

#ifndef kiOS8Later
#define kiOS8Later (kSystemVersion >= 8)
#endif

#ifndef kiOS9Later
#define kiOS9Later (kSystemVersion >= 9)
#endif
