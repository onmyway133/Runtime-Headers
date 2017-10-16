/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCCore3DLoaderUI : QCInspector {
    QCPort * _observedPort;
    NSPathControl * pathView;
    QCSCN_View * previewView;
    NSProgressIndicator * progressIndicator;
}

+ (id)viewNibName;

- (void)_setupPreviewForPatch:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)resetView;
- (void)setupViewForPatch:(id)arg1;

@end