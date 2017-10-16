/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface HardcopyCableReplacement : NSObject {
    unsigned int  currentOffset;
    id  dataTransportLayer;
    int (* eventListener;
    void * eventRefcon;
    id  hcrpDelegate;
    unsigned int  idLen;
    char * incomingDataBuffer;
    unsigned int  incomingReadHead;
    unsigned int  incomingWriteHead;
    unsigned int  incomingdataBufferSize;
    char * last1284ID;
    unsigned int  numberOfRemoteCreditsGrantedSoFar;
    unsigned int  numberOfRemoteCreditsSavedJustInCase;
    struct PDUQueueElement { char *x1; struct PDUQueueElement {} *x2; } * pduHead;
    struct PDUQueueElement { char *x1; struct PDUQueueElement {} *x2; } * pduTail;
    NSTimer * pduTimer;
    unsigned int  pendingTransactionID;
    BOOL  printer1284IDBuffer;
    unsigned char  printerStatus;
    unsigned short  transactionID;
    BOOL  transportIsOpen;
    double  waitTime;
}

@property (atomic, readwrite, retain) id transport;

+ (id)hardcopyCableReplacement;
+ (id)hardcopyCableReplacementWith:(id)arg1;
+ (id)manufacturerFrom1284ID:(id)arg1;
+ (id)productFrom1284ID:(id)arg1;
+ (id)stringForTokenFrom1284ID:(id)arg1 token:(id)arg2;

- (char *)buildPDU:(int)arg1 transaction:(unsigned short)arg2 paramterLength:(unsigned short)arg3 parameters:(char *)arg4;
- (int)closeConnection;
- (int)closeTransportConnection;
- (unsigned short)connectionMaximumTransferUnit;
- (void)dealloc;
- (void)decrementLocalCreditCount:(unsigned int)arg1;
- (void)delayedRequestForCredits:(id)arg1;
- (id)delegate;
- (int)dequeueBytes:(char *)arg1 length:(unsigned int)arg2 deQueuedBytes:(unsigned long long*)arg3;
- (char *)dequeuePDU;
- (int)enqueueBytes:(char *)arg1 length:(unsigned int)arg2;
- (int)enqueuePDU:(char *)arg1;
- (void)finalize;
- (void)flushDataQueue;
- (void)flushPDUQueue;
- (int)get1284ID:(char *)arg1;
- (unsigned short)getNewValidTransactionID;
- (int)handleCatastrophicError:(id)arg1;
- (void)handleCreditOutOfSync;
- (int)hardReset;
- (id)init;
- (id)initWithTransport:(id)arg1;
- (BOOL)mustEnqueuePDU;
- (unsigned int)nBytesInQueue;
- (unsigned int)numberOfRemoteCreditsGrantedSoFar;
- (int)openConnection;
- (int)openConnectionWith:(id)arg1;
- (int)openTransportConnection;
- (void)pduSent:(char *)arg1;
- (int)peek:(void*)arg1 length:(unsigned long long)arg2 numberOfReadBytes:(unsigned long long*)arg3;
- (int)printerStatus:(char *)arg1;
- (void)processIncomingCredits:(unsigned int)arg1;
- (int)processNewData:(char *)arg1 length:(unsigned int)arg2;
- (int)processPDU:(int)arg1 transaction:(unsigned short)arg2 paramterLength:(unsigned short)arg3 status:(int)arg4 parameters:(char *)arg5;
- (int)read:(void*)arg1 length:(unsigned long long)arg2 numberOfReadBytes:(unsigned long long*)arg3;
- (unsigned int)readBufferSize;
- (int)receivePDU:(char *)arg1;
- (unsigned int)removeAllPDUsOfType:(int)arg1;
- (int)requestCredits;
- (int)returnsUnusedCredits;
- (int)sendPDU:(char *)arg1;
- (void)setDelegate:(id)arg1;
- (int)setEventCallBack:(int (*)arg1 refCon:(void*)arg2;
- (int)setReadBufferSize:(unsigned int)arg1;
- (void)setTransport:(id)arg1;
- (int)setupAndValidateTransportConnection:(int)arg1;
- (int)softReset;
- (void)timerAction:(id)arg1;
- (id)transport;
- (unsigned short)transportConnectionMaximumTransferUnit;
- (int)transportSendPDU:(char *)arg1;
- (int)vendCreditsToClient:(unsigned int)arg1;
- (int)write:(void*)arg1 length:(unsigned long long)arg2 numberOfWrittenBytes:(unsigned long long*)arg3;
- (void)writeDataCompleted:(int)arg1;
- (int)writeOnTransport:(void*)arg1 length:(unsigned int)arg2 blocking:(BOOL)arg3 numberOfWrittenBytes:(unsigned long long*)arg4;

@end
