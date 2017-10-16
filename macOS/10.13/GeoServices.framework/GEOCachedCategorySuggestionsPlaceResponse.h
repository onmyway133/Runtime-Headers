/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable <NSCopying> {
    NSString * _countryCode;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _language;
    GEOPDPlaceResponse * _response;
    NSString * _sourceURL;
    double  _timestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSString *countryCode;
@property (nonatomic, readonly) BOOL hasCountryCode;
@property (nonatomic, readonly) BOOL hasLanguage;
@property (nonatomic, readonly) BOOL hasResponse;
@property (nonatomic, readonly) BOOL hasSourceURL;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readwrite, retain) NSString *language;
@property (nonatomic, readwrite, retain) GEOPDPlaceResponse *response;
@property (nonatomic, readwrite, retain) NSString *sourceURL;
@property (nonatomic, readwrite) double timestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCountryCode;
- (BOOL)hasLanguage;
- (BOOL)hasResponse;
- (BOOL)hasSourceURL;
- (BOOL)hasTimestamp;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)response;
- (void)setCountryCode:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLanguage:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sourceURL;
- (double)timestamp;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
