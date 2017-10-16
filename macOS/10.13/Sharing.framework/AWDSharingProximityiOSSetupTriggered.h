/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface AWDSharingProximityiOSSetupTriggered : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int smoothedRSSI : 1; 
        unsigned int userActionType : 1; 
        unsigned int userMs : 1; 
    }  _has;
    NSString * _sessionUUID;
    int  _smoothedRSSI;
    unsigned long long  _timestamp;
    unsigned int  _userActionType;
    unsigned int  _userMs;
}

@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic, readwrite) BOOL hasSmoothedRSSI;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readwrite) BOOL hasUserActionType;
@property (nonatomic, readwrite) BOOL hasUserMs;
@property (nonatomic, readwrite, retain) NSString *sessionUUID;
@property (nonatomic, readwrite) int smoothedRSSI;
@property (nonatomic, readwrite) unsigned long long timestamp;
@property (nonatomic, readwrite) unsigned int userActionType;
@property (nonatomic, readwrite) unsigned int userMs;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSessionUUID;
- (BOOL)hasSmoothedRSSI;
- (BOOL)hasTimestamp;
- (BOOL)hasUserActionType;
- (BOOL)hasUserMs;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setHasSmoothedRSSI:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUserActionType:(BOOL)arg1;
- (void)setHasUserMs:(BOOL)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSmoothedRSSI:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserActionType:(unsigned int)arg1;
- (void)setUserMs:(unsigned int)arg1;
- (int)smoothedRSSI;
- (unsigned long long)timestamp;
- (unsigned int)userActionType;
- (unsigned int)userMs;
- (void)writeTo:(id)arg1;

@end
