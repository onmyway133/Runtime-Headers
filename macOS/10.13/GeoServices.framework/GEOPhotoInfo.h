/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPhotoInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int size : 1; 
    }  _has;
    int  _size;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic, readwrite) BOOL hasSize;
@property (nonatomic, readonly) BOOL hasUrl;
@property (nonatomic, readwrite) int size;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) NSString *url;

- (void).cxx_destruct;
- (int)StringAsSize:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSize;
- (BOOL)hasUrl;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasSize:(BOOL)arg1;
- (void)setSize:(int)arg1;
- (void)setUrl:(id)arg1;
- (int)size;
- (id)sizeAsString:(int)arg1;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

// GEOPhotoInfo (PlaceDataExtras)

- (id)initWithPlaceDataPhotoContent:(id)arg1;

@end
