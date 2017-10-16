/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImageTextureBuffer : QCImageBuffer {
    QCCGLContext * _context;
    unsigned long long  _depth;
    unsigned long long  _flags;
    unsigned int  _frameBuffer;
    unsigned long long  _levels;
    double  _matrix;
    unsigned int  _name;
    BOOL  _purgeable;
    unsigned int  _renderBuffer;
    unsigned long long  _samples;
    int  _saveBuffer;
    BOOL  _saveScissor;
    int  _saveViewport;
    unsigned long long  _saveVirtualScreen;
    unsigned int  _target;
    void * _unused2;
    QCCGLContext * _updateContext;
    unsigned long long  _virtualScreen;
}

- (void)_finalize_QCImageTextureBuffer;
- (void)_updateMatrix;
- (id)beginRenderTexture:(BOOL)arg1 colorSpace:(struct CGColorSpace { }*)arg2;
- (id)beginRenderTexture:(BOOL)arg1 colorSpace:(struct CGColorSpace { }*)arg2 virtualScreen:(unsigned long long)arg3;
- (BOOL)beginUploadTexture:(BOOL)arg1 colorSpace:(struct CGColorSpace { }*)arg2;
- (BOOL)beginUploadTexture:(BOOL)arg1 colorSpace:(struct CGColorSpace { }*)arg2 virtualScreen:(unsigned long long)arg3;
- (void)clearBuffer;
- (id)context;
- (id)copyWithZone_GCCacheResource:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)endRenderTexture;
- (void)endRenderTextureAndFinish:(BOOL)arg1;
- (void)endUploadTexture;
- (void)finalize;
- (id)initWithContext:(id)arg1 format:(id)arg2 target:(unsigned int)arg3 pixelsWide:(unsigned long long)arg4 pixelsHigh:(unsigned long long)arg5 options:(id)arg6;
- (id)initWithTextureName:(unsigned int)arg1 releaseCallback:(int (*)arg2 releaseInfo:(void*)arg3 context:(id)arg4 format:(id)arg5 target:(unsigned int)arg6 flipped:(BOOL)arg7 colorSpace:(struct CGColorSpace { }*)arg8 options:(id)arg9;
- (id)initWithTextureName:(unsigned int)arg1 releaseCallback:(int (*)arg2 releaseInfo:(void*)arg3 context:(id)arg4 format:(id)arg5 target:(unsigned int)arg6 width:(unsigned int)arg7 height:(unsigned int)arg8 mipmapLevels:(unsigned int)arg9 flipped:(BOOL)arg10 colorSpace:(struct CGColorSpace { }*)arg11 options:(id)arg12;
- (unsigned long long)levels;
- (const double*)matrix;
- (unsigned int)name;
- (id)pixelBufferRepresentation;
- (BOOL)purgeable;
- (BOOL)setPurgeable:(BOOL)arg1;
- (unsigned int)target;
- (BOOL)uploadTextureWithBaseAddress:(void*)arg1 releaseCallback:(int (*)arg2 releaseInfo:(void*)arg3 bytesPerRow:(unsigned long long)arg4;
- (unsigned long long)virtualScreen;
- (void)willRecycleResource:(id)arg1;

// QCImageTextureBuffer (Extensions)

+ (id)_supportedPixelFormatsForContext:(id)arg1 compatibility:(unsigned long long)arg2;
+ (id)supportedRenderFormatsForContext:(id)arg1;
+ (id)supportedUploadFormatsForContext:(id)arg1;

- (unsigned long long)_depth;
- (BOOL)_downloadTextureWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingPixelFormat:(id)arg2 toAddress:(void*)arg3 bytesPerRow:(unsigned long long)arg4;
- (unsigned long long)_levels;
- (unsigned int)_renderBuffer;
- (void)bindTextureToCGLContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1 textureUnit:(unsigned int)arg2 applyInternalMatrix:(BOOL)arg3 externalMatrix:(double*)arg4 savedState:(struct { BOOL x1; unsigned char x2; int x3; void *x4[4]; }*)arg5;
- (void)bindTextureToCGLContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1 textureUnit:(unsigned int)arg2 applyInternalMatrix:(BOOL)arg3 externalMatrix:(double*)arg4 savedState:(struct { BOOL x1; unsigned char x2; int x3; void *x4[4]; }*)arg5 shadowBuffer:(BOOL)arg6 enableTexture:(BOOL)arg7;
- (void)bindTextureToContext:(id)arg1 textureUnit:(unsigned int)arg2 applyMatrix:(BOOL)arg3 savedState:(struct { BOOL x1; unsigned char x2; int x3; void *x4[4]; }*)arg4;
- (BOOL)downloadTextureWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toAddress:(void*)arg2 bytesPerRow:(unsigned long long)arg3;
- (void)drawTextureWithContext:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (BOOL)isValidOnContext:(id)arg1;
- (void)setAnisotropy:(float)arg1;
- (void)setFilteringMode:(int)arg1;
- (void)setWrappingMode:(int)arg1;
- (void)unbindTextureFromCGLContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1 textureUnit:(unsigned int)arg2 savedState:(struct { BOOL x1; unsigned char x2; int x3; void *x4[4]; }*)arg3;
- (void)unbindTextureFromCGLContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1 textureUnit:(unsigned int)arg2 savedState:(struct { BOOL x1; unsigned char x2; int x3; void *x4[4]; }*)arg3 shadowBuffer:(BOOL)arg4 enableTexture:(BOOL)arg5;
- (void)unbindTextureFromContext:(id)arg1 textureUnit:(unsigned int)arg2 savedState:(struct { BOOL x1; unsigned char x2; int x3; void *x4[4]; }*)arg3;

// QCImageTextureBuffer (QCRenderInImage)

- (void)_setRenderStates;
- (void)_unsetRenderStates;

@end
