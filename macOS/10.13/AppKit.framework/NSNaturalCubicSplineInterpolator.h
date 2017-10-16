/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNaturalCubicSplineInterpolator : NSObject {
    double * _Bi;
    double * _Ci;
    double * _Di;
    double * _Hi;
    double * _Zi;
    struct { double x1; double x2; } * _knots;
    long long  _length;
}

- (void)_calculateZiVector;
- (double)_intervalAt:(double)arg1;
- (double)_intervalLength:(long long)arg1;
- (void)dealloc;
- (id)initWithKnots:(struct { double x1; double x2; }*)arg1 length:(long long)arg2;
- (double)valueAt:(double)arg1;

@end
