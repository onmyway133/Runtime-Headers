/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRSendPackedVirtualTouchEventMessageProtobuf : PBCodable <NSCopying> {
    NSData * _data;
}

@property (nonatomic, readwrite, retain) NSData *data;
@property (nonatomic, readonly) BOOL hasData;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasData;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
