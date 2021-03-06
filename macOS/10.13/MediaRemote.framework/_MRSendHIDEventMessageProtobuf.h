/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRSendHIDEventMessageProtobuf : PBCodable <NSCopying> {
    NSData * _hidEventData;
}

@property (nonatomic, readonly) BOOL hasHidEventData;
@property (nonatomic, readwrite, retain) NSData *hidEventData;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHidEventData;
- (unsigned long long)hash;
- (id)hidEventData;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHidEventData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
