/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending> {
    bool  _isLayoutEngineSuspended;
    CALayer * _mask;
}

@property (getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:, nonatomic) bool _layoutEngineSuspended;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CALayer *mask;
@property (readonly) Class superclass;

+ (id)classFallbacksForKeyedArchiver;

- (void).cxx_destruct;
- (id)_cell;
- (bool)_isLayoutEngineSuspended;
- (void)_setLayoutEngineSuspended:(bool)arg1;
- (void)_tableViewCellContentViewCommonSetup;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mask;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMask:(id)arg1;

@end
