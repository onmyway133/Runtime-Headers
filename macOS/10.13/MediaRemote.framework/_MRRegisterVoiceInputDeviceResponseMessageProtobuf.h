/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRRegisterVoiceInputDeviceResponseMessageProtobuf : PBCodable <NSCopying> {
    unsigned int  _deviceID;
    unsigned int  _errorCode;
    struct { 
        unsigned int deviceID : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic, readwrite) unsigned int deviceID;
@property (nonatomic, readwrite) unsigned int errorCode;
@property (nonatomic, readwrite) BOOL hasDeviceID;
@property (nonatomic, readwrite) BOOL hasErrorCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceID;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (BOOL)hasDeviceID;
- (BOOL)hasErrorCode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeviceID:(unsigned int)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasDeviceID:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
