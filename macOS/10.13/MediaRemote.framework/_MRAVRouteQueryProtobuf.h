/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRAVRouteQueryProtobuf : PBCodable <NSCopying> {
    NSString * _routeUID;
}

@property (nonatomic, readonly) BOOL hasRouteUID;
@property (nonatomic, readwrite, retain) NSString *routeUID;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRouteUID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routeUID;
- (void)setRouteUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
