/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureScreenInputInternal : NSObject {
    void * callbackContextToken;
    int  captureTimeScale;
    BOOL  capturesCursor;
    BOOL  capturesMouseClicks;
    struct OpaqueCMClock { } * clock;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cropRect;
    unsigned int  displayID;
    int  graphicsSubsystemErrorStatus;
    MediaIOGraphNodeDescription * inputUnitNodeDescription;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minFrameDurationFromSession;
    NSArray * outputCodecTypesFromSession;
    NSDictionary * pixelBufferAttributesFromSession;
    BOOL  removesDuplicateFrames;
    double  scaleFactor;
    BOOL  scaleFactorIsSetByClient;
    AVCaptureInputPort * videoPort;
}

@end