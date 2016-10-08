/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPersistentUIWindowSnapshotter : NSObject {
    NSObject<OS_dispatch_queue> * IOQueue;
    NSData * _cryptoKey;
    unsigned int  _cryptoKeyGeneration;
    NSData * _cryptoUUID;
    BOOL  hasDisabledSuddenTermination;
    NSURL * persistentStateDirectoryURL;
    BOOL  volumeIsLocal;
    NSMutableDictionary * windowIDsToSnapshotInfo;
    NSMutableDictionary * windowsPendingSnapshotting;
}

@property (atomic, readwrite, copy) NSData *cryptoKey;
@property (atomic, readwrite, copy) NSData *cryptoUUID;

- (void)accessWindowBits:(long long)arg1 handler:(id)arg2;
- (void)asynchronouslySnapshotPendingWindows;
- (void)captureAndWriteSnapshotForWindowNumber:(long long)arg1 forWindowID:(unsigned int)arg2 waitUntilDone:(BOOL)arg3;
- (id)cryptoKey;
- (id)cryptoUUID;
- (void)dealloc;
- (void)deleteSnapshotForWindowID:(unsigned int)arg1;
- (void)deleteSnapshotForWindowID:(unsigned int)arg1 waitUntilDone:(BOOL)arg2;
- (BOOL)dequeueOneWindowToSnapshot:(unsigned int*)arg1 windowNumber:(long long*)arg2;
- (void)discardAllSnapshotData;
- (void)enqueueWindowForSnapshotting:(unsigned int)arg1 forWindowNumber:(long long)arg2 waitUntilDone:(BOOL)arg3;
- (void)finishPendingSnapshots;
- (id)initWithPersistentStateDirectoryURL:(id)arg1 IOQueue:(id)arg2;
- (id)persistentStateDirectoryURL;
- (void)setCryptoKey:(id)arg1;
- (BOOL)setCryptoKey:(id)arg1 uuid:(id)arg2;
- (void)setCryptoUUID:(id)arg1;
- (BOOL)snapshotOnePendingWindowWaitUntilDone:(BOOL)arg1;
- (void)synchronouslySnapshotPendingWindows;
- (void)updateSuddenTermination;
- (BOOL)windowHasBeenSnapshotted:(unsigned int)arg1;
- (BOOL)writeWindowSnapshot:(const void*)arg1 length:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 toFile:(id)arg6 inDirectory:(id)arg7 encryptingWithKey:(id)arg8 uuid:(id)arg9 checksum:(unsigned int*)arg10 fd:(int*)arg11 isUserWaitingImpatientlyForThisThingToFinish:(BOOL)arg12;

@end