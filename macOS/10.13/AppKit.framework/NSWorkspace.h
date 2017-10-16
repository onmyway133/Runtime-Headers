/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSWorkspace : NSObject {
    NSNotificationCenter * notificationCenter;
}

@property (atomic, readonly) BOOL accessibilityDisplayShouldDifferentiateWithoutColor;
@property (atomic, readonly) BOOL accessibilityDisplayShouldIncreaseContrast;
@property (atomic, readonly) BOOL accessibilityDisplayShouldInvertColors;
@property (atomic, readonly) BOOL accessibilityDisplayShouldReduceMotion;
@property (atomic, readonly) BOOL accessibilityDisplayShouldReduceTransparency;
@property (atomic, readonly, copy) NSArray *fileLabelColors;
@property (atomic, readonly, copy) NSArray *fileLabels;
@property (atomic, readonly) NSRunningApplication *frontmostApplication;
@property (atomic, readonly) NSRunningApplication *menuBarOwningApplication;
@property (atomic, readonly) NSNotificationCenter *notificationCenter;
@property (getter=isSwitchControlEnabled, atomic, readonly) BOOL switchControlEnabled;
@property (getter=isVoiceOverEnabled, atomic, readonly) BOOL voiceOverEnabled;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)sharedWorkspace;

- (id)URLForApplicationToOpenURL:(id)arg1;
- (id)URLForApplicationWithBundleIdentifier:(id)arg1;
- (id)_URLForDuplicatingFileAtURL:(id)arg1;
- (void)_applicationStatusChange:(id)arg1;
- (id)_copyApplicationDictionaryFromLSDictionary:(struct __CFDictionary { }*)arg1 constructingAppFromCorpse:(BOOL)arg2;
- (id)_defaultDocIcon;
- (BOOL)_fileOperation:(long long)arg1 source:(id)arg2 destination:(id)arg3 files:(id)arg4;
- (void)_fileOperationCompleted:(long long)arg1;
- (id)_fullPathForService:(id)arg1;
- (id)_getKVOHelperForKeyPath:(id)arg1 creating:(BOOL)arg2;
- (id)_iconForOSType:(unsigned int)arg1;
- (id)_iconForOSType:(unsigned int)arg1 creator:(unsigned int)arg2;
- (BOOL)_launchService:(id)arg1 andWait:(BOOL)arg2;
- (struct __CFString { }*)_launchServicesArchictureStringFromNSBundleExecutableArchitecture:(long long)arg1;
- (id)_locationsForApplications;
- (id)_notificationCenterWithoutTriggeringCreation;
- (BOOL)_openFile:(id)arg1 withApplication:(id)arg2 asService:(BOOL)arg3 andWait:(BOOL)arg4 andDeactivate:(BOOL)arg5;
- (BOOL)_openURLs:(id)arg1 withAppPath:(id)arg2 options:(unsigned long long)arg3 additionalEventParamDescriptor:(id)arg4 launchIdentifiers:(id*)arg5;
- (id)_openURLs:(id)arg1 withApplicationAtURL:(id)arg2 options:(unsigned long long)arg3 configuration:(id)arg4 errorHandler:(id)arg5;
- (void)_postSessionNotificationIfNeeded;
- (BOOL)_sendFinderAppleEvent:(unsigned int)arg1 class:(unsigned int)arg2 URLs:(id)arg3 followSymlinks:(BOOL)arg4;
- (BOOL)_sendFinderAppleEvent:(unsigned int)arg1 class:(unsigned int)arg2 file:(id)arg3;
- (BOOL)_volumeIsEjectableForRefNum:(short)arg1;
- (BOOL)_volumeSupportsLongFilenamesAtPath:(id)arg1;
- (BOOL)_volumeSupportsLongFilenamesForRefNum:(short)arg1;
- (BOOL)_workspaceSessionIsActive;
- (id)absolutePathForAppBundleWithIdentifier:(id)arg1;
- (void)activateFileViewerSelectingURLs:(id)arg1;
- (id)activeApplication;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)automaticallyTerminatedApplications;
- (void)checkForRemovableMedia;
- (void)dealloc;
- (id)desktopImageOptionsForScreen:(id)arg1;
- (id)desktopImageURLForScreen:(id)arg1;
- (void)duplicateURLs:(id)arg1 completionHandler:(id)arg2;
- (long long)extendPowerOffBy:(long long)arg1;
- (id)fileLabelColors;
- (id)fileLabels;
- (BOOL)fileNameExtension:(id)arg1 isValidForType:(id)arg2;
- (BOOL)fileSystemChanged;
- (BOOL)filenameExtension:(id)arg1 isValidForType:(id)arg2;
- (void)findApplications;
- (id)frontmostApplication;
- (id)fullPathForApplication:(id)arg1;
- (BOOL)getFileSystemInfoForPath:(id)arg1 isRemovable:(BOOL*)arg2 isWritable:(BOOL*)arg3 isUnmountable:(BOOL*)arg4 description:(id*)arg5 type:(id*)arg6;
- (BOOL)getInfoForFile:(id)arg1 application:(id*)arg2 type:(id*)arg3;
- (void)hideOtherApplications;
- (id)iconForFile:(id)arg1;
- (id)iconForFileType:(id)arg1;
- (id)iconForFiles:(id)arg1;
- (BOOL)isFilePackageAtPath:(id)arg1;
- (BOOL)launchAppWithBundleIdentifier:(id)arg1 options:(unsigned long long)arg2 additionalEventParamDescriptor:(id)arg3 launchIdentifier:(id*)arg4;
- (BOOL)launchApplication:(id)arg1;
- (BOOL)launchApplication:(id)arg1 showIcon:(BOOL)arg2 autolaunch:(BOOL)arg3;
- (id)launchApplicationAtURL:(id)arg1 options:(unsigned long long)arg2 configuration:(id)arg3 error:(id*)arg4;
- (id)launchedApplications;
- (id)localizedDescriptionForType:(id)arg1;
- (id)menuBarOwningApplication;
- (id)mountNewRemovableMedia;
- (id)mountedLocalVolumePaths;
- (id)mountedRemovableMedia;
- (void)noteFileSystemChanged;
- (void)noteFileSystemChanged:(id)arg1;
- (void)noteUserDefaultsChanged;
- (id)notificationCenter;
- (BOOL)openFile:(id)arg1;
- (BOOL)openFile:(id)arg1 fromImage:(id)arg2 at:(struct CGPoint { double x1; double x2; })arg3 inView:(id)arg4;
- (BOOL)openFile:(id)arg1 operation:(int)arg2;
- (BOOL)openFile:(id)arg1 withApplication:(id)arg2;
- (BOOL)openFile:(id)arg1 withApplication:(id)arg2 andDeactivate:(BOOL)arg3;
- (BOOL)openTempFile:(id)arg1;
- (BOOL)openURL:(id)arg1;
- (id)openURL:(id)arg1 options:(unsigned long long)arg2 configuration:(id)arg3 error:(id*)arg4;
- (BOOL)openURLs:(id)arg1 withAppBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 additionalEventParamDescriptor:(id)arg4 launchIdentifiers:(id*)arg5;
- (id)openURLs:(id)arg1 withApplicationAtURL:(id)arg2 options:(unsigned long long)arg3 configuration:(id)arg4 error:(id*)arg5;
- (BOOL)performFileOperation:(id)arg1 source:(id)arg2 destination:(id)arg3 files:(id)arg4 tag:(long long*)arg5;
- (id)preferredFileNameExtensionForType:(id)arg1;
- (id)preferredFilenameExtensionForType:(id)arg1;
- (void)recycleURLs:(id)arg1 completionHandler:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (oneway void)resetProfiling;
- (id)runningApplications;
- (BOOL)selectFile:(id)arg1 inFileViewerRootedAtPath:(id)arg2;
- (BOOL)setDesktopImageURL:(id)arg1 forScreen:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (BOOL)setIcon:(id)arg1 forFile:(id)arg2 options:(unsigned long long)arg3;
- (BOOL)showSearchResultsForQueryString:(id)arg1;
- (void)slideImage:(id)arg1 from:(struct CGPoint { double x1; double x2; })arg2 to:(struct CGPoint { double x1; double x2; })arg3;
- (oneway void)startProfiling;
- (oneway void)stopProfiling;
- (BOOL)type:(id)arg1 conformsToType:(id)arg2;
- (id)typeOfFile:(id)arg1 error:(id*)arg2;
- (void)unhideApplication;
- (BOOL)unmountAndEjectDeviceAtPath:(id)arg1;
- (BOOL)unmountAndEjectDeviceAtURL:(id)arg1 error:(id*)arg2;
- (id)unterminatedApplications;
- (BOOL)userDefaultsChanged;
- (oneway void)writeProfilingDataToPath:(id)arg1;

// NSWorkspace (NSSavePanelRuntime)

- (void)_sendFileSystemChangedNotificationForSavePanelInfo:(id)arg1;

// NSWorkspace (NSWorkspaceAccessibility)

- (void)_switchControlStatusChanged;
- (void)_voiceOverStatusChanged;
- (BOOL)isSwitchControlEnabled;
- (BOOL)isVoiceOverEnabled;

// NSWorkspace (NSWorkspaceAccessibilityDisplay)

+ (void)_invalidateAccessibilityDisplayValues;

- (BOOL)accessibilityDisplayShouldDifferentiateWithoutColor;
- (BOOL)accessibilityDisplayShouldIncreaseContrast;
- (BOOL)accessibilityDisplayShouldInvertColors;
- (BOOL)accessibilityDisplayShouldReduceMotion;
- (BOOL)accessibilityDisplayShouldReduceTransparency;

// Image: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface

// NSWorkspace (SFIconViewAdditions)

- (id)_currentApplication;

@end
