/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage
 */

@interface GSPermanentStorage : NSObject <GSAdditionStoring, GSAdditionStoringPrivate> {
    GSDocumentIdentifier * _documentID;
    NSURL * _documentURL;
    NSData * _privExtension;
    long long  _privHandle;
    NSData * _pubExtension;
    long long  _pubHandle;
    unsigned long long  _remoteID;
    GSStagingPrefix * _stagingPrefix;
    unsigned long long  _storageID;
}

@property (nonatomic, readonly) GSDocumentIdentifier *documentID;
@property (atomic, readwrite, retain) NSURL *documentURL;
@property (nonatomic, readonly) <NSCopying><NSSecureCoding> *persistentIdentifier;
@property (atomic, readwrite, retain) NSData *privExtension;
@property (atomic, readwrite, retain) NSData *pubExtension;
@property (nonatomic, readonly) long long remoteID;
@property (nonatomic, readwrite, retain) GSStagingPrefix *stagingPrefix;
@property (nonatomic, readonly) unsigned long long storageID;

+ (id)storageIDForItemAtURL:(id)arg1 error:(id*)arg2;
+ (id)storagePrefixForFileDescriptor:(int)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)URLforReplacingItemWithError:(id*)arg1;
- (void)_connectionWithDaemonWasLost;
- (void)_invalidate;
- (BOOL)_refreshRemoteIDWithFileDescriptor:(int)arg1 error:(id*)arg2;
- (id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
- (id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
- (void)cleanupStagingURL:(id)arg1;
- (void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)documentID;
- (id)documentURL;
- (struct NSEnumerator { Class x1; }*)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
- (void)finalize;
- (id)getAdditionDictionary:(id)arg1 error:(id*)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1 documentID:(id)arg2 forItemAtURL:(id)arg3 error:(id*)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (id)persistentIdentifier;
- (id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(BOOL)arg2 creationInfo:(id)arg3 error:(id*)arg4;
- (id)privExtension;
- (id)pubExtension;
- (long long)remoteID;
- (void)removeAdditions:(id)arg1 completionHandler:(id)arg2;
- (void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(id)arg2;
- (BOOL)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (BOOL)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (BOOL)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id*)arg3;
- (void)setDocumentURL:(id)arg1;
- (void)setPrivExtension:(id)arg1;
- (void)setPubExtension:(id)arg1;
- (void)setStagingPrefix:(id)arg1;
- (id)stagingPrefix;
- (id)stagingURLforCreatingAdditionWithError:(id*)arg1;
- (unsigned long long)storageID;
- (BOOL)transferToItemAtURL:(id)arg1 error:(id*)arg2;

@end
