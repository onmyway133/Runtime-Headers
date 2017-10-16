/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSOpenPanel : NSSavePanel {
    void * _privateOpenPanel;
    BOOL  _reservedOpenPanel;
}

@property (atomic, readonly, copy) NSArray *URLs;
@property (getter=isAccessoryViewDisclosed, atomic, readwrite) BOOL accessoryViewDisclosed;
@property (atomic, readwrite) BOOL allowsMultipleSelection;
@property (atomic, readwrite) BOOL canChooseDirectories;
@property (atomic, readwrite) BOOL canChooseFiles;
@property (atomic, readwrite) BOOL canDownloadUbiquitousContents;
@property (atomic, readwrite) BOOL canResolveUbiquitousConflicts;
@property (atomic, readwrite) BOOL resolvesAliases;

+ (id)openPanel;

- (id)URLs;
- (void)_changeOptionsButtonTitleIfNecessary;
- (void)_dismissModalForTerminate;
- (void)_initSaveMode;
- (BOOL)allowsMultipleSelection;
- (BOOL)canChooseDirectories;
- (BOOL)canChooseFiles;
- (BOOL)canDownloadUbiquitousContents;
- (BOOL)canResolveUbiquitousConflicts;
- (id)filenames;
- (BOOL)isAccessoryViewDisclosed;
- (id)makeTouchBar;
- (void)newDocument:(id)arg1;
- (BOOL)preventsApplicationTerminationWhenModal;
- (BOOL)resolvesAliases;
- (void)setAccessoryViewDisclosed:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setCanChooseDirectories:(BOOL)arg1;
- (void)setCanChooseFiles:(BOOL)arg1;
- (void)setCanDownloadUbiquitousContents:(BOOL)arg1;
- (void)setCanResolveUbiquitousConflicts:(BOOL)arg1;
- (void)setResolvesAliases:(BOOL)arg1;

// NSOpenPanel (ViewBridge)

- (void)_registerKVOWithViewBridgeService:(id)arg1 onBridge:(id)arg2;
- (void)_unregisterKVOWithViewBridgeService:(id)arg1 onBridge:(id)arg2;

@end
