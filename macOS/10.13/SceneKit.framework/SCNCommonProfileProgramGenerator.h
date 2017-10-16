/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNCommonProfileProgramGenerator : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _programMutex;
    struct __CFDictionary { } * _shaders;
    struct __CFDictionary { } * _trackedResourcesToHashcode;
}

@property (nonatomic, readonly) int profile;

+ (id)deferredGeneratorWithProfile:(int)arg1;
+ (id)generatorWithProfile:(int)arg1;

- (void)dealloc;
- (void)emptyShaderCache;
- (id)init;
- (int)profile;
- (struct __C3DFXProgram { }*)programWithHashCode:(struct __C3DRendererElementProgramHashCode { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 trackedResource:(id)arg3 introspectionDataPtr:(struct { long long x1; struct { /* ? */ } *x2; struct { long long x_3_1_1; long long x_3_1_2; } x3[4]; struct { long long x_4_1_1; long long x_4_1_2; } x4[4]; long long x5[4]; void *x6; void *x7; bool x8; }*)arg4;
- (void)releaseProgramForResource:(id)arg1;

@end