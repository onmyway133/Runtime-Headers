/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSGradientColor : NSColor {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _destRect;
    NSGradient * _gradient;
    struct CGColor { } * _patternColor;
    struct CGImage { } * _patternImageRef;
}

- (struct CGColor { }*)CGColor;
- (void)_updatePattern;
- (void)_updatePatternImage;
- (id)colorSpaceName;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (id)colorUsingType:(long long)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithGradient:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;
- (long long)type;

@end
