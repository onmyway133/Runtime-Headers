/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapItemInitialRequestData : PBCodable <NSCopying> {
    struct { 
        unsigned int requestType : 1; 
    }  _has;
    GEOPDPlaceRequestParameters * _placeRequestParameters;
    int  _requestType;
}

@property (nonatomic, readonly) BOOL hasPlaceRequestParameters;
@property (nonatomic, readwrite) BOOL hasRequestType;
@property (nonatomic, readwrite, retain) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (nonatomic, readwrite) int requestType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceRequestParameters;
- (BOOL)hasRequestType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRequestParameters;
- (BOOL)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (void)setPlaceRequestParameters:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
