/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSAxisAlignedVolumeColorGamut : NSColorGamut {
    double  _maxX;
    double  _maxY;
    double  _maxZ;
    double  _minX;
    double  _minY;
    double  _minZ;
}

+ (id)gamutWithCGColorSpace:(struct CGColorSpace { }*)arg1;
+ (void)initialize;

- (BOOL)containsCGColor:(struct CGColor { }*)arg1;
- (BOOL)containsGamut:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)intersectionWithGamut:(id)arg1;
- (BOOL)intersectsGamut:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqualToGamut:(id)arg1;
- (BOOL)isInfinite;
- (id)unionWithGamut:(id)arg1;
- (double)volume;

@end