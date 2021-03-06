/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVStreamDataParser : NSObject <AVContentKeyRecipient, AVContentKeySessionDelegate> {
    AVStreamDataParserInternal * _parser;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (atomic, readonly) NSData *contentProtectionSessionIdentifier;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <AVStreamDataParserOutputHandling> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) NSError *error;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (atomic, readonly) long long status;
@property (atomic, readonly) long long status2;
@property (atomic, readonly) Class superclass;

- (void)_appendStreamData:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)_createAssetIfNecessary;
- (void)_setError:(id)arg1;
- (void)_willDeallocOrFinalize;
- (void)appendStreamData:(id)arg1;
- (void)appendStreamData:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)asset;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)finalize;
- (id)init;
- (void)providePendingMediaData;
- (void)setDelegate:(id)arg1;
- (void)setShouldProvideMediaData:(BOOL)arg1 forTrackID:(int)arg2;
- (void)setStatus:(long long)arg1;
- (BOOL)shouldProvideMediaDataForTrackID:(int)arg1;
- (long long)status;
- (long long)status2;

// AVStreamDataParser (AVStreamDataParserContentKeyEligibility)

- (int)_attachToContentKeySession:(id)arg1;
- (BOOL)mayRequireContentKeysForMediaDataProcessing;

// AVStreamDataParser (AVStreamDataParserTypeSupport)

+ (id)outputMIMECodecParameterForInputMIMECodecParameter:(id)arg1;

// AVStreamDataParser (AVStreamDataParser_ContentKeyRequestSupport)

- (id)contentProtectionSessionIdentifier;
- (void)processContentKeyResponseData:(id)arg1 forTrackID:(int)arg2;
- (void)processContentKeyResponseError:(id)arg1 forTrackID:(int)arg2;
- (void)renewExpiringContentKeyResponseDataForTrackID:(int)arg1;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 trackID:(int)arg3 options:(id)arg4 error:(id*)arg5;

// AVStreamDataParser (AVStreamDataParser_ContentKeySessionDelegate)

- (void)contentKeySession:(id)arg1 didProvideContentKeyRenewalRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;

// AVStreamDataParser (AVStreamDataParser_FigManifold)

+ (struct OpaqueCMBlockBuffer { }*)_createBlockBufferUsingNSData:(id)arg1;
+ (id)_createNSDataWithBlockBuffer:(struct OpaqueCMBlockBuffer { }*)arg1;

- (int)_createFigManifoldWithBlockBuffer:(struct OpaqueCMBlockBuffer { }*)arg1 manifold:(struct OpaqueFigManifold {}**)arg2;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 discoveredNewTrackID:(int)arg2 mediaType:(id)arg3;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 orDecryptorDidChange:(void*)arg3 forTrackID:(int)arg4;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 pushedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 trackID:(int)arg3 flags:(unsigned int)arg4;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 trackDidEnd:(int)arg2;
- (void)_figManifoldAllNewTracksReady:(struct OpaqueFigManifold { }*)arg1;
- (int)_registerForFigManifoldCallbacksForTrackID:(int)arg1;
- (id)_scavengeContentKeySession;
- (int)_unregisterForFigManifoldCallbacksForTrackID:(int)arg1;

// AVStreamDataParser (AVStreamDataParser_Internal)

- (BOOL)_attachedToExternalContentKeySession;
- (id)contentKeySession;
- (void)expire;
- (BOOL)hasProtector;
- (void)setSession:(id)arg1;

@end
