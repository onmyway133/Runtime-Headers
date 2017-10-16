/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCGLSLShader : QCProgrammablePatch {
    void * _fragmentShader;
    void * _shader;
    BOOL  _shaderValid;
    BOOL  _softwareMode;
    BOOL  _updateAllUniforms;
    void * _vertexShader;
}

+ (int)executionModeWithIdentifier:(id)arg1;
+ (int)indicesType;
+ (BOOL)isSafe;
+ (Class)portClassFromParameterInfo:(id)arg1;
+ (id)sourceTypes;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)arg1;

- (id)_compileShader:(void*)arg1 withSource:(id)arg2 onContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg3;
- (void)_createShaders:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (void)_destroyShaders:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (BOOL)_linkShaderOnContext:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (void)_loadShaders:(struct _CGLContextObject { struct __GLIContextRec {} *x1; struct __GLIFunctionDispatchRec { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); int (*x_2_1_5)(); int (*x_2_1_6)(); int (*x_2_1_7)(); int (*x_2_1_8)(); int (*x_2_1_9)(); int (*x_2_1_10)(); int (*x_2_1_11)(); int (*x_2_1_12)(); int (*x_2_1_13)(); int (*x_2_1_14)(); int (*x_2_1_15)(); int (*x_2_1_16)(); int (*x_2_1_17)(); int (*x_2_1_18)(); int (*x_2_1_19)(); int (*x_2_1_20)(); int (*x_2_1_21)(); int (*x_2_1_22)(); int (*x_2_1_23)(); int (*x_2_1_24)(); int (*x_2_1_25)(); int (*x_2_1_26)(); int (*x_2_1_27)(); int (*x_2_1_28)(); int (*x_2_1_29)(); int (*x_2_1_30)(); int (*x_2_1_31)(); int (*x_2_1_32)(); int (*x_2_1_33)(); int (*x_2_1_34)(); int (*x_2_1_35)(); int (*x_2_1_36)(); int (*x_2_1_37)(); int (*x_2_1_38)(); int (*x_2_1_39)(); int (*x_2_1_40)(); int (*x_2_1_41)(); int (*x_2_1_42)(); int (*x_2_1_43)(); int (*x_2_1_44)(); int (*x_2_1_45)(); int (*x_2_1_46)(); int (*x_2_1_47)(); int (*x_2_1_48)(); int (*x_2_1_49)(); int (*x_2_1_50)(); int (*x_2_1_51)(); int (*x_2_1_52)(); int (*x_2_1_53)(); int (*x_2_1_54)(); int (*x_2_1_55)(); } x2; }*)arg1;
- (void)cleanup:(id)arg1;
- (id)compileSourceOfType:(id)arg1;
- (void)dealloc;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)finalize;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)setup:(id)arg1;

// QCGLSLShader (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end