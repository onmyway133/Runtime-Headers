/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying> {
    unsigned int  _deviceIdentifier;
    unsigned int  _errorCode;
    struct { 
        unsigned int deviceIdentifier : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic, readwrite) unsigned int deviceIdentifier;
@property (nonatomic, readwrite) unsigned int errorCode;
@property (nonatomic, readwrite) BOOL hasDeviceIdentifier;
@property (nonatomic, readwrite) BOOL hasErrorCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceIdentifier;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (BOOL)hasDeviceIdentifier;
- (BOOL)hasErrorCode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeviceIdentifier:(unsigned int)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasDeviceIdentifier:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
