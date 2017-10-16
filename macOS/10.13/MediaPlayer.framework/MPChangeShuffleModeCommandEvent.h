/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent {
    BOOL  _preservesShuffleMode;
    long long  _shuffleType;
}

@property (nonatomic, readonly) BOOL preservesShuffleMode;
@property (nonatomic, readonly) long long shuffleType;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (BOOL)preservesShuffleMode;
- (long long)shuffleType;

@end
