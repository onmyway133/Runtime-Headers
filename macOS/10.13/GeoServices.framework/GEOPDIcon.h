/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDIcon : PBCodable <NSCopying> {
    GEOPDPhoto * _image;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasImage;
@property (nonatomic, readwrite, retain) GEOPDPhoto *image;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasImage;
- (unsigned long long)hash;
- (id)image;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setImage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
