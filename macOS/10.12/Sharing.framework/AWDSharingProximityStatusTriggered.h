/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface AWDSharingProximityStatusTriggered : PBCodable <NSCopying> {
    unsigned int  _audioSourceCount;
    unsigned int  _audioState;
    BOOL  _caseBatteryCharging;
    unsigned int  _caseBatteryLevel;
    unsigned int  _caseBatteryPercent;
    unsigned int  _deviceRole;
    unsigned int  _deviceSide;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioSourceCount : 1; 
        unsigned int audioState : 1; 
        unsigned int caseBatteryLevel : 1; 
        unsigned int caseBatteryPercent : 1; 
        unsigned int deviceRole : 1; 
        unsigned int deviceSide : 1; 
        unsigned int myBatteryLevel : 1; 
        unsigned int myBatteryPercent : 1; 
        unsigned int otherBatteryLevel : 1; 
        unsigned int otherBatteryPercent : 1; 
        unsigned int primaryLocation : 1; 
        unsigned int rssi : 1; 
        unsigned int secondaryLocation : 1; 
        unsigned int smoothedRSSI : 1; 
        unsigned int caseBatteryCharging : 1; 
        unsigned int myBatteryCharging : 1; 
        unsigned int otherBatteryCharging : 1; 
        unsigned int otherDeviceInCase : 1; 
        unsigned int outOfBoxMode : 1; 
        unsigned int paired : 1; 
    }  _has;
    NSString * _model;
    BOOL  _myBatteryCharging;
    unsigned int  _myBatteryLevel;
    unsigned int  _myBatteryPercent;
    BOOL  _otherBatteryCharging;
    unsigned int  _otherBatteryLevel;
    unsigned int  _otherBatteryPercent;
    BOOL  _otherDeviceInCase;
    BOOL  _outOfBoxMode;
    BOOL  _paired;
    unsigned int  _primaryLocation;
    int  _rssi;
    unsigned int  _secondaryLocation;
    NSString * _sessionUUID;
    int  _smoothedRSSI;
    unsigned long long  _timestamp;
}

@property (nonatomic, readwrite) unsigned int audioSourceCount;
@property (nonatomic, readwrite) unsigned int audioState;
@property (nonatomic, readwrite) BOOL caseBatteryCharging;
@property (nonatomic, readwrite) unsigned int caseBatteryLevel;
@property (nonatomic, readwrite) unsigned int caseBatteryPercent;
@property (nonatomic, readwrite) unsigned int deviceRole;
@property (nonatomic, readwrite) unsigned int deviceSide;
@property (nonatomic, readwrite) BOOL hasAudioSourceCount;
@property (nonatomic, readwrite) BOOL hasAudioState;
@property (nonatomic, readwrite) BOOL hasCaseBatteryCharging;
@property (nonatomic, readwrite) BOOL hasCaseBatteryLevel;
@property (nonatomic, readwrite) BOOL hasCaseBatteryPercent;
@property (nonatomic, readwrite) BOOL hasDeviceRole;
@property (nonatomic, readwrite) BOOL hasDeviceSide;
@property (nonatomic, readonly) BOOL hasModel;
@property (nonatomic, readwrite) BOOL hasMyBatteryCharging;
@property (nonatomic, readwrite) BOOL hasMyBatteryLevel;
@property (nonatomic, readwrite) BOOL hasMyBatteryPercent;
@property (nonatomic, readwrite) BOOL hasOtherBatteryCharging;
@property (nonatomic, readwrite) BOOL hasOtherBatteryLevel;
@property (nonatomic, readwrite) BOOL hasOtherBatteryPercent;
@property (nonatomic, readwrite) BOOL hasOtherDeviceInCase;
@property (nonatomic, readwrite) BOOL hasOutOfBoxMode;
@property (nonatomic, readwrite) BOOL hasPaired;
@property (nonatomic, readwrite) BOOL hasPrimaryLocation;
@property (nonatomic, readwrite) BOOL hasRssi;
@property (nonatomic, readwrite) BOOL hasSecondaryLocation;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic, readwrite) BOOL hasSmoothedRSSI;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readwrite, retain) NSString *model;
@property (nonatomic, readwrite) BOOL myBatteryCharging;
@property (nonatomic, readwrite) unsigned int myBatteryLevel;
@property (nonatomic, readwrite) unsigned int myBatteryPercent;
@property (nonatomic, readwrite) BOOL otherBatteryCharging;
@property (nonatomic, readwrite) unsigned int otherBatteryLevel;
@property (nonatomic, readwrite) unsigned int otherBatteryPercent;
@property (nonatomic, readwrite) BOOL otherDeviceInCase;
@property (nonatomic, readwrite) BOOL outOfBoxMode;
@property (nonatomic, readwrite) BOOL paired;
@property (nonatomic, readwrite) unsigned int primaryLocation;
@property (nonatomic, readwrite) int rssi;
@property (nonatomic, readwrite) unsigned int secondaryLocation;
@property (nonatomic, readwrite, retain) NSString *sessionUUID;
@property (nonatomic, readwrite) int smoothedRSSI;
@property (nonatomic, readwrite) unsigned long long timestamp;

- (void).cxx_destruct;
- (unsigned int)audioSourceCount;
- (unsigned int)audioState;
- (BOOL)caseBatteryCharging;
- (unsigned int)caseBatteryLevel;
- (unsigned int)caseBatteryPercent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceRole;
- (unsigned int)deviceSide;
- (id)dictionaryRepresentation;
- (BOOL)hasAudioSourceCount;
- (BOOL)hasAudioState;
- (BOOL)hasCaseBatteryCharging;
- (BOOL)hasCaseBatteryLevel;
- (BOOL)hasCaseBatteryPercent;
- (BOOL)hasDeviceRole;
- (BOOL)hasDeviceSide;
- (BOOL)hasModel;
- (BOOL)hasMyBatteryCharging;
- (BOOL)hasMyBatteryLevel;
- (BOOL)hasMyBatteryPercent;
- (BOOL)hasOtherBatteryCharging;
- (BOOL)hasOtherBatteryLevel;
- (BOOL)hasOtherBatteryPercent;
- (BOOL)hasOtherDeviceInCase;
- (BOOL)hasOutOfBoxMode;
- (BOOL)hasPaired;
- (BOOL)hasPrimaryLocation;
- (BOOL)hasRssi;
- (BOOL)hasSecondaryLocation;
- (BOOL)hasSessionUUID;
- (BOOL)hasSmoothedRSSI;
- (BOOL)hasTimestamp;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (BOOL)myBatteryCharging;
- (unsigned int)myBatteryLevel;
- (unsigned int)myBatteryPercent;
- (BOOL)otherBatteryCharging;
- (unsigned int)otherBatteryLevel;
- (unsigned int)otherBatteryPercent;
- (BOOL)otherDeviceInCase;
- (BOOL)outOfBoxMode;
- (BOOL)paired;
- (unsigned int)primaryLocation;
- (BOOL)readFrom:(id)arg1;
- (int)rssi;
- (unsigned int)secondaryLocation;
- (id)sessionUUID;
- (void)setAudioSourceCount:(unsigned int)arg1;
- (void)setAudioState:(unsigned int)arg1;
- (void)setCaseBatteryCharging:(BOOL)arg1;
- (void)setCaseBatteryLevel:(unsigned int)arg1;
- (void)setCaseBatteryPercent:(unsigned int)arg1;
- (void)setDeviceRole:(unsigned int)arg1;
- (void)setDeviceSide:(unsigned int)arg1;
- (void)setHasAudioSourceCount:(BOOL)arg1;
- (void)setHasAudioState:(BOOL)arg1;
- (void)setHasCaseBatteryCharging:(BOOL)arg1;
- (void)setHasCaseBatteryLevel:(BOOL)arg1;
- (void)setHasCaseBatteryPercent:(BOOL)arg1;
- (void)setHasDeviceRole:(BOOL)arg1;
- (void)setHasDeviceSide:(BOOL)arg1;
- (void)setHasMyBatteryCharging:(BOOL)arg1;
- (void)setHasMyBatteryLevel:(BOOL)arg1;
- (void)setHasMyBatteryPercent:(BOOL)arg1;
- (void)setHasOtherBatteryCharging:(BOOL)arg1;
- (void)setHasOtherBatteryLevel:(BOOL)arg1;
- (void)setHasOtherBatteryPercent:(BOOL)arg1;
- (void)setHasOtherDeviceInCase:(BOOL)arg1;
- (void)setHasOutOfBoxMode:(BOOL)arg1;
- (void)setHasPaired:(BOOL)arg1;
- (void)setHasPrimaryLocation:(BOOL)arg1;
- (void)setHasRssi:(BOOL)arg1;
- (void)setHasSecondaryLocation:(BOOL)arg1;
- (void)setHasSmoothedRSSI:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setModel:(id)arg1;
- (void)setMyBatteryCharging:(BOOL)arg1;
- (void)setMyBatteryLevel:(unsigned int)arg1;
- (void)setMyBatteryPercent:(unsigned int)arg1;
- (void)setOtherBatteryCharging:(BOOL)arg1;
- (void)setOtherBatteryLevel:(unsigned int)arg1;
- (void)setOtherBatteryPercent:(unsigned int)arg1;
- (void)setOtherDeviceInCase:(BOOL)arg1;
- (void)setOutOfBoxMode:(BOOL)arg1;
- (void)setPaired:(BOOL)arg1;
- (void)setPrimaryLocation:(unsigned int)arg1;
- (void)setRssi:(int)arg1;
- (void)setSecondaryLocation:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSmoothedRSSI:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)smoothedRSSI;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end