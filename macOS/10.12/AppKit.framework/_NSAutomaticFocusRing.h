/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSAutomaticFocusRing : NSObject

+ (void)_clearOldFocusRing;
+ (void)_focusRingViewDidChangeGeometryInWindow:(id)arg1;
+ (void)_invalidateAnimatedRingWithTimer:(id)arg1;
+ (void)_setFocusRingView:(id)arg1;
+ (id)_state;
+ (void)compositeIfShownInWindow:(id)arg1;
+ (id)focusRingRegionForWindow:(id)arg1;
+ (id)focusRingViewForWindow:(id)arg1;
+ (void)hideForView:(id)arg1;
+ (void)setActiveFirstResponderChanged;
+ (void)setNeedsUpdateForView:(id)arg1;
+ (void)showForView:(id)arg1;
+ (void)translateFocusRingRegionBy:(struct CGPoint { double x1; double x2; })arg1 forWindow:(id)arg2;
+ (void)updateForView:(id)arg1;
+ (void)updateIfNeeded;

@end
