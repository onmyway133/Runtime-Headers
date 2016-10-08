/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayTimeView : EKUIVisualEffectView <EKCurrentTimeMarkerViewUpdating> {
    NSMutableArray * _contentViews;
    <EKDayTimeViewDelegate> * _delegate;
    double  _designatorSize;
    double  _highlightedHour;
    double  _hourHeight;
    double  _hourHeightScale;
    double  _hourSize;
    double  _hoursToPad;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _hoursToRender;
    unsigned int  _leftBorder;
    long long  _orientation;
    unsigned int  _rightBorder;
    bool  _showsTimeMarker;
    bool  _showsTimeMarkerExtension;
    UIColor * _timeColor;
    EKCurrentTimeMarkerView * _timeMarker;
    UIView * _timeMarkerExtension;
    double  _timeWidth;
    bool  _usesLightText;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultHeight;
@property (nonatomic) <EKDayTimeViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double highlightedHour;
@property (nonatomic, readonly) double hourHeight;
@property (nonatomic) double hourHeightScale;
@property (nonatomic) double hoursToPad;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } hoursToRender;
@property (nonatomic) bool showsLeftBorder;
@property (nonatomic) bool showsRightBorder;
@property (nonatomic) bool showsTimeMarker;
@property (nonatomic) bool showsTimeMarkerExtension;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *timeColor;
@property (nonatomic, readonly) EKCurrentTimeMarkerView *timeMarker;
@property (nonatomic) bool usesLightText;

+ (id)_boldFontForOrientation:(long long)arg1;
+ (void)_calculateWidthForOrientation:(long long)arg1 excludeCurrentTime:(bool)arg2;
+ (double)_dynamicFontSizeForOrientation:(long long)arg1;
+ (void)_invalidateCachedValues;
+ (void)_invalidateWidth;
+ (id)_noonLocalizedString;
+ (double)_noonLocalizedWidthForOrientation:(long long)arg1;
+ (id)_normalFontForOrientation:(long long)arg1;
+ (void)_registerForInvalidation;
+ (double)_timeTextWidthForOrientation:(long long)arg1;
+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultHeightForOrientation:(long long)arg1 withHourScale:(double)arg2;
+ (double)defaultHourScale;
+ (double)designatorSizeForOrientation:(long long)arg1;
+ (double)heightOfHourTextForHour:(long long)arg1 orientation:(long long)arg2;
+ (double)hourHeightForOrientation:(long long)arg1;
+ (double)hourSizeForOrientation:(long long)arg1;
+ (double)hourWidthForOrientation:(long long)arg1;
+ (void)setVerticalPadding:(double)arg1;
+ (double)timeInsetForOrientation:(long long)arg1;
+ (double)timeVerticalInsetForOrientation:(long long)arg1;
+ (double)timeWidthForOrientation:(long long)arg1;
+ (id)unscaledAllDayLabelFont;
+ (double)verticalPadding;

- (void).cxx_destruct;
- (void)_fontSizeChanged;
- (void)_invalidateTimeWidth;
- (void)_localeChanged;
- (double)_positionOfSecond:(int)arg1;
- (void)_sizeClassChanged;
- (double)_timeWidth;
- (void)dealloc;
- (double)defaultHeight;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forContentView:(id)arg2 withHourRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (double)highlightedHour;
- (double)hourHeight;
- (double)hourHeightScale;
- (double)hoursToPad;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hoursToRender;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutFrames;
- (void)layoutSubviews;
- (double)scaledHourHeight;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightedHour:(double)arg1;
- (void)setHourHeightScale:(double)arg1;
- (void)setHoursToPad:(double)arg1;
- (void)setHoursToRender:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNeedsDisplay;
- (void)setOpaque:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowsLeftBorder:(bool)arg1;
- (void)setShowsRightBorder:(bool)arg1;
- (void)setShowsTimeMarker:(bool)arg1;
- (void)setShowsTimeMarkerExtension:(bool)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setUsesLightText:(bool)arg1;
- (bool)showsLeftBorder;
- (bool)showsRightBorder;
- (bool)showsTimeMarker;
- (bool)showsTimeMarkerExtension;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)subTintColorUpdatedToColor:(id)arg1;
- (id)timeColor;
- (id)timeMarker;
- (void)tintColorDidChange;
- (double)topPadding;
- (void)updateMarkerPosition;
- (bool)usesLightText;

@end
