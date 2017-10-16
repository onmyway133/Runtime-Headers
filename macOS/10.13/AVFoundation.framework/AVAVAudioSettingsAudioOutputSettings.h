/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVDecodedAudioSettingsForFig, AVReencodedAudioSettingsForFig>

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (id)audioOptions;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1;
- (struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 audioChannelLayoutSize:(unsigned long long*)arg2;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 forAudioFileTypeID:(unsigned int)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription { }*)arg3;
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;
- (BOOL)willYieldCompressedSamples;

@end
