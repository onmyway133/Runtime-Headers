/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSpeechSynthesizerVars : NSObject {
    NSString * _currentVoice;
    id  _delegate;
    BOOL  _needsResyncWithDefaultVoice;
    float  _normalSpeakingRate;
    BOOL  _speakingSpeechFeedbackServices;
    struct SpeechChannelRecord { long long x1[1]; } * _speechChannel;
    _NSPeriodicInvoker * _speechFeedbackServicesInvoker;
    unsigned int  _speechFeedbackServicesRef;
    BOOL  _speechFinishedSuccessfully;
    BOOL  _synthesizerIsRetained;
    BOOL  _usesFeedbackWindow;
    BOOL  _usingDefaultVoice;
}

@property (atomic, readwrite, copy) NSString *currentVoiceIdentifier;
@property (atomic, readwrite) <NSSpeechSynthesizerDelegate> *delegate;
@property (atomic, readwrite) BOOL needsResyncWithDefaultVoice;
@property (atomic, readonly) float normalSpeakingRate;
@property (atomic, readwrite) BOOL speakingSpeechFeedbackServices;
@property (atomic, readonly) struct SpeechChannelRecord { long long x1[1]; }*speechChannel;
@property (atomic, readwrite, retain) _NSPeriodicInvoker *speechFeedbackServicesInvoker;
@property (atomic, readonly) unsigned int speechFeedbackServicesRef;
@property (atomic, readwrite) BOOL speechFinishedSuccessfully;
@property (atomic, readwrite) BOOL synthesizerIsRetained;
@property (atomic, readwrite) BOOL usesFeedbackWindow;
@property (atomic, readwrite) BOOL usingDefaultVoice;

+ (BOOL)findVoiceByIdentifier:(id)arg1 returningCreator:(unsigned int*)arg2 returningID:(unsigned int*)arg3;
+ (id)voiceIdentifierForVoiceCreator:(unsigned int)arg1 voiceID:(unsigned int)arg2;

- (id)currentVoiceIdentifier;
- (void)dealloc;
- (id)delegate;
- (BOOL)needsResyncWithDefaultVoice;
- (float)normalSpeakingRate;
- (void)setCurrentVoiceIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsResyncWithDefaultVoice:(BOOL)arg1;
- (void)setSpeakingSpeechFeedbackServices:(BOOL)arg1;
- (short)setSpeechChannelWithVoiceCreator:(unsigned int)arg1 voiceID:(unsigned int)arg2;
- (short)setSpeechChannelWithVoiceIdentifier:(id)arg1;
- (void)setSpeechFeedbackServicesInvoker:(id)arg1;
- (void)setSpeechFinishedSuccessfully:(BOOL)arg1;
- (void)setSynthesizerIsRetained:(BOOL)arg1;
- (void)setUsesFeedbackWindow:(BOOL)arg1;
- (void)setUsingDefaultVoice:(BOOL)arg1;
- (BOOL)speakingSpeechFeedbackServices;
- (struct SpeechChannelRecord { long long x1[1]; }*)speechChannel;
- (id)speechFeedbackServicesInvoker;
- (unsigned int)speechFeedbackServicesRef;
- (BOOL)speechFinishedSuccessfully;
- (BOOL)synthesizerIsRetained;
- (BOOL)usesFeedbackWindow;
- (BOOL)usingDefaultVoice;

@end