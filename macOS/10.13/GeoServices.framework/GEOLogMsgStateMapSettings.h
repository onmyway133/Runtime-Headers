/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying> {
    BOOL  _avoidHighways;
    BOOL  _avoidTolls;
    BOOL  _findMyCarEnabled;
    struct { 
        unsigned int navVoiceVolume : 1; 
        unsigned int preferredTransportMode : 1; 
        unsigned int avoidHighways : 1; 
        unsigned int avoidTolls : 1; 
        unsigned int findMyCarEnabled : 1; 
        unsigned int headingEnabled : 1; 
        unsigned int labelEnabled : 1; 
        unsigned int pauseSpokenAudioEnabled : 1; 
        unsigned int speedLimitEnabled : 1; 
        unsigned int trafficEnabled : 1; 
    }  _has;
    BOOL  _headingEnabled;
    BOOL  _labelEnabled;
    int  _navVoiceVolume;
    BOOL  _pauseSpokenAudioEnabled;
    int  _preferredTransportMode;
    BOOL  _speedLimitEnabled;
    BOOL  _trafficEnabled;
}

@property (nonatomic, readwrite) BOOL avoidHighways;
@property (nonatomic, readwrite) BOOL avoidTolls;
@property (nonatomic, readwrite) BOOL findMyCarEnabled;
@property (nonatomic, readwrite) BOOL hasAvoidHighways;
@property (nonatomic, readwrite) BOOL hasAvoidTolls;
@property (nonatomic, readwrite) BOOL hasFindMyCarEnabled;
@property (nonatomic, readwrite) BOOL hasHeadingEnabled;
@property (nonatomic, readwrite) BOOL hasLabelEnabled;
@property (nonatomic, readwrite) BOOL hasNavVoiceVolume;
@property (nonatomic, readwrite) BOOL hasPauseSpokenAudioEnabled;
@property (nonatomic, readwrite) BOOL hasPreferredTransportMode;
@property (nonatomic, readwrite) BOOL hasSpeedLimitEnabled;
@property (nonatomic, readwrite) BOOL hasTrafficEnabled;
@property (nonatomic, readwrite) BOOL headingEnabled;
@property (nonatomic, readwrite) BOOL labelEnabled;
@property (nonatomic, readwrite) int navVoiceVolume;
@property (nonatomic, readwrite) BOOL pauseSpokenAudioEnabled;
@property (nonatomic, readwrite) int preferredTransportMode;
@property (nonatomic, readwrite) BOOL speedLimitEnabled;
@property (nonatomic, readwrite) BOOL trafficEnabled;

- (int)StringAsNavVoiceVolume:(id)arg1;
- (int)StringAsPreferredTransportMode:(id)arg1;
- (BOOL)avoidHighways;
- (BOOL)avoidTolls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)findMyCarEnabled;
- (BOOL)hasAvoidHighways;
- (BOOL)hasAvoidTolls;
- (BOOL)hasFindMyCarEnabled;
- (BOOL)hasHeadingEnabled;
- (BOOL)hasLabelEnabled;
- (BOOL)hasNavVoiceVolume;
- (BOOL)hasPauseSpokenAudioEnabled;
- (BOOL)hasPreferredTransportMode;
- (BOOL)hasSpeedLimitEnabled;
- (BOOL)hasTrafficEnabled;
- (unsigned long long)hash;
- (BOOL)headingEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)labelEnabled;
- (void)mergeFrom:(id)arg1;
- (int)navVoiceVolume;
- (id)navVoiceVolumeAsString:(int)arg1;
- (BOOL)pauseSpokenAudioEnabled;
- (int)preferredTransportMode;
- (id)preferredTransportModeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAvoidHighways:(BOOL)arg1;
- (void)setAvoidTolls:(BOOL)arg1;
- (void)setFindMyCarEnabled:(BOOL)arg1;
- (void)setHasAvoidHighways:(BOOL)arg1;
- (void)setHasAvoidTolls:(BOOL)arg1;
- (void)setHasFindMyCarEnabled:(BOOL)arg1;
- (void)setHasHeadingEnabled:(BOOL)arg1;
- (void)setHasLabelEnabled:(BOOL)arg1;
- (void)setHasNavVoiceVolume:(BOOL)arg1;
- (void)setHasPauseSpokenAudioEnabled:(BOOL)arg1;
- (void)setHasPreferredTransportMode:(BOOL)arg1;
- (void)setHasSpeedLimitEnabled:(BOOL)arg1;
- (void)setHasTrafficEnabled:(BOOL)arg1;
- (void)setHeadingEnabled:(BOOL)arg1;
- (void)setLabelEnabled:(BOOL)arg1;
- (void)setNavVoiceVolume:(int)arg1;
- (void)setPauseSpokenAudioEnabled:(BOOL)arg1;
- (void)setPreferredTransportMode:(int)arg1;
- (void)setSpeedLimitEnabled:(BOOL)arg1;
- (void)setTrafficEnabled:(BOOL)arg1;
- (BOOL)speedLimitEnabled;
- (BOOL)trafficEnabled;
- (void)writeTo:(id)arg1;

@end
