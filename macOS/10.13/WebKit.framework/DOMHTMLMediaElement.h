/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface DOMHTMLMediaElement : DOMHTMLElement

@property (atomic, readwrite) BOOL autoplay;
@property (atomic, readonly) DOMTimeRanges *buffered;
@property (atomic, readwrite) BOOL controls;
@property (atomic, readwrite, copy) NSString *crossOrigin;
@property (atomic, readonly, copy) NSString *currentSrc;
@property (atomic, readwrite) double currentTime;
@property (atomic, readwrite) BOOL defaultMuted;
@property (atomic, readwrite) double defaultPlaybackRate;
@property (atomic, readonly) double duration;
@property (atomic, readonly) BOOL ended;
@property (atomic, readonly) DOMMediaError *error;
@property (atomic, readwrite) BOOL loop;
@property (atomic, readwrite, copy) NSString *mediaGroup;
@property (atomic, readwrite) BOOL muted;
@property (atomic, readonly) unsigned short networkState;
@property (atomic, readonly) BOOL paused;
@property (atomic, readwrite) double playbackRate;
@property (atomic, readonly) DOMTimeRanges *played;
@property (atomic, readwrite, copy) NSString *preload;
@property (atomic, readonly) unsigned short readyState;
@property (atomic, readonly) DOMTimeRanges *seekable;
@property (atomic, readonly) BOOL seeking;
@property (atomic, readwrite, copy) NSString *src;
@property (atomic, readwrite) double volume;
@property (atomic, readwrite) BOOL webkitClosedCaptionsVisible;
@property (atomic, readonly) BOOL webkitHasClosedCaptions;
@property (atomic, readwrite) BOOL webkitPreservesPitch;

- (BOOL)autoplay;
- (id)buffered;
- (id)canPlayType:(id)arg1;
- (BOOL)controls;
- (id)crossOrigin;
- (id)currentSrc;
- (double)currentTime;
- (BOOL)defaultMuted;
- (double)defaultPlaybackRate;
- (double)duration;
- (BOOL)ended;
- (id)error;
- (void)fastSeek:(double)arg1;
- (double)getStartDate;
- (void)load;
- (BOOL)loop;
- (id)mediaGroup;
- (BOOL)muted;
- (unsigned short)networkState;
- (void)pause;
- (BOOL)paused;
- (void)play;
- (double)playbackRate;
- (id)played;
- (id)preload;
- (unsigned short)readyState;
- (id)seekable;
- (BOOL)seeking;
- (void)setAutoplay:(BOOL)arg1;
- (void)setControls:(BOOL)arg1;
- (void)setCrossOrigin:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDefaultMuted:(BOOL)arg1;
- (void)setDefaultPlaybackRate:(double)arg1;
- (void)setLoop:(BOOL)arg1;
- (void)setMediaGroup:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPreload:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)setVolume:(double)arg1;
- (void)setWebkitClosedCaptionsVisible:(BOOL)arg1;
- (void)setWebkitPreservesPitch:(BOOL)arg1;
- (id)src;
- (double)volume;
- (BOOL)webkitClosedCaptionsVisible;
- (BOOL)webkitHasClosedCaptions;
- (BOOL)webkitPreservesPitch;

@end
