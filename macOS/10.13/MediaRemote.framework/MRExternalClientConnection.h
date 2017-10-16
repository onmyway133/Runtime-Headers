/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRExternalClientConnection : NSObject <MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate, MSVMessageParserDelegate, NSStreamDelegate> {
    BOOL  _cryptoEnabled;
    MRCryptoPairingSession * _cryptoSession;
    <MRExternalClientConnectionDelegate> * _delegate;
    BOOL  _disconnected;
    unsigned long long  _firstClientNanoseconds;
    unsigned long long  _firstDeviceTicks;
    NSInputStream * _inputStream;
    MRProtocolMessageQueue * _messageQueue;
    NSOutputStream * _outputStream;
    MSVMessageParser * _parser;
    BOOL  _registeredKeyboardUpdates;
    BOOL  _registeredToNowPlayingArtworkUpdates;
    BOOL  _registeredToNowPlayingUpdates;
    BOOL  _registeredVolumeControlAvailabilityUpdates;
    NSRunLoop * _runLoop;
    unsigned int  _voiceRecordingState;
}

@property (nonatomic, readwrite) BOOL cryptoEnabled;
@property (nonatomic, readwrite, retain) MRCryptoPairingSession *cryptoSession;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <MRExternalClientConnectionDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readwrite) BOOL registeredKeyboardUpdates;
@property (nonatomic, readwrite) BOOL registeredToNowPlayingArtworkUpdates;
@property (nonatomic, readwrite) BOOL registeredToNowPlayingUpdates;
@property (nonatomic, readwrite) BOOL registeredVolumeControlAvailabilityUpdates;
@property (nonatomic, readonly) BOOL streamsAreValid;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) unsigned int voiceRecordingState;

- (void)_adjustTimestamp:(id)arg1;
- (void)_closeStream:(id)arg1;
- (void)_disconnectClient;
- (void)_flush;
- (void)_notifyDelegateClientDidDisconnect;
- (void)_notifyDelegateClientDidRecieveMessage:(id)arg1;
- (void)_openStream:(id)arg1;
- (void)_parseMessageData:(id)arg1;
- (void)_preProcessMessage:(id)arg1 data:(id)arg2;
- (void)_sendMessage:(id)arg1 queue:(id)arg2 reply:(id)arg3;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (BOOL)cryptoEnabled;
- (id)cryptoSession;
- (void)dealloc;
- (id)delegate;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;
- (id)inputStream;
- (id)messageQueue:(id)arg1 dataForMessage:(id)arg2;
- (unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
- (id)outputStream;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (BOOL)registeredKeyboardUpdates;
- (BOOL)registeredToNowPlayingArtworkUpdates;
- (BOOL)registeredToNowPlayingUpdates;
- (BOOL)registeredVolumeControlAvailabilityUpdates;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(id)arg3;
- (void)setCryptoEnabled:(BOOL)arg1;
- (void)setCryptoSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredKeyboardUpdates:(BOOL)arg1;
- (void)setRegisteredToNowPlayingArtworkUpdates:(BOOL)arg1;
- (void)setRegisteredToNowPlayingUpdates:(BOOL)arg1;
- (void)setRegisteredVolumeControlAvailabilityUpdates:(BOOL)arg1;
- (void)setVoiceRecordingState:(unsigned int)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (BOOL)streamsAreValid;
- (unsigned int)voiceRecordingState;

@end