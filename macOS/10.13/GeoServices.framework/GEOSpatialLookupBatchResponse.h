/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    NSMutableArray * _responses;
    int  _statusCode;
}

@property (nonatomic, readwrite) BOOL hasStatusCode;
@property (nonatomic, readwrite, retain) NSMutableArray *responses;
@property (nonatomic, readwrite) int statusCode;

+ (Class)responseType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addResponse:(id)arg1;
- (void)clearResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusCode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)responseAtIndex:(unsigned long long)arg1;
- (id)responses;
- (unsigned long long)responsesCount;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setResponses:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
