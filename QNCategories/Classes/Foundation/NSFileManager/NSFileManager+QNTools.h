//
//  NSFileManager+QNTools.h
//  Pods
//
//  Created by 研究院01 on 17/3/27.
//
//

#import <Foundation/Foundation.h>

@interface NSFileManager (QNTools)

+ (NSURL *)URLForDirectory:(NSSearchPathDirectory)directory;

+ (NSString *)pathForDirectory:(NSSearchPathDirectory)directory;

+ (NSURL *)documentsURL;

+ (NSString *)documentsPath;

+ (NSURL *)libraryURL;

+ (NSString *)libraryPath;

+ (NSURL *)cachesURL;

+ (NSString *)cachesPath;

+ (BOOL)addSkipBackupAttributeToFile:(NSString *)path;

+ (double)availableDiskSpace;


@end
