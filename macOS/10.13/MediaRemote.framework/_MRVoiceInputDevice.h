/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {
    _MRVoiceInputDeviceDescriptorProtobuf * _descriptor;
    unsigned int  _deviceID;
    struct { 
        unsigned int deviceID : 1; 
        unsigned int recordingState : 1; 
    }  _has;
    int  _recordingState;
}

@property (nonatomic, readwrite, retain) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic, readwrite) unsigned int deviceID;
@property (nonatomic, readonly) BOOL hasDescriptor;
@property (nonatomic, readwrite) BOOL hasDeviceID;
@property (nonatomic, readwrite) BOOL hasRecordingState;
@property (nonatomic, readwrite) int recordingState;

- (int)StringAsRecordingState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (unsigned int)deviceID;
- (id)dictionaryRepresentation;
- (BOOL)hasDescriptor;
- (BOOL)hasDeviceID;
- (BOOL)hasRecordingState;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)recordingState;
- (id)recordingStateAsString:(int)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setDeviceID:(unsigned int)arg1;
- (void)setHasDeviceID:(BOOL)arg1;
- (void)setHasRecordingState:(BOOL)arg1;
- (void)setRecordingState:(int)arg1;
- (void)writeTo:(id)arg1;

@end