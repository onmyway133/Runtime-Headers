/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSWindowTemplate : NSObject <NSCoding, NSUserInterfaceItemIdentification> {
    NSViewController * _contentViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxFullScreenContentSize;
    BOOL  _maxFullScreenContentSizeIsSet;
    struct CGSize { 
        double width; 
        double height; 
    }  _minFullScreenContentSize;
    BOOL  _minFullScreenContentSizeIsSet;
    NSString * _tabbingIdentifier;
    long long  _tabbingMode;
    long long  _titleVisibility;
    BOOL  _titlebarAppearsTransparent;
    struct __WtFlags { 
        unsigned int _PADDING : 9; 
        unsigned int isRestorable : 1; 
        unsigned int hidesToolbarButton : 1; 
        unsigned int autorecalculatesKeyViewLoop : 1; 
        unsigned int hideShadow : 1; 
        unsigned int allowsToolTipsWhenInactive : 1; 
        unsigned int autoSetMiniaturizableMask : 1; 
        unsigned int autoSetZoomableMask : 1; 
        unsigned int  : 2; 
        unsigned int savePosition : 1; 
        unsigned int autoPositionMask : 6; 
        unsigned int dynamicDepthLimit : 1; 
        unsigned int wantsToBeColor : 1; 
        unsigned int visible : 1; 
        unsigned int oneShot : 1; 
        unsigned int defer : 1; 
        unsigned int dontFreeWhenClosed : 1; 
        unsigned int hidesOnDeactivate : 1; 
    }  _wtFlags;
    unsigned long long  animationBehavior;
    NSAppearance * appearance;
    BOOL  autorecalculateContentBorderThicknesses;
    unsigned long long  collectionBehavior;
    double  contentBorderThicknesses;
    struct CGSize { 
        double width; 
        double height; 
    }  contentMaxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  contentMinSize;
    id  extension;
    NSString * frameAutosaveName;
    BOOL  isRestorableWasDecodedFromArchive;
    struct CGSize { 
        double width; 
        double height; 
    }  maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  minSize;
    NSWindow * realObject;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  screenRect;
    NSString * userInterfaceIdentifier;
    id  viewClass;
    unsigned long long  windowBacking;
    unsigned long long  windowBackingLocation;
    NSString * windowClass;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  windowRect;
    unsigned long long  windowSharingType;
    int  windowStyleMask;
    NSString * windowTitle;
    id  windowView;
}

@property (nonatomic, readwrite, retain) NSAppearance *appearance;
@property (nonatomic, readwrite, retain) NSViewController *contentViewController;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } maxFullScreenContentSize;
@property (atomic, readwrite) BOOL maxFullScreenContentSizeIsSet;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } minFullScreenContentSize;
@property (atomic, readwrite) BOOL minFullScreenContentSizeIsSet;
@property (nonatomic, readwrite, copy) NSString *tabbingIdentifier;
@property (atomic, readwrite) long long tabbingMode;
@property (atomic, readwrite) long long titleVisibility;
@property (atomic, readwrite) BOOL titlebarAppearsTransparent;

+ (void)initialize;

- (BOOL)allowsToolTipsWhenApplicationIsInactive;
- (long long)animationBehavior;
- (id)appearance;
- (unsigned long long)autoPositionMask;
- (BOOL)autorecalculatesContentBorderThicknessForEdge:(unsigned long long)arg1;
- (BOOL)autorecalculatesKeyViewLoop;
- (unsigned long long)backingType;
- (id)className;
- (unsigned long long)collectionBehavior;
- (double)contentBorderThicknessForEdge:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })contentMaxSize;
- (struct CGSize { double x1; double x2; })contentMinSize;
- (id)contentViewController;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)frameAutosaveName;
- (BOOL)hasDynamicDepthLimit;
- (BOOL)hasShadow;
- (BOOL)hidesOnDeactivate;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interfaceStyle;
- (BOOL)isDeferred;
- (BOOL)isOneShot;
- (BOOL)isReleasedWhenClosed;
- (BOOL)isRestorable;
- (struct CGSize { double x1; double x2; })maxFullScreenContentSize;
- (BOOL)maxFullScreenContentSizeIsSet;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minFullScreenContentSize;
- (BOOL)minFullScreenContentSizeIsSet;
- (struct CGSize { double x1; double x2; })minSize;
- (id)nibInstantiate;
- (void)setAllowsToolTipsWhenApplicationIsInactive:(BOOL)arg1;
- (void)setAnimationBehavior:(long long)arg1;
- (void)setAppearance:(id)arg1;
- (void)setAutoPositionMask:(unsigned long long)arg1;
- (void)setAutorecalculatesContentBorderThickness:(BOOL)arg1 forEdge:(unsigned long long)arg2;
- (void)setAutorecalculatesKeyViewLoop:(BOOL)arg1;
- (void)setBackingType:(unsigned long long)arg1;
- (void)setClassName:(id)arg1;
- (void)setCollectionBehavior:(unsigned long long)arg1;
- (void)setContentBorderThickness:(double)arg1 forEdge:(unsigned long long)arg2;
- (void)setContentMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDeferred:(BOOL)arg1;
- (void)setDynamicDepthLimit:(BOOL)arg1;
- (void)setFrameAutosaveName:(id)arg1;
- (void)setHasShadow:(BOOL)arg1;
- (void)setHidesOnDeactivate:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterfaceStyle:(unsigned long long)arg1;
- (void)setMaxFullScreenContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaxFullScreenContentSizeIsSet:(BOOL)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinFullScreenContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinFullScreenContentSizeIsSet:(BOOL)arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOneShot:(BOOL)arg1;
- (void)setReleasedWhenClosed:(BOOL)arg1;
- (void)setRestorable:(BOOL)arg1;
- (void)setShowsToolbarButton:(BOOL)arg1;
- (void)setStyleMask:(unsigned long long)arg1;
- (void)setTabbingIdentifier:(id)arg1;
- (void)setTabbingMode:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleVisibility:(long long)arg1;
- (void)setTitlebarAppearsTransparent:(BOOL)arg1;
- (void)setToolbar:(id)arg1;
- (void)setUserInterfaceItemIdentifier:(id)arg1;
- (void)setWantsToBeColor:(BOOL)arg1;
- (void)setWindowBackingLocation:(unsigned long long)arg1;
- (void)setWindowSharingType:(unsigned long long)arg1;
- (BOOL)showsToolbarButton;
- (unsigned long long)styleMask;
- (id)tabbingIdentifier;
- (long long)tabbingMode;
- (id)title;
- (long long)titleVisibility;
- (BOOL)titlebarAppearsTransparent;
- (id)toolbar;
- (id)userInterfaceItemIdentifier;
- (BOOL)wantsToBeColor;
- (unsigned long long)windowBackingLocation;
- (Class)windowClassForNibInstantiate;
- (unsigned long long)windowSharingType;

@end