/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKTempDirectoryHandler : NSObject {
    NSMutableDictionary * _tempDirectories;
}

+ (id)sharedTempDirectoryHandler;

- (void)applicationWillTerminate:(id)arg1;
- (id)init;
- (id)tempDirectoryPathForKey:(id)arg1;
- (id)tempDirectoryURLForKey:(id)arg1;

@end