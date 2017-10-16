/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKInterfaceBuilderSharedDelegate : NSObject {
    NSMutableArray * _clients;
    int  _selectionCount;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (void)imageBrowserSelectionDidChange:(id)arg1;
- (id)init;
- (int)numberOfSelectedItems;
- (void)setImageView:(id)arg1 asDelegateFor:(id)arg2;
- (void)setNumberOfSelectedItems:(int)arg1;

@end
