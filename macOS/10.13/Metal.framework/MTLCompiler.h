/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLCompiler : NSObject {
    struct MTLCompilerConnectionManager { int (**x1)(); int x2; } * _compilerConnectionManager;
    unsigned long long  _compilerFlags;
    unsigned int  _compilerId;
    NSObject<OS_dispatch_queue> * _compilerQueue;
    _MTLDevice * _device;
    NSString * _pluginPath;
    struct MTLCompilerCache { int (**x1)(); id x2; int x3; } * _shaderCache;
}

@property (atomic, readonly) struct MTLCompilerConnectionManager { int (**x1)(); int x2; }*compilerConnectionManager;
@property (atomic, readonly) unsigned long long compilerFlags;
@property (atomic, readonly) unsigned int compilerId;
@property (atomic, readonly) NSObject<OS_dispatch_queue> *compilerQueue;
@property (atomic, readonly, copy) NSString *pluginPath;

- (void)compileFragmentFunction:(id)arg1 serializedPixelFormat:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id)arg5;
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 frameworkLinking:(BOOL)arg4 linkDataSize:(unsigned long long)arg5 pipelineCache:(id)arg6 options:(unsigned int)arg7 completionHandler:(id)arg8;
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 completionHandler:(id)arg6;
- (void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id)arg5;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(BOOL)arg5 options:(unsigned int)arg6 completionHandler:(id)arg7;
- (void)compileFunction:(id)arg1 stateData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)compileRequest:(id)arg1 completionHandler:(id)arg2;
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 completionHandler:(id)arg3;
- (void)compileVertexFunction:(id)arg1 serializedPipelineDescriptorData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id)arg5;
- (struct MTLCompilerConnectionManager { int (**x1)(); int x2; }*)compilerConnectionManager;
- (unsigned long long)compilerFlags;
- (unsigned int)compilerId;
- (id)compilerQueue;
- (void)dealloc;
- (id)initWithTargetData:(id)arg1 cacheUUID:(struct { unsigned char x1[32]; }*)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 completionHandler:(id)arg5;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 completionHandler:(id)arg5;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (id)pluginPath;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id)arg3;
- (void)unloadShaderCaches;

@end
