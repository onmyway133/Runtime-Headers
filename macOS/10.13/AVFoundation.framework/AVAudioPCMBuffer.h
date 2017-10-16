/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVAudioPCMBuffer : AVAudioBuffer

@property (nonatomic, readonly) NSArray *averagePowerPerChannel;
@property (nonatomic, readonly) float**floatChannelData;
@property (nonatomic, readonly) unsigned int frameCapacity;
@property (nonatomic, readwrite) unsigned int frameLength;
@property (nonatomic, readonly) short**int16ChannelData;
@property (nonatomic, readonly) int**int32ChannelData;
@property (nonatomic, readonly) NSArray *peakPowerPerChannel;
@property (nonatomic, readonly) unsigned long long stride;

- (void)_initChannelPtrs;
- (id)averagePowerPerChannel;
- (id)calculatePower:(unsigned long long)arg1;
- (float)calculatePower:(unsigned long long)arg1 forFloatData:(float*)arg2 stride:(long long)arg3 frameLength:(unsigned int)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float**)floatChannelData;
- (unsigned int)frameCapacity;
- (unsigned int)frameLength;
- (id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned int)arg2;
- (short**)int16ChannelData;
- (int**)int32ChannelData;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)peakPowerPerChannel;
- (void)setByteLength:(unsigned int)arg1;
- (void)setFrameLength:(unsigned int)arg1;
- (unsigned long long)stride;

@end