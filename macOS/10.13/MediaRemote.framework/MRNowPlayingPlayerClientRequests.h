/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {
    MRPlaybackQueuePlayerClient * _playbackQueueClient;
    NSMutableDictionary * _playbackQueueCompletions;
    void * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _transactionCallbacks;
    NSMutableDictionary * _transactions;
}

@property (nonatomic, readonly) MRPlaybackQueuePlayerClient *playbackQueueClient;
@property (nonatomic, readonly) void*playerPath;

- (void)_handleTransactionPackets:(id)arg1 packets:(id)arg2 completion:(id)arg3;
- (void)_registerDefaultCallbacks;
- (id)_transactionDestintationForName:(unsigned long long)arg1;
- (void)addPlaybackQueueCompletion:(id)arg1 forRequest:(void*)arg2;
- (void)addTransactionCallback:(id)arg1 forName:(unsigned long long)arg2;
- (BOOL)augmentCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithPlayerPath:(void*)arg1;
- (id)playbackQueueClient;
- (void*)playerPath;
- (void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2;
- (void)removePlaybackQueueCompletionForRequest:(void*)arg1;
- (void)restoreNowPlayingClientState;
- (id)transactionCallbacksForName:(unsigned long long)arg1;

@end