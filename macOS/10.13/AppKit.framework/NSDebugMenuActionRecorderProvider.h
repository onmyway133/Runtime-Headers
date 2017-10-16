/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDebugMenuActionRecorderProvider : NSObject <NSDebugMenuItemProvider, NSTableViewDataSource, NSTableViewDelegate> {
    NSMenuItem * _menuItem;
    NSWindow * _recordWindow;
    BOOL  _recording;
    NSArrayController * _recordsController;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, copy) NSMenuItem *menuItem;
@property (atomic, readonly) Class superclass;

- (id)_createActionRecordWindow;
- (void)_toggleActionRecorder:(id)arg1;
- (void)_toggleFilter:(id)arg1;
- (void)dealloc;
- (id)menuItem;

// NSDebugMenuActionRecorderProvider (NSTableView)

- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;

@end