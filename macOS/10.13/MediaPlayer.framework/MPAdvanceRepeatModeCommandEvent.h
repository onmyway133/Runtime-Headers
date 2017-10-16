/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPAdvanceRepeatModeCommandEvent : MPRemoteCommandEvent {
    BOOL  _preservesRepeatMode;
}

@property (nonatomic, readonly) BOOL preservesRepeatMode;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (BOOL)preservesRepeatMode;

@end
