/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImageKernelUI : QCInspector {
    NSButton * advancedModeButton;
    QCProgrammablePatchView * advancedViewMain;
    NSButton * dodButton;
    QCProgrammablePatchView * sourceView;
    NSSplitView * splitView;
}

+ (id)viewNibName;

- (void)changeMode:(id)arg1;
- (void)resetView;
- (void)setupViewForPatch:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;

@end
