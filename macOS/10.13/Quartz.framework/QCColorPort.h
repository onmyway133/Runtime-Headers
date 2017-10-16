/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCColorPort : QCPort {
    double  _alpha;
    double  _blue;
    double  _green;
    double  _red;
    void * _unused3;
}

- (id)CIColorWithColorSpace:(struct CGColorSpace { }*)arg1;
- (double)alphaComponent;
- (double)blueComponent;
- (struct CGColor { }*)createCGColor;
- (void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (double)greenComponent;
- (struct CGColor { }*)newCGColor;
- (double)redComponent;
- (void)setAlphaComponent:(double)arg1;
- (void)setBlueComponent:(double)arg1;
- (void)setGreenComponent:(double)arg1;
- (void)setRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)setRedComponent:(double)arg1;

// QCColorPort (NSColor)

- (BOOL)acceptValuesOfClass:(Class)arg1;
- (BOOL)setValue:(id)arg1;
- (id)value;
- (Class)valueClass;

// QCColorPort (Override)

+ (Class)baseClass;

- (BOOL)canConnectToPort:(id)arg1;
- (id)initWithNode:(id)arg1 arguments:(id)arg2;
- (BOOL)setStateValue:(id)arg1;
- (id)stateValue;
- (BOOL)takeValue:(id)arg1 fromPort:(id)arg2;

// QCColorPort (ParameterView)

- (void)resetParameterView:(id)arg1;
- (id)setupParameterView;

// QCColorPort (QCProFX)

- (struct { unsigned char x1[16]; })md5WithTime:(double)arg1 arguments:(id)arg2;

// QCColorPort (Tooltip)

- (void)drawPortView:(id)arg1;
- (id)tooltipExtensionView;
- (struct CGSize { double x1; double x2; })tooltipExtensionViewSize:(id)arg1;
- (id)tooltipString;

// QCColorPort (ValueEditing)

- (void)_doneColor:(id)arg1;
- (void)_windowWillClose:(id)arg1;
- (void)editValueWithEvent:(id)arg1 inView:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;

@end
