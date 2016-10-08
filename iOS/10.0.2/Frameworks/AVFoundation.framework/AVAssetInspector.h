/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (nonatomic, readonly) NSData *SHA1Digest;
@property (nonatomic, readonly) NSArray *alternateTrackGroups;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) bool canContainFragments;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (getter=isCompatibleWithAirPlayVideo, nonatomic, readonly) bool compatibleWithAirPlayVideo;
@property (getter=isCompatibleWithSavedPhotosAlbum, nonatomic, readonly) bool compatibleWithSavedPhotosAlbum;
@property (getter=isComposable, nonatomic, readonly) bool composable;
@property (nonatomic, readonly) bool containsFragments;
@property (nonatomic, readonly) AVMetadataItem *creationDate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExportable, nonatomic, readonly) bool exportable;
@property (nonatomic, readonly) NSString *identifyingTagClass;
@property (getter=_instanceIdentifier, nonatomic, readonly) NSString *instanceIdentifier;
@property (nonatomic, readonly) NSString *lyrics;
@property (getter=_mediaSelectionGroupDictionaries, nonatomic, readonly) NSArray *mediaSelectionGroupDictionaries;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) int naturalTimeScale;
@property (getter=isPlayable, nonatomic, readonly) bool playable;
@property (nonatomic, readonly) float preferredRate;
@property (nonatomic, readonly) float preferredSoundCheckVolumeNormalization;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) id propertyListForProxy;
@property (nonatomic, readonly) bool providesPreciseDurationAndTiming;
@property (getter=isReadable, nonatomic, readonly) bool readable;
@property (nonatomic, readonly) long long trackCount;
@property (nonatomic, readonly) NSArray *trackIDs;
@property (nonatomic, readonly) NSDictionary *trackReferences;

- (id)SHA1Digest;
- (id)_instanceIdentifier;
- (id)_mediaSelectionGroupDictionaries;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (bool)canContainFragments;
- (id)commonMetadata;
- (bool)containsFragments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (bool)hasProtectedContent;
- (id)identifyingTagClass;
- (bool)isCompatibleWithAirPlayVideo;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isReadable;
- (id)lyrics;
- (id)makePropertyListForProxyWithOptions:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (bool)providesPreciseDurationAndTiming;
- (long long)trackCount;
- (id)trackIDs;
- (id)trackReferences;

@end
