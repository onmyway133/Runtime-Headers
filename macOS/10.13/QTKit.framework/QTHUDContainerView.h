/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTHUDContainerView : NSView {
    struct { 
        unsigned int leftEdgeRounded : 1; 
        unsigned int rightEdgeRounded : 1; 
        unsigned int style : 1; 
        unsigned int reserved : 29; 
    }  _internal;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isLeftEdgeRounded;
- (BOOL)isRightEdgeRounded;
- (void)setLeftEdgeRounded:(BOOL)arg1;
- (void)setRightEdgeRounded:(BOOL)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end