/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVSampleBufferAudioRendererInternal : NSObject {
    NSString * audioOutputDeviceUniqueID;
    NSString * audioTimePitchAlgorithm;
    NSError * error;
    struct OpaqueFigSampleBufferAudioRenderer { } * figAudioRenderer;
    struct { 
        struct OpaqueFigSimpleMutex {} *mutex; 
        AVMediaDataRequester *requester; 
    }  mediaDataRequester;
    BOOL  muted;
    float  rate;
    struct OpaqueCMTimebase { } * readOnlyControlTimebase;
    AVScheduledAudioParameters * scheduledAudioParameters;
    long long  status;
    float  volume;
    AVWeakReference * weakReferenceToSelf;
    AVWeakReference * weakReferenceToSynchronizer;
}

@end
