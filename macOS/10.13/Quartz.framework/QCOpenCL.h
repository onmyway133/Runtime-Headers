/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCOpenCL : QCProgrammablePatch {
    struct __CFArray { } * _argumentCache;
    struct __CFArray { } * _argumentInfos;
    BOOL  _automaticOutputDimensions;
    BOOL  _automaticThreadDimensions;
    struct _cl_device_id { } * _currentDevice;
    BOOL  _customPixelFormat;
    struct _cl_device_id { } * _device;
    unsigned long long  _deviceIndex;
    struct __CFArray { } * _functions;
    struct _cl_kernel { } * _kernel;
    NSString * _kernelName;
    struct __CFArray { } * _kernels;
    QCStreamManager * _manager;
    struct _cl_program { } * _program;
    struct __CFArray { } * _resultInfos;
    QCPatch * _rootPatch;
    BOOL  _sample;
    double  _sampleTime;
    unsigned long long  _saveGlobalSize;
    unsigned long long  _saveLocalSize;
    NSString * _saveResultInfoString;
    unsigned long long  _selectedKernel;
    BOOL  _settingsVisible;
    id  _ui;
    BOOL  _useBestDevice;
    BOOL  _useLocalKernel;
    unsigned long long  _workGroupSize;
    BOOL  _zeroOutputs;
}

@property (atomic, readwrite) unsigned long long selectedKernel;

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)indicesType;
+ (BOOL)isSafe;
+ (id)sourceTypes;
+ (id)stateKeysWithIdentifier:(id)arg1;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;

- (id)_functionNames;
- (void)_initRootPatch;
- (id)_kernelNames;
- (unsigned long long)_lineOfFunction:(unsigned long long)arg1;
- (void)_setUI:(id)arg1;
- (id)attributesForParameterPortWithInfo:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;
- (void)cleanup:(id)arg1;
- (id)compileSourceOfType:(id)arg1;
- (id)createInputWithPortClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3 arguments:(id)arg4 order:(unsigned long long)arg5;
- (void)dealloc;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)finalize;
- (void)finalize_QCOpenCL;
- (id)initWithIdentifier:(id)arg1;
- (unsigned long long)selectedKernel;
- (id)serializedValueForStateKey:(id)arg1;
- (void)setSelectedKernel:(unsigned long long)arg1;
- (BOOL)setState:(id)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;

// QCOpenCL (GlobalSourceCode)

+ (void)addPatch:(id)arg1 forComposition:(id)arg2;
+ (id)compileStatusForComposition:(id)arg1;
+ (struct _cl_context { }*)deviceForComposition:(id)arg1;
+ (struct __CFArray { }*)functionNamesForComposition:(id)arg1;
+ (void)initialize;
+ (id)kernelNamesForComposition:(id)arg1;
+ (id)parseFunctionsForComposition:(id)arg1;
+ (struct _cl_program { }*)programForComposition:(id)arg1;
+ (void)releaseCompositions:(id)arg1;
+ (void)removePatch:(id)arg1 forComposition:(id)arg2;
+ (void)setDevice:(struct _cl_context { }*)arg1 forComposition:(id)arg2;
+ (void)setProgram:(struct _cl_program { }*)arg1 forComposition:(id)arg2;
+ (void)setSource:(id)arg1 forComposition:(id)arg2;
+ (id)sourceForComposition:(id)arg1;

// QCOpenCL (KernelInfoStrings)

- (id)computeDeviceString;
- (id)globalWorkSizeString;
- (id)inputArgumentsInfoString;
- (id)localWorkSizeString;
- (id)outputArgumentsInfoString;
- (void)setComputeDeviceString:(id)arg1;
- (void)setGlobalWorkSizeString:(id)arg1;
- (void)setInputArgumentsInfoString:(id)arg1;
- (void)setLocalWorkSizeString:(id)arg1;
- (void)setOutputArgumentsInfoString:(id)arg1;

// QCOpenCL (OpenCL)

- (id)_compileGlobalKernel:(id)arg1;
- (id)_compileKernel:(id)arg1;
- (void)_computeKernelDimensions:(struct __CFArray { }*)arg1 kernelExecutionInfo:(struct _KernelExecutionInfo { unsigned int x1[3]; unsigned int x2[3]; unsigned int x3[40]; }*)arg2 globalDim:(unsigned long long*)arg3 globalDimCount:(unsigned long long*)arg4 localDim:(unsigned long long*)arg5 localDimCount:(unsigned long long*)arg6;
- (struct __CFArray { }*)_executeKernel:(struct __CFArray { }*)arg1 context:(id)arg2 kernelExecutionInfo:(struct _KernelExecutionInfo { unsigned int x1[3]; unsigned int x2[3]; unsigned int x3[40]; }*)arg3;
- (void)_setGlobalSize:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)_setLocalSize:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (BOOL)_updateDevice;
- (void)_updateInputArguments;
- (void)_updateOutputArguments:(struct __CFArray { }*)arg1;

// QCOpenCL (Parsing)

- (void)_parseFunctionsAndKernels:(id)arg1;
- (id)_parseKernel:(id)arg1 kernelName:(id)arg2;
- (id)_setSelectedKernel:(unsigned long long)arg1 source:(id)arg2;
- (void)setAutomaticOutputDimensions:(BOOL)arg1;
- (void)setAutomaticThreadDimensions:(BOOL)arg1;
- (void)setCustomPixelFormat:(BOOL)arg1;
- (void)setDeviceIndex:(unsigned long long)arg1;
- (void)setSelectedKernel:(unsigned long long)arg1;
- (void)setUseBestDevice:(BOOL)arg1;
- (void)setUseLocalKernel:(BOOL)arg1;

// QCOpenCL (PerformanceSampling)

- (id)sampleString;
- (void)setSampleKernel:(BOOL)arg1;
- (void)setSampleString:(id)arg1;

// QCOpenCL (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end