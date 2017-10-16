/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAssetReaderOutputCaptionAdaptor : NSObject <AVAssetReaderOutputAdaptor> {
    AVAssetReaderOutputCaptionAdaptorInternal * _internal;
}

@property (nonatomic, readonly) AVAssetReaderTrackOutput *assetReaderTrackOutput;
@property (atomic, readwrite) <AVAssetReaderCaptionValidationHandling> *validationDelegate;

+ (id)assetReaderOutputCaptionAdaptorWithAssetReaderTrackOutput:(id)arg1;

- (id)_readSampleBuffersAndReturnAVCaption;
- (int)addExtractionForOutput:(id)arg1 figAssetReader:(struct OpaqueFigAssetReader { }*)arg2 options:(id)arg3 withOutputExtactionID:(int*)arg4;
- (id)assetReaderTrackOutput;
- (id)captionsNotPresentInPreviousGroupsInCaptionGroup:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithAssetReaderTrackOutput:(id)arg1;
- (id)nextCaptionGroup;

// AVAssetReaderOutputCaptionAdaptor (AVAssetReaderCaptionValidation)

- (void)setValidationDelegate:(id)arg1;
- (id)validationDelegate;

// AVAssetReaderOutputCaptionAdaptor (Private)

- (void)appendOutputCaptionGroup:(id)arg1;
- (id)pairedAVCaptionForFigCaption:(const struct OpaqueFigCaption { }*)arg1;
- (void)setFigCaptionToAVCaptionMapping:(const struct __CFDictionary { }*)arg1;

@end
