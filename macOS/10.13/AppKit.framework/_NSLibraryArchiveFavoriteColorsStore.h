/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSLibraryArchiveFavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSURL * _fileURL;
}

- (id)colorsFromBacking;
- (void)dealloc;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (void)postDistributedNotification;
- (void)remoteColorsDidChange:(id)arg1;
- (BOOL)writeColorsToBacking:(id)arg1;

@end
