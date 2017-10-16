/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKDeviceBrowserView : NSView <DebugHierarchyObject> {
    id  _privateData;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <IKDeviceBrowserViewDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) BOOL displaysAccessoryView;
@property (atomic, readwrite) BOOL displaysLocalCameras;
@property (atomic, readwrite) BOOL displaysLocalScanners;
@property (atomic, readwrite) BOOL displaysNetworkCameras;
@property (atomic, readwrite) BOOL displaysNetworkScanners;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) BOOL isInitialized;
@property (atomic, readwrite) long long mode;
@property (atomic, readonly) ICDevice *selectedDevice;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)awakeFromNib;
- (void)commonInit;
- (void)commonInit:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)deviceBrowser;
- (BOOL)displaysAccessoryView;
- (BOOL)displaysLocalCameras;
- (BOOL)displaysLocalScanners;
- (BOOL)displaysNetworkCameras;
- (BOOL)displaysNetworkScanners;
- (void)drawRect_ib:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)installView:(id)arg1;
- (BOOL)isInitialized;
- (long long)mode;
- (id)resizeView;
- (id)selectedDevice;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysAccessoryView:(BOOL)arg1;
- (void)setDisplaysLocalCameras:(BOOL)arg1;
- (void)setDisplaysLocalScanners:(BOOL)arg1;
- (void)setDisplaysNetworkCameras:(BOOL)arg1;
- (void)setDisplaysNetworkScanners:(BOOL)arg1;
- (void)setHidesAccessoryView:(BOOL)arg1;
- (void)setHidesExtrasContainer:(BOOL)arg1;
- (void)setHidesResizeView:(BOOL)arg1;
- (void)setIsInitialized:(BOOL)arg1;
- (void)setMode:(long long)arg1;
- (void)setSelectedDevice:(id)arg1;
- (id)takeoverICDeviceBrowser;
- (id)valueForUndefinedKey:(id)arg1;
- (void)viewDidMoveToWindow;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// IKDeviceBrowserView (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

@end
