/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTCaptureMovieFileOutputInternal : NSObject {
    unsigned int  _activeConnectionCount;
    struct __CFDictionary { } * _compressorUnits;
    NSMutableArray * _connections;
    struct __CFDictionary { } * _decompressorUnits;
    BOOL  _fileControlCallbackRanSinceLastCheck;
    BOOL  _fileControlCallbackTimedOut;
    int  _fileControlCallbackTimeoutLock;
    NSTimer * _fileControlCallbackTimeoutTimer;
    QTMediaIOGraphUnitDescription * _fileWriterOutputUnit;
    struct __CFDictionary { } * _mixerUnits;
    NSSet * _noDataConnections;
    unsigned long long  _sizeWritten;
    int  _statsLock;
    NSError * _stopError;
    int  _stopErrorLock;
    struct { 
        long long timeValue; 
        long long timeScale; 
        long long flags; 
    }  _timeWritten;
    struct __CFDictionary { } * _videoFrameRateGovernorUnits;
    NSMutableSet * activeConnections;
    int  connectionsLock;
    QTCaptureOperationDescriptorQueue * operationDescriptorQueue;
    NSLock * operationDescriptorQueueLock;
    NSURL * outputFileURL;
    BOOL  recordingPaused;
    int  recordingStateLock;
    QTCaptureFileOutputRecordingOperationDescriptor * runningRecordingOperationDescriptor;
    int  runningRecordingOperationDescriptorLock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  syncTime;
    void * syncTimeConnection;
    int  syncTimeLock;
    BOOL  wasForcedToPause;
}

@end
