/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDDirectionIntent : PBCodable <NSCopying> {
    GEOPDResolvedItem * _destination;
    GEOPDResolvedItem * _origin;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) GEOPDResolvedItem *destination;
@property (nonatomic, readonly) BOOL hasDestination;
@property (nonatomic, readonly) BOOL hasOrigin;
@property (nonatomic, readwrite, retain) GEOPDResolvedItem *origin;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (BOOL)hasDestination;
- (BOOL)hasOrigin;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (BOOL)readFrom:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setOrigin:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
