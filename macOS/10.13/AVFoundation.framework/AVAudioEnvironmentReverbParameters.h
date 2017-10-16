/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVAudioEnvironmentReverbParameters : NSObject {
    void * _impl;
}

@property (nonatomic, readwrite) BOOL enable;
@property (nonatomic, readonly) AVAudioUnitEQFilterParameters *filterParameters;
@property (nonatomic, readwrite) float level;

- (void)dealloc;
- (BOOL)enable;
- (id)filterParameters;
- (id)init;
- (id)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl { int (**x1)(); struct AVAudioEngineImpl {} *x2; id x3; void x4; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x5; BOOL x6; void*x7; out const void*x8; unsigned int x9/* : ? */; out out long x10; void*x11; void*x12; short x13; void*x14; double x15; SEL x16; SEL x17; void*x18; void*x19; void*x20; SEL x21; SEL x22; void*x23; long x24; long x25; out BOOL x26; void*x27; void*x28; out const void*x29; unsigned int x30/* : ? */; out out long x31; void*x32; void*x33; void*x34; void*x35; unsigned long long *x36; unsigned long long x37; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_38_1_1; } x38; }*)arg1;
- (float)level;
- (void)loadFactoryReverbPreset:(long long)arg1;
- (void)setEnable:(BOOL)arg1;
- (void)setLevel:(float)arg1;

@end
