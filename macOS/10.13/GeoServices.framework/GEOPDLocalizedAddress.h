/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDLocalizedAddress : PBCodable <NSCopying> {
    GEOAddress * _address;
    NSString * _language;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) GEOAddress *address;
@property (nonatomic, readonly) BOOL hasAddress;
@property (nonatomic, readonly) BOOL hasLanguage;
@property (nonatomic, readwrite, retain) NSString *language;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)address;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddress;
- (BOOL)hasLanguage;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setLanguage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
