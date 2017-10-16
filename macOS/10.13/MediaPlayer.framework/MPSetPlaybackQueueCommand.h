/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {
    NSMutableSet * _registeredCustomQueueIdentifiers;
    NSMutableSet * _registeredQueueTypes;
    NSMutableDictionary * _registeredSpecializedQueues;
    NSObject<OS_dispatch_queue> * _serialQueue;
    BOOL  _supportsSharedQueue;
}

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)registerSupportedCustomQueueIdentifier:(id)arg1;
- (void)registerSupportedQueueType:(long long)arg1;
- (void)setSupportedSharedQueue:(BOOL)arg1;
- (void)unregisterSpecializedQueueIdentifier:(id)arg1;
- (void)unregisterSupportedCustomQueueIdentifier:(id)arg1;
- (void)unregisterSupportedQueueType:(long long)arg1;

@end
