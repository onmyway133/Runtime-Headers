/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSWindowFullScreenContentController : _NSFullScreenContentController {
    _NSWindowFullScreenStorage * _fullScreenStorage;
    _NSFullScreenDetachedToolbarMenuBarCompanionController * _menuBarController;
    BOOL  _performingLiveResize;
    NSWindow * _window;
}

@property (nonatomic, readonly) NSWindow *window;

- (void)_gatherWindowsToFreeze:(id)arg1 wids:(id)arg2;
- (void)addSiblingWindow:(long long)arg1 position:(unsigned long long)arg2 responseHandler:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentWindowFrame;
- (unsigned int)contentWindowID;
- (void)dealloc;
- (BOOL)disableMCExit;
- (void)displayChanged;
- (void)dispose;
- (void)endLiveResize;
- (id)fullScreenStorage;
- (id)initWithWindow:(id)arg1;
- (BOOL)isOnActiveSpace;
- (void)makeDetachedMenuBarCompanionController;
- (BOOL)maybeAssignWindow:(id)arg1;
- (id)menuBarCompanionController;
- (void)queryCanAddSiblingWindow:(long long)arg1 responseHandler:(id)arg2;
- (void)reshapeContentForTileFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setAsThePrincipalFullScreenWindowInSpace;
- (BOOL)sharesTileWithOtherTabs;
- (void)startLiveResize;
- (id)window;
- (id)windowIDsForSnapshot;
- (id)windowIDsToFreeze;

@end
