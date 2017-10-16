/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOURLExtraStorage : PBCodable <NSCopying> {
    GEOMapRegion * _mapRegion;
    NSString * _phoneNumber;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic, readonly) BOOL hasMapRegion;
@property (nonatomic, readonly) BOOL hasPhoneNumber;
@property (nonatomic, readonly) BOOL hasStyleAttributes;
@property (nonatomic, readonly) BOOL hasUrl;
@property (nonatomic, readwrite, retain) GEOMapRegion *mapRegion;
@property (nonatomic, readwrite, retain) NSString *phoneNumber;
@property (nonatomic, readwrite, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) NSString *url;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMapRegion;
- (BOOL)hasPhoneNumber;
- (BOOL)hasStyleAttributes;
- (BOOL)hasUrl;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)phoneNumber;
- (BOOL)readFrom:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)styleAttributes;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end
