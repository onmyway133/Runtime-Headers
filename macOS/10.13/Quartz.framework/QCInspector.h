/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCInspector : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    QCPatch * _patch;
    void * _unused2;
    NSView * view;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)viewNibName;

- (void)dealloc;
- (void)didLoadNib;
- (id)initWithBundle:(id)arg1 nibName:(id)arg2;
- (id)patch;
- (void)resetView;
- (void)setupViewForPatch:(id)arg1;
- (id)view;
- (id)viewTitle;

@end
