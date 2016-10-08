/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {
    UIButton * _button;
    UIButton * _externalButton;
    CALayer * _ringLayer;
    bool  _selected;
}

@property (nonatomic, readonly) bool extendsHitTestingFrame;
@property (nonatomic, retain) CALayer *ringLayer;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentsImageFrame;
- (id)_createButton;
- (void)_doubleTapButton:(id)arg1;
- (void)_pressAndHoldButton:(id)arg1;
- (void)_pressButton:(id)arg1;
- (void)_triggerButtonWithAction:(long long)arg1;
- (long long)buttonType;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)extendsHitTestingFrame;
- (id)highlightImage;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)ringLayer;
- (bool)selected;
- (void)setLayerHighlightImage:(id)arg1;
- (void)setRingLayer:(id)arg1;
- (void)setSelected:(bool)arg1;
- (double)updateContentsAndWidth;
- (bool)usesAdvancedActions;

@end
