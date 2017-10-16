/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSShadow : NSObject <NSCoding, NSCopying> {
    void * _reserved;
    double  _reservedFloat;
    double  _shadowBlurRadius;
    NSColor * _shadowColor;
    unsigned long long  _shadowFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
}

@property (atomic, readwrite) double shadowBlurRadius;
@property (atomic, readwrite, copy) NSColor *shadowColor;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } shadowOffset;

+ (id)defaultShadowColor;
+ (void)initialize;
+ (id)shadow;

- (void)_setWithOffsetDelta:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithShadow:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)set;
- (void)setShadowBlurRadius:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (double)shadowBlurRadius;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;

@end
