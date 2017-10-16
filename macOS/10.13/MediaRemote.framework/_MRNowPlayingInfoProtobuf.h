/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRNowPlayingInfoProtobuf : PBCodable <NSCopying> {
    NSString * _album;
    NSString * _artist;
    NSData * _artworkDataDigest;
    double  _duration;
    double  _elapsedTime;
    struct { 
        unsigned int duration : 1; 
        unsigned int elapsedTime : 1; 
        unsigned int radioStationIdentifier : 1; 
        unsigned int timestamp : 1; 
        unsigned int uniqueIdentifier : 1; 
        unsigned int playbackRate : 1; 
        unsigned int repeatMode : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int isAdvertisement : 1; 
        unsigned int isAlwaysLive : 1; 
        unsigned int isExplicitTrack : 1; 
        unsigned int isMusicApp : 1; 
    }  _has;
    BOOL  _isAdvertisement;
    BOOL  _isAlwaysLive;
    BOOL  _isExplicitTrack;
    BOOL  _isMusicApp;
    float  _playbackRate;
    NSString * _radioStationHash;
    long long  _radioStationIdentifier;
    NSString * _radioStationName;
    int  _repeatMode;
    int  _shuffleMode;
    double  _timestamp;
    NSString * _title;
    unsigned long long  _uniqueIdentifier;
}

@property (nonatomic, readwrite, retain) NSString *album;
@property (nonatomic, readwrite, retain) NSString *artist;
@property (nonatomic, readwrite, retain) NSData *artworkDataDigest;
@property (nonatomic, readwrite) double duration;
@property (nonatomic, readwrite) double elapsedTime;
@property (nonatomic, readonly) BOOL hasAlbum;
@property (nonatomic, readonly) BOOL hasArtist;
@property (nonatomic, readonly) BOOL hasArtworkDataDigest;
@property (nonatomic, readwrite) BOOL hasDuration;
@property (nonatomic, readwrite) BOOL hasElapsedTime;
@property (nonatomic, readwrite) BOOL hasIsAdvertisement;
@property (nonatomic, readwrite) BOOL hasIsAlwaysLive;
@property (nonatomic, readwrite) BOOL hasIsExplicitTrack;
@property (nonatomic, readwrite) BOOL hasIsMusicApp;
@property (nonatomic, readwrite) BOOL hasPlaybackRate;
@property (nonatomic, readonly) BOOL hasRadioStationHash;
@property (nonatomic, readwrite) BOOL hasRadioStationIdentifier;
@property (nonatomic, readonly) BOOL hasRadioStationName;
@property (nonatomic, readwrite) BOOL hasRepeatMode;
@property (nonatomic, readwrite) BOOL hasShuffleMode;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, readwrite) BOOL hasUniqueIdentifier;
@property (nonatomic, readwrite) BOOL isAdvertisement;
@property (nonatomic, readwrite) BOOL isAlwaysLive;
@property (nonatomic, readwrite) BOOL isExplicitTrack;
@property (nonatomic, readwrite) BOOL isMusicApp;
@property (nonatomic, readwrite) float playbackRate;
@property (nonatomic, readwrite, retain) NSString *radioStationHash;
@property (nonatomic, readwrite) long long radioStationIdentifier;
@property (nonatomic, readwrite, retain) NSString *radioStationName;
@property (nonatomic, readwrite) int repeatMode;
@property (nonatomic, readwrite) int shuffleMode;
@property (nonatomic, readwrite) double timestamp;
@property (nonatomic, readwrite, retain) NSString *title;
@property (nonatomic, readwrite) unsigned long long uniqueIdentifier;

- (int)StringAsRepeatMode:(id)arg1;
- (int)StringAsShuffleMode:(id)arg1;
- (id)album;
- (id)artist;
- (id)artworkDataDigest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (double)elapsedTime;
- (BOOL)hasAlbum;
- (BOOL)hasArtist;
- (BOOL)hasArtworkDataDigest;
- (BOOL)hasDuration;
- (BOOL)hasElapsedTime;
- (BOOL)hasIsAdvertisement;
- (BOOL)hasIsAlwaysLive;
- (BOOL)hasIsExplicitTrack;
- (BOOL)hasIsMusicApp;
- (BOOL)hasPlaybackRate;
- (BOOL)hasRadioStationHash;
- (BOOL)hasRadioStationIdentifier;
- (BOOL)hasRadioStationName;
- (BOOL)hasRepeatMode;
- (BOOL)hasShuffleMode;
- (BOOL)hasTimestamp;
- (BOOL)hasTitle;
- (BOOL)hasUniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isAdvertisement;
- (BOOL)isAlwaysLive;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (BOOL)isMusicApp;
- (void)mergeFrom:(id)arg1;
- (float)playbackRate;
- (id)radioStationHash;
- (long long)radioStationIdentifier;
- (id)radioStationName;
- (BOOL)readFrom:(id)arg1;
- (int)repeatMode;
- (id)repeatModeAsString:(int)arg1;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtworkDataDigest:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasElapsedTime:(BOOL)arg1;
- (void)setHasIsAdvertisement:(BOOL)arg1;
- (void)setHasIsAlwaysLive:(BOOL)arg1;
- (void)setHasIsExplicitTrack:(BOOL)arg1;
- (void)setHasIsMusicApp:(BOOL)arg1;
- (void)setHasPlaybackRate:(BOOL)arg1;
- (void)setHasRadioStationIdentifier:(BOOL)arg1;
- (void)setHasRepeatMode:(BOOL)arg1;
- (void)setHasShuffleMode:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUniqueIdentifier:(BOOL)arg1;
- (void)setIsAdvertisement:(BOOL)arg1;
- (void)setIsAlwaysLive:(BOOL)arg1;
- (void)setIsExplicitTrack:(BOOL)arg1;
- (void)setIsMusicApp:(BOOL)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setRadioStationHash:(id)arg1;
- (void)setRadioStationIdentifier:(long long)arg1;
- (void)setRadioStationName:(id)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(unsigned long long)arg1;
- (int)shuffleMode;
- (id)shuffleModeAsString:(int)arg1;
- (double)timestamp;
- (id)title;
- (unsigned long long)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
