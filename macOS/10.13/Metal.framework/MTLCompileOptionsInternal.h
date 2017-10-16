/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLCompileOptionsInternal : MTLCompileOptions {
    BOOL  _cubemapArrayEnabled;
    BOOL  _debuggingEnabled;
    BOOL  _denormsEnabled;
    BOOL  _fastMathEnabled;
    BOOL  _framebufferReadEnabled;
    unsigned long long  _languageVersion;
    BOOL  _nativeDoubleEnabled;
    NSDictionary * _preprocessorMacros;
    BOOL  _userSetLanguageVersion;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)cubemapArrayEnabled;
- (void)dealloc;
- (BOOL)debuggingEnabled;
- (BOOL)denormsEnabled;
- (id)description;
- (BOOL)fastMathEnabled;
- (id)formattedDescription:(unsigned long long)arg1;
- (BOOL)framebufferReadEnabled;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)languageVersion;
- (BOOL)nativeDoubleEnabled;
- (id)preprocessorMacros;
- (void)setCubemapArrayEnabled:(BOOL)arg1;
- (void)setDebuggingEnabled:(BOOL)arg1;
- (void)setDenormsEnabled:(BOOL)arg1;
- (void)setFastMathEnabled:(BOOL)arg1;
- (void)setFramebufferReadEnabled:(BOOL)arg1;
- (void)setLanguageVersion:(unsigned long long)arg1;
- (void)setNativeDoubleEnabled:(BOOL)arg1;
- (void)setPreprocessorMacros:(id)arg1;

@end
