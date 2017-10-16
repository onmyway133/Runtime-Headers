/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVFigAssetWriterCaptionTrack : AVFigAssetWriterTrack {
    AVCaptionGrouper * _captionGrouper;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextGroupStartTime;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _previousCaptionTimeRange;
}

- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(BOOL)arg3 error:(id*)arg4;
- (BOOL)addCaption:(id)arg1 error:(id*)arg2;
- (BOOL)addCaptionGroup:(id)arg1 error:(id*)arg2;
- (BOOL)addCaptionGroupAsSampleBuffer:(id)arg1 error:(id*)arg2;
- (BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (void)dealloc;
- (BOOL)flushCaptionsUntilTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 error:(id*)arg2;
- (BOOL)flushCaptionsWithError:(id*)arg1;
- (BOOL)markEndOfDataReturningError:(id*)arg1;
- (void)prepareToEndSession;

@end
