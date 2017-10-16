/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKTextAnnotation : CATextLayer <NSTextFieldDelegate, NSWindowDelegate> {
    NSMutableDictionary * _attributes;
    double  _backgroundColors;
    double  _borderColors;
    IKComposer * _composer;
    IKImageLayer * _imageLayer;
    IKKnobLayer * _knobLayer;
    NSString * _oldString;
    BOOL  _selected;
    double  _shadowColors;
    BOOL  _supportsUndo;
    double  _textColors;
    NSTextField * _textField;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) BOOL supportsUndo;

+ (id)defaultActionForKey:(id)arg1;
+ (double)fadeDuration;

- (void)changeBackgroundColor:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)changeForegroundColor:(id)arg1;
- (void)cleanup;
- (BOOL)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)dealloc;
- (unsigned int)defaultKnob;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)finalize;
- (void)ikMouseDown:(id)arg1;
- (BOOL)isAnnotationLayer;
- (id)knobLayer;
- (unsigned int)knobLayerFlags;
- (void)removeFromSuperlayer;
- (void)removeKnobLayer;
- (BOOL)selected;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColorComponents:(double*)arg1 withColor:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNewFont:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSupportsUndo:(BOOL)arg1;
- (void)setup:(id)arg1;
- (void)startEditing:(id)arg1;
- (BOOL)supportsUndo;
- (void)toggleDash;
- (void)toggleShadow;
- (void)updateBorderWidth:(int)arg1;
- (void)updateText:(id)arg1;
- (void)windowWillClose:(id)arg1;

@end
