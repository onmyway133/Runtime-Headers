/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUIWindowFrameLayer : CALayer {
    CALayer * _backgroundHighlightLayer;
    CALayer * _borderLayer;
    CALayer * _bottomDividerLayer;
    CALayer * _bottomGradientLayer;
    CALayer * _overlayLayer;
    CALayer * _titlebarBackgroundLayer;
    CALayer * _titlebarGradientLayer;
    CALayer * _titlebarSeparatorLayer;
}

@property (atomic, readwrite) CALayer *backgroundHighlightLayer;
@property (atomic, readwrite) CALayer *borderLayer;
@property (atomic, readwrite) CALayer *bottomDividerLayer;
@property (atomic, readwrite) CALayer *bottomGradientLayer;
@property (atomic, readwrite) CALayer *overlayLayer;
@property (atomic, readwrite) CALayer *titlebarBackgroundLayer;
@property (atomic, readwrite) CALayer *titlebarGradientLayer;
@property (atomic, readwrite) CALayer *titlebarSeparatorLayer;

- (id)addAndSetupSublayer:(id)arg1;
- (id)backgroundHighlightLayer;
- (id)borderLayer;
- (id)bottomDividerLayer;
- (id)bottomGradientLayer;
- (void)dealloc;
- (id)init;
- (id)layerNamed:(id)arg1 makeIfNecessary:(BOOL)arg2;
- (id)makeAndAddSublayer;
- (id)overlayLayer;
- (void)setBackgroundHighlightLayer:(id)arg1;
- (void)setBorderLayer:(id)arg1;
- (void)setBottomDividerLayer:(id)arg1;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOverlayLayer:(id)arg1;
- (void)setTitlebarBackgroundLayer:(id)arg1;
- (void)setTitlebarGradientLayer:(id)arg1;
- (void)setTitlebarSeparatorLayer:(id)arg1;
- (id)titlebarBackgroundLayer;
- (id)titlebarGradientLayer;
- (id)titlebarSeparatorLayer;

@end
