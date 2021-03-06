/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _bufferBindings;
    id  _delegate;
    NSString * _fragmentFunctionName;
    NSString * _fragmentShader;
    NSString * _geometryShader;
    id  _library;
    NSString * _name;
    BOOL  _opaque;
    NSMutableDictionary * _semanticInfos;
    NSString * _tessellationControlShader;
    NSString * _tessellationEvaluationShader;
    NSString * _vertexFunctionName;
    NSString * _vertexShader;
}

@property (nonatomic, readwrite) <SCNProgramDelegate> *delegate;
@property (nonatomic, readwrite, copy) NSString *fragmentFunctionName;
@property (nonatomic, readwrite, copy) NSString *fragmentShader;
@property (nonatomic, readwrite, copy) NSString *geometryShader;
@property (nonatomic, readwrite, retain) <MTLLibrary> *library;
@property (getter=isOpaque, nonatomic, readwrite) BOOL opaque;
@property (nonatomic, readwrite, copy) NSString *tessellationControlShader;
@property (nonatomic, readwrite, copy) NSString *tessellationEvaluationShader;
@property (nonatomic, readwrite, copy) NSString *vertexFunctionName;
@property (nonatomic, readwrite, copy) NSString *vertexShader;

+ (id)program;
+ (id)programWithLibrary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_allSymbolsWithSceneKitSemantic;
- (id)_bufferBindings;
- (void)_customDecodingOfSCNProgram:(id)arg1;
- (void)_customEncodingOfSCNProgram:(id)arg1;
- (id)_optionsForSymbol:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)fragmentFunctionName;
- (id)fragmentShader;
- (id)geometryShader;
- (void)handleBindingOfBufferNamed:(id)arg1 frequency:(long long)arg2 usingBlock:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isOpaque;
- (id)library;
- (id)name;
- (id)semanticForSymbol:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFragmentFunctionName:(id)arg1;
- (void)setFragmentShader:(id)arg1;
- (void)setGeometryShader:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3;
- (void)setSemanticInfos:(id)arg1;
- (void)setTessellationControlShader:(id)arg1;
- (void)setTessellationEvaluationShader:(id)arg1;
- (void)setVertexFunctionName:(id)arg1;
- (void)setVertexShader:(id)arg1;
- (int)shadingLanguage;
- (id)tessellationControlShader;
- (id)tessellationEvaluationShader;
- (id)vertexFunctionName;
- (id)vertexShader;

@end
