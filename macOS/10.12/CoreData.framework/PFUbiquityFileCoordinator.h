/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface PFUbiquityFileCoordinator : NSFileCoordinator {
    NSString * _localPeerID;
}

@property (nonatomic, readonly) NSString *localPeerID;

+ (id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)arg1;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;

- (void)coordinateReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 retryOnError:(BOOL)arg3 error:(id*)arg4 byAccessor:(id)arg5;
- (void)dealloc;
- (id)initWithFilePresenter:(id)arg1;
- (id)localPeerID;
- (BOOL)shouldRetryForError:(id)arg1 ignoreFile:(BOOL*)arg2;

@end
