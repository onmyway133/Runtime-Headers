/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface AWDSharingCloudDatabaseZoneSaveResult : PBCodable <NSCopying> {
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, readwrite) int errorCode;
@property (nonatomic, readwrite, retain) NSString *errorDomain;
@property (nonatomic, readwrite) BOOL hasErrorCode;
@property (nonatomic, readonly) BOOL hasErrorDomain;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readwrite) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (BOOL)hasErrorCode;
- (BOOL)hasErrorDomain;
- (BOOL)hasTimestamp;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
