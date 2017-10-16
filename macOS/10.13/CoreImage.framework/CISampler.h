/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CISampler : NSObject <NSCopying> {
    void * _priv;
}

@property (atomic, readonly) CIFilterShape *definition;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } extent;

+ (id)samplerWithImage:(id)arg1;
+ (id)samplerWithImage:(id)arg1 keysAndValues:(id)arg2;
+ (id)samplerWithImage:(id)arg1 options:(id)arg2;

- (id)_initWithImage:(id)arg1 key0:(id)arg2 vargs:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg3;
- (void*)_internalRepresentation;
- (const void*)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)definition;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extent;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 keysAndValues:(id)arg2;
- (id)initWithImage:(id)arg1 options:(id)arg2;
- (id)opaqueShape;
- (id)wrapMode;

@end
