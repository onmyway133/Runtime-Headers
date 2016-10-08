/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSystemStatusBar : NSStatusBar {
    NSMutableArray * _adjustmentCompletionHandlers;
    BOOL  adjustmentDeferred;
    unsigned long long  deferringAdjustmentCount;
    NSMutableSet * replicantKeys;
    id  screenNotificationToken;
}

- (id)_createStatusItemControlInWindow:(id)arg1;
- (long long)_direction;
- (struct CGSize { double x1; double x2; })_initialOffset;
- (double)_lengthForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_lockName;
- (id)_name;
- (long long)_placement;
- (id)_replicantKeys;
- (void)_requestStatusBarAdjustmentWithCompletionHandler:(id)arg1;
- (void)_updateReplicantKeys;
- (void)_withAdjustmentDeferred:(id)arg1;
- (void)dealloc;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 inView:(id)arg2 highlight:(BOOL)arg3;
- (double)thickness;

@end