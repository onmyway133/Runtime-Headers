/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLScrollerLayer : CALayer <CALayerDelegate, NSScrollerImpDelegate> {
    <QLScrollerDelegate><CALayerDelegate> * _delegate;
    BOOL  _hideTrack;
    NSScrollerImp * _imp;
    CALayer * _knobLayer;
    CALayer * _trackLayer;
}

@property (atomic, readonly) BOOL canScroll;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <QLScrollerDelegate><CALayerDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) double doubleValue;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) BOOL hideTrack;
@property (atomic, readonly) NSScrollerImp *imp;
@property (atomic, readwrite) double knobProportion;
@property (atomic, readonly) Class superclass;

+ (void)_aquaScrollerBehaviorChanged:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanScroll;
+ (id)scrollerLayerWithStyle:(long long)arg1 size:(unsigned long long)arg2;

- (void)_updateScroll:(double)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)canScroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromBacking:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToBacking:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (double)doubleValue;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)hideTrack;
- (id)imp;
- (id)initWithStyle:(long long)arg1 size:(unsigned long long)arg2;
- (double)knobProportion;
- (id)layer;
- (void)layoutSublayers;
- (void)scrollerImp:(id)arg1 animateKnobAlphaTo:(double)arg2 duration:(double)arg3;
- (void)scrollerImp:(id)arg1 animateTrackAlphaTo:(double)arg2 duration:(double)arg3;
- (void)scrollerImp:(id)arg1 overlayScrollerStateChangedTo:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHideTrack:(BOOL)arg1;
- (void)setKnobProportion:(double)arg1;
- (void)trackKnobWithEvent:(id)arg1;

@end
