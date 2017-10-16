/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding> {
    AVFragmentedMovieInternal * _fragmentedMovie;
}

@property (getter=isAssociatedWithFragmentMinder, nonatomic, readonly) BOOL associatedWithFragmentMinder;
@property (nonatomic, readonly) NSArray *tracks;

- (void).cxx_destruct;
- (Class)_classForMovieTracks;
- (BOOL)_mindsFragments;
- (BOOL)_needsLegacyChangeNotifications;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isAssociatedWithFragmentMinder;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

@end
