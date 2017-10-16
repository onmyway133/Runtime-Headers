/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRSendLyricsEventMessageProtobuf : PBCodable <NSCopying> {
    _MRLyricsEventProtobuf * _event;
}

@property (nonatomic, readwrite, retain) _MRLyricsEventProtobuf *event;
@property (nonatomic, readonly) BOOL hasEvent;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)event;
- (BOOL)hasEvent;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)writeTo:(id)arg1;

@end
