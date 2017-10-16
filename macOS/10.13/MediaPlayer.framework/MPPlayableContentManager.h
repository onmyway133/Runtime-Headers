/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPPlayableContentManager : NSObject {
    NSOperationQueue * _artworkUpdateQueue;
    BOOL  _coalescingUpdates;
    NSMutableSet * _contentItemIdentifiersSentToMediaRemote;
    MPPlayableContentManagerContext * _context;
    <MPPlayableContentDataSource> * _dataSource;
    <MPPlayableContentDelegate> * _delegate;
    NSMutableSet * _mutatedContentItems;
    NSArray * _nowPlayingIdentifiers;
    BOOL  _scheduledSupportedAPIsChange;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) MPPlayableContentManagerContext *context;
@property (nonatomic, readwrite) <MPPlayableContentDataSource> *dataSource;
@property (nonatomic, readwrite) <MPPlayableContentDelegate> *delegate;
@property (nonatomic, readwrite, retain) NSArray *nowPlayingIdentifiers;

+ (BOOL)_deviceIsCarplayCapable;
+ (id)sharedContentManager;

- (void).cxx_destruct;
- (void)_contentItemChangedNotification:(id)arg1;
- (BOOL)_contentItemWasSentToMediaRemote:(id)arg1;
- (void)_enqueueArtworkUpdate:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 withCompletion:(id)arg3;
- (void)_enqueueArtworkUpdate:(id)arg1 withCompletion:(id)arg2;
- (void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2;
- (id)_init;
- (void)_markContentItemsAsSentToMediaRemote:(id)arg1;
- (BOOL)_onQueueContentItemWasSentToMediaRemote:(id)arg1;
- (void)_pushContentItemsUpdate;
- (void)_scheduleUpdateSupportedAPIs;
- (void)_setupMediaRemoteEndpoint;
- (void)_setupNotifications;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_tearDownNotifications;
- (void)_updateSupportedAPIs;
- (void)beginUpdates;
- (id)context;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)endUpdates;
- (id)init;
- (id)nowPlayingIdentifiers;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingIdentifiers:(id)arg1;

@end
