/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCStreamProvider_Core3D : QCStreamProvider {
    unsigned long long  _count;
    unsigned long long  _elementSize;
    int  _meshComponent;
    struct __C3DGeometry { } * _provider;
    int  _type;
}

+ (id)createProviderWithSource:(id)arg1 options:(id)arg2;
+ (BOOL)isCompatibleWithSource:(id)arg1 sourceMD5:(struct { unsigned char x1[16]; }*)arg2;

- (unsigned long long)count;
- (id)createArrayMemObjectForManager:(id)arg1 withCount:(unsigned long long)arg2 elementSize:(unsigned long long)arg3 type:(int)arg4 options:(id)arg5;
- (id)createImage2DMemObjectForManager:(id)arg1 withFormat:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (unsigned long long)elementSize;
- (void)finalize;
- (id)initWithC3DGeometry:(struct __C3DGeometry { }*)arg1 options:(id)arg2;
- (id)pixelFormat;
- (id)sourceRepresentation;
- (id)sourceRepresentationType;
- (int)type;

@end
