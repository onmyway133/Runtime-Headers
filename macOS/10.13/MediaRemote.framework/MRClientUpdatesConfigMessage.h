/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRClientUpdatesConfigMessage : MRProtocolMessage

@property (nonatomic, readonly) BOOL artworkUpdates;
@property (nonatomic, readonly) BOOL keyboardUpdates;
@property (nonatomic, readonly) BOOL nowPlayingUpdates;
@property (nonatomic, readonly) BOOL volumeUpdates;

- (BOOL)artworkUpdates;
- (void)dealloc;
- (id)initWithNowPlayingUpdates:(BOOL)arg1 artworkUpdates:(BOOL)arg2 volumeUpdates:(BOOL)arg3 keyboardUpdates:(BOOL)arg4;
- (BOOL)keyboardUpdates;
- (BOOL)nowPlayingUpdates;
- (unsigned long long)type;
- (BOOL)volumeUpdates;

@end
