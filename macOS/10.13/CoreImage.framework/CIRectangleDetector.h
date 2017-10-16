/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIRectangleDetector : CIDetector {
    struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); } * CVMLFuncs;
    double  _height;
    struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } * _internalBuffer;
    float * _perMeshPtr;
    double  _width;
    CIContext * context;
    NSMutableDictionary * featureOptions;
}

@property (nonatomic, readwrite, retain) CIContext *context;

- (id)context;
- (void)dealloc;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (void)finalize;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (void)releaseResources;
- (void)setContext:(id)arg1;

@end
