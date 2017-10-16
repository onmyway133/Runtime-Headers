/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSThemeWidget : NSButton {
    unsigned int  __babahfillerfunfun;
    id  _eventMonitor;
    unsigned int  _ignoreRentry;
    long long  _trackingTagNum;
}

+ (void)initialize;
+ (id)widgetInView:(id)arg1 withButtonID:(long long)arg2 action:(SEL)arg3;

- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)initWithButtonID:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)setFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrameOrigin:(struct CGPoint { double x1; double x2; })arg1 ignoreRentry:(BOOL)arg2;
- (void)startMonitoringFlagsChanged;
- (void)stopMonitoringFlagsChanged;
- (void)update;
- (void)viewDidMoveToWindow;

@end
