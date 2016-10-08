/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface AWDSharingProximityStatusResult : PBCodable <NSCopying> {
    unsigned int  _dismissType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dismissType : 1; 
        unsigned int rssi : 1; 
        unsigned int smoothedRSSI : 1; 
        unsigned int visibleMs : 1; 
    }  _has;
    int  _rssi;
    NSString * _sessionUUID;
    int  _smoothedRSSI;
    unsigned long long  _timestamp;
    unsigned int  _visibleMs;
}

@property (nonatomic, readwrite) unsigned int dismissType;
@property (nonatomic, readwrite) BOOL hasDismissType;
@property (nonatomic, readwrite) BOOL hasRssi;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic, readwrite) BOOL hasSmoothedRSSI;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readwrite) BOOL hasVisibleMs;
@property (nonatomic, readwrite) int rssi;
@property (nonatomic, readwrite, retain) NSString *sessionUUID;
@property (nonatomic, readwrite) int smoothedRSSI;
@property (nonatomic, readwrite) unsigned long long timestamp;
@property (nonatomic, readwrite) unsigned int visibleMs;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dismissType;
- (BOOL)hasDismissType;
- (BOOL)hasRssi;
- (BOOL)hasSessionUUID;
- (BOOL)hasSmoothedRSSI;
- (BOOL)hasTimestamp;
- (BOOL)hasVisibleMs;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)rssi;
- (id)sessionUUID;
- (void)setDismissType:(unsigned int)arg1;
- (void)setHasDismissType:(BOOL)arg1;
- (void)setHasRssi:(BOOL)arg1;
- (void)setHasSmoothedRSSI:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasVisibleMs:(BOOL)arg1;
- (void)setRssi:(int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSmoothedRSSI:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVisibleMs:(unsigned int)arg1;
- (int)smoothedRSSI;
- (unsigned long long)timestamp;
- (unsigned int)visibleMs;
- (void)writeTo:(id)arg1;

@end