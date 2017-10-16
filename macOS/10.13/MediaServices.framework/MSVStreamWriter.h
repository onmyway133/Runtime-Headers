/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
 */

@interface MSVStreamWriter : NSObject <NSStreamDelegate> {
    unsigned long long  _bytesWritten;
    id  _canWriteDataBlock;
    BOOL  _closeOnStop;
    BOOL  _compressed;
    id  _didEncounterErrorBlock;
    id  _didFinishWritingBlock;
    NSInputStream * _inputStream;
    unsigned long long  _maximumBufferSize;
    NSOutputStream * _outputStream;
    NSMutableArray * _pendingWriteDataList;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _stopped;
    double  _timestamp;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } * _zstreamp;
}

@property (nonatomic, readwrite) unsigned long long bytesWritten;
@property (nonatomic, readwrite, copy) id canWriteDataBlock;
@property (getter=isCompressed, nonatomic, readwrite) BOOL compressed;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite, copy) id didEncounterErrorBlock;
@property (nonatomic, readwrite, copy) id didFinishWritingBlock;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) NSInputStream *inputStream;
@property (nonatomic, readwrite) unsigned long long maximumBufferSize;
@property (nonatomic, readwrite, retain) NSOutputStream *outputStream;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *queue;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) double timestamp;

- (void).cxx_destruct;
- (id)_decompressData:(id)arg1;
- (void)_writeAvailablePendingData;
- (unsigned long long)bytesWritten;
- (id)canWriteDataBlock;
- (id)didEncounterErrorBlock;
- (id)didFinishWritingBlock;
- (id)init;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)inputStream;
- (BOOL)isCompressed;
- (unsigned long long)maximumBufferSize;
- (id)outputStream;
- (id)queue;
- (void)setBytesWritten:(unsigned long long)arg1;
- (void)setCanWriteDataBlock:(id)arg1;
- (void)setCompressed:(BOOL)arg1;
- (void)setDidEncounterErrorBlock:(id)arg1;
- (void)setDidFinishWritingBlock:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setMaximumBufferSize:(unsigned long long)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)start;
- (void)stop;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (double)timestamp;
- (BOOL)writeAllData:(id)arg1 error:(id*)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(id)arg2;
- (void)writeData:(id)arg1 withCompletion:(id)arg2;
- (void)writeStreamError:(struct { long long x1; int x2; })arg1;

@end
