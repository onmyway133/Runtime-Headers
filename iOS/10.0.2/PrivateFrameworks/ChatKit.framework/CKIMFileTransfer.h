/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKIMFileTransfer : NSObject <CKFileTransfer> {
    NSDictionary * _attributionInfo;
    unsigned long long  _currentBytes;
    NSError * _error;
    bool  _fileDataReady;
    NSURL * _fileURL;
    bool  _fileURLFinalized;
    NSString * _filename;
    NSString * _guid;
    bool  _hideAttachment;
    IMMessage * _imMessage;
    bool  _isSticker;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSURL * _linkFileURL;
    int  _mediaObjectCount;
    bool  _restoring;
    NSDictionary * _stickerUserInfo;
    unsigned long long  _totalBytes;
    NSDictionary * _transcoderUserInfo;
    long long  _transferState;
}

@property (nonatomic, retain) IMMessage *IMMessage;
@property (nonatomic, copy) NSDictionary *attributionInfo;
@property (nonatomic, readonly) unsigned long long currentBytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDownloadable, nonatomic, readonly) bool downloadable;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property (nonatomic, readonly, copy) NSError *error;
@property (getter=isFileDataReady, nonatomic, readonly) bool fileDataReady;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (getter=isFileURLFinalized, nonatomic, readonly) bool fileURLFinalized;
@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic, readonly, copy) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideAttachment;
@property (nonatomic, readonly) bool isSticker;
@property (nonatomic, copy) NSURL *linkFileURL;
@property (getter=isRestoring, nonatomic, readonly) bool restoring;
@property (nonatomic, readonly, copy) NSDictionary *stickerUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalBytes;
@property (nonatomic, readonly, copy) NSDictionary *transcoderUserInfo;
@property (nonatomic) long long transferState;

- (void).cxx_destruct;
- (id)IMMessage;
- (void)attachmentRestored:(id)arg1;
- (id)attributionInfo;
- (unsigned long long)currentBytes;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)fileManager;
- (id)fileURL;
- (id)filename;
- (id)guid;
- (bool)hideAttachment;
- (id)imFileTransferCenter;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(bool)arg4;
- (id)initWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3;
- (id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (bool)isDownloadable;
- (bool)isDownloading;
- (bool)isFileDataReady;
- (bool)isFileURLFinalized;
- (bool)isRestoring;
- (bool)isSticker;
- (id)linkFileURL;
- (id)linkFileURLWithFilename:(id)arg1;
- (void)mediaObjectAdded;
- (void)mediaObjectRemoved;
- (id)notificationCenter;
- (void)setAttributionInfo:(id)arg1;
- (void)setIMMessage:(id)arg1;
- (void)setLinkFileURL:(id)arg1;
- (void)setTransferState:(long long)arg1;
- (id)stickerUserInfo;
- (id)syncController;
- (unsigned long long)totalBytes;
- (id)transcoderUserInfo;
- (long long)transferState;
- (void)transferUpdated:(id)arg1;
- (void)updateTransfer;

@end
