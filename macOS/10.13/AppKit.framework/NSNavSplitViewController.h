/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavSplitViewController : NSObject {
    long long  _lastUncollapsedSidebarWidth;
    NSView * _mainContentView;
    NSNavView * _navView;
    unsigned int  _restoredSavedSettings;
    double  _sidebarInset;
    NSView * _sidebarView;
    unsigned int  _sidebarWasCollapsed;
    NSNavSplitView * _splitView;
}

- (BOOL)_isSidebarCollapsed;
- (void)_restoreSplitPositionFromDefaults;
- (void)_saveSplitPositionToDefaults;
- (void)_setSidebarWidth:(double)arg1 maintainSnap:(BOOL)arg2 constrain:(BOOL)arg3;
- (BOOL)_sidebarIsOnLeft;
- (long long)_sidebarViewIndexInSubviews;
- (void)_updateLastUncollapsedSidebarWidth;
- (void)awakeFromNib;
- (long long)lastUncollapsedSidebarWidth;
- (id)leftView;
- (id)navView;
- (void)restoreSavedSettings;
- (id)rightView;
- (void)setLastUncollapsedSidebarWidth:(long long)arg1;
- (double)sidebarInset;
- (id)splitView;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;

@end
