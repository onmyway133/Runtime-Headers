/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
 */

@interface MTLDebugLibrary : MTLToolsLibrary {
    id  _code;
    MTLCompileOptions * _compileOptions;
    struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; } * _imageFilterFunctionInfo;
    NSArray * _imageFilterFunctions;
    unsigned long long  _type;
}

@property (nonatomic, readwrite, copy) id code;
@property (nonatomic, readwrite, copy) MTLCompileOptions *compileOptions;
@property (nonatomic, readonly) struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*imageFilterFunctionInfo;
@property (nonatomic, readonly) NSArray *imageFilterFunctions;
@property (nonatomic, readwrite) unsigned long long type;

- (id)code;
- (id)compileOptions;
- (void)dealloc;
- (struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)imageFilterFunctionInfo;
- (id)imageFilterFunctions;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (void)setCode:(id)arg1;
- (void)setCompileOptions:(id)arg1;
- (void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
