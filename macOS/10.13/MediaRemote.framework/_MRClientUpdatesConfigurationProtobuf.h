/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying> {
    BOOL  _artworkUpdates;
    struct { 
        unsigned int artworkUpdates : 1; 
        unsigned int keyboardUpdates : 1; 
        unsigned int nowPlayingUpdates : 1; 
        unsigned int volumeUpdates : 1; 
    }  _has;
    BOOL  _keyboardUpdates;
    BOOL  _nowPlayingUpdates;
    BOOL  _volumeUpdates;
}

@property (nonatomic, readwrite) BOOL artworkUpdates;
@property (nonatomic, readwrite) BOOL hasArtworkUpdates;
@property (nonatomic, readwrite) BOOL hasKeyboardUpdates;
@property (nonatomic, readwrite) BOOL hasNowPlayingUpdates;
@property (nonatomic, readwrite) BOOL hasVolumeUpdates;
@property (nonatomic, readwrite) BOOL keyboardUpdates;
@property (nonatomic, readwrite) BOOL nowPlayingUpdates;
@property (nonatomic, readwrite) BOOL volumeUpdates;

- (BOOL)artworkUpdates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArtworkUpdates;
- (BOOL)hasKeyboardUpdates;
- (BOOL)hasNowPlayingUpdates;
- (BOOL)hasVolumeUpdates;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)keyboardUpdates;
- (void)mergeFrom:(id)arg1;
- (BOOL)nowPlayingUpdates;
- (BOOL)readFrom:(id)arg1;
- (void)setArtworkUpdates:(BOOL)arg1;
- (void)setHasArtworkUpdates:(BOOL)arg1;
- (void)setHasKeyboardUpdates:(BOOL)arg1;
- (void)setHasNowPlayingUpdates:(BOOL)arg1;
- (void)setHasVolumeUpdates:(BOOL)arg1;
- (void)setKeyboardUpdates:(BOOL)arg1;
- (void)setNowPlayingUpdates:(BOOL)arg1;
- (void)setVolumeUpdates:(BOOL)arg1;
- (BOOL)volumeUpdates;
- (void)writeTo:(id)arg1;

@end
