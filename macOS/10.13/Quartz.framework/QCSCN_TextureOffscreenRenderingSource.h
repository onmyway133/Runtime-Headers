/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSCN_TextureOffscreenRenderingSource : QCSCN_TextureSource {
    struct __C3DFramebuffer { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; unsigned int x2; unsigned int x3[10]; int x4; struct __C3DTexture {} *x5[10]; int x6; struct C3DVector2 { union { double x_1_2_1[2]; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; } x_1_2_3; struct { double x_4_3_1; double x_4_3_2; } x_1_2_4; } x_7_1_1; } x7; bool x8; } * _fbo;
    struct CGSize { 
        double width; 
        double height; 
    }  _fboSize;
    struct __C3DFXRenderTarget { } * _renderTarget;
    struct __C3DTexture { struct __C3DVRAMResource { struct __C3DLinkableObject { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; struct __C3DLinkableObject {} *x_1_2_2; struct __C3DLinkableObject {} *x_1_2_3; bool x_1_2_4; } x_1_1_1; void *x_1_1_2; long long x_1_1_3; struct __C3DRendererContext {} *x_1_1_4; long long x_1_1_5; bool x_1_1_6; struct _cl_mem {} *x_1_1_7; } x1; struct C3DVector2 { union { double x_1_2_1[2]; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; } x_1_2_3; struct { double x_4_3_1; double x_4_3_2; } x_1_2_4; } x_2_1_1; } x2; struct C3DVector2 { union { double x_1_2_1[2]; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; } x_1_2_3; struct { double x_4_3_1; double x_4_3_2; } x_1_2_4; } x_3_1_1; } x3; bool x4; unsigned int x5; unsigned int x6; unsigned long long x7; struct __C3DRectanglePacker {} *x8; void *x9; } * _texture;
    struct CGSize { 
        double width; 
        double height; 
    }  _textureSize;
}

- (struct __C3DTexture { struct __C3DVRAMResource { struct __C3DLinkableObject { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; struct __C3DLinkableObject {} *x_1_2_2; struct __C3DLinkableObject {} *x_1_2_3; bool x_1_2_4; } x_1_1_1; void *x_1_1_2; long long x_1_1_3; struct __C3DRendererContext {} *x_1_1_4; long long x_1_1_5; bool x_1_1_6; struct _cl_mem {} *x_1_1_7; } x1; struct C3DVector2 { union { double x_1_2_1[2]; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; } x_1_2_3; struct { double x_4_3_1; double x_4_3_2; } x_1_2_4; } x_2_1_1; } x2; struct C3DVector2 { union { double x_1_2_1[2]; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; } x_1_2_3; struct { double x_4_3_1; double x_4_3_2; } x_1_2_4; } x_3_1_1; } x3; bool x4; unsigned int x5; unsigned int x6; unsigned long long x7; struct __C3DRectanglePacker {} *x8; void *x9; }*)__makeFBOReadyForSize:(struct CGSize { double x1; double x2; })arg1 withRendererContext:(struct __C3DRendererContext { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; unsigned int x2; struct C3DVector2 { union { double x_1_2_1[2]; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; } x_1_2_3; struct { double x_4_3_1; double x_4_3_2; } x_1_2_4; } x_3_1_1; } x3; struct __C3DTransformsStack {} *x4[3]; struct C3DPlane { double x_5_1_1; union { struct _SCNVector3 { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_2_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_2_2_2; } x_5_1_2; } x5[6]; struct __C3DStack {} *x6; void *x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; int x15; bool x16; bool x17; struct __CFDictionary {} *x18; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_19_1_1; } x19; void *x20; long long x21; struct __C3DRendererContextFuncs { int (*x_22_1_1)(); int (*x_22_1_2)(); int (*x_22_1_3)(); int (*x_22_1_4)(); int (*x_22_1_5)(); int (*x_22_1_6)(); int (*x_22_1_7)(); int (*x_22_1_8)(); int (*x_22_1_9)(); int (*x_22_1_10)(); int (*x_22_1_11)(); int (*x_22_1_12)(); int (*x_22_1_13)(); int (*x_22_1_14)(); int (*x_22_1_15)(); int (*x_22_1_16)(); int (*x_22_1_17)(); int (*x_22_1_18)(); int (*x_22_1_19)(); int (*x_22_1_20)(); int (*x_22_1_21)(); int (*x_22_1_22)(); int (*x_22_1_23)(); int (*x_22_1_24)(); int (*x_22_1_25)(); int (*x_22_1_26)(); int (*x_22_1_27)(); int (*x_22_1_28)(); int (*x_22_1_29)(); int (*x_22_1_30)(); int (*x_22_1_31)(); int (*x_22_1_32)(); int (*x_22_1_33)(); int (*x_22_1_34)(); int (*x_22_1_35)(); int (*x_22_1_36)(); int (*x_22_1_37)(); int (*x_22_1_38)(); int (*x_22_1_39)(); int (*x_22_1_40)(); int (*x_22_1_41)(); int (*x_22_1_42)(); int (*x_22_1_43)(); int (*x_22_1_44)(); int (*x_22_1_45)(); int (*x_22_1_46)(); int (*x_22_1_47)(); int (*x_22_1_48)(); int (*x_22_1_49)(); int (*x_22_1_50)(); int (*x_22_1_51)(); int (*x_22_1_52)(); } x22[2]; }*)arg2 textureSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; int x9; unsigned long long x10; }*)arg3;
- (void)cleanup:(struct __C3DRendererContext { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; unsigned int x2; struct C3DVector2 { union { double x_1_2_1[2]; struct { double x_2_3_1; double x_2_3_2; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; } x_1_2_3; struct { double x_4_3_1; double x_4_3_2; } x_1_2_4; } x_3_1_1; } x3; struct __C3DTransformsStack {} *x4[3]; struct C3DPlane { double x_5_1_1; union { struct _SCNVector3 { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_2_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_2_2_2; } x_5_1_2; } x5[6]; struct __C3DStack {} *x6; void *x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; int x15; bool x16; bool x17; struct __CFDictionary {} *x18; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_19_1_1; } x19; void *x20; long long x21; struct __C3DRendererContextFuncs { int (*x_22_1_1)(); int (*x_22_1_2)(); int (*x_22_1_3)(); int (*x_22_1_4)(); int (*x_22_1_5)(); int (*x_22_1_6)(); int (*x_22_1_7)(); int (*x_22_1_8)(); int (*x_22_1_9)(); int (*x_22_1_10)(); int (*x_22_1_11)(); int (*x_22_1_12)(); int (*x_22_1_13)(); int (*x_22_1_14)(); int (*x_22_1_15)(); int (*x_22_1_16)(); int (*x_22_1_17)(); int (*x_22_1_18)(); int (*x_22_1_19)(); int (*x_22_1_20)(); int (*x_22_1_21)(); int (*x_22_1_22)(); int (*x_22_1_23)(); int (*x_22_1_24)(); int (*x_22_1_25)(); int (*x_22_1_26)(); int (*x_22_1_27)(); int (*x_22_1_28)(); int (*x_22_1_29)(); int (*x_22_1_30)(); int (*x_22_1_31)(); int (*x_22_1_32)(); int (*x_22_1_33)(); int (*x_22_1_34)(); int (*x_22_1_35)(); int (*x_22_1_36)(); int (*x_22_1_37)(); int (*x_22_1_38)(); int (*x_22_1_39)(); int (*x_22_1_40)(); int (*x_22_1_41)(); int (*x_22_1_42)(); int (*x_22_1_43)(); int (*x_22_1_44)(); int (*x_22_1_45)(); int (*x_22_1_46)(); int (*x_22_1_47)(); int (*x_22_1_48)(); int (*x_22_1_49)(); int (*x_22_1_50)(); int (*x_22_1_51)(); int (*x_22_1_52)(); } x22[2]; }*)arg1;

@end
