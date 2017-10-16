/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOFormatArgument : PBCodable <GEOServerFormatToken, NSCopying> {
    GEOPBTransitArtwork * _artwork;
    int  _format;
    struct { 
        unsigned int format : 1; 
        unsigned int valInt1 : 1; 
        unsigned int valInt2 : 1; 
    }  _has;
    GEOPrice * _price;
    NSMutableArray * _timestampDatas;
    NSString * _token;
    unsigned int  _valInt1;
    unsigned int  _valInt2;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _valInt3s;
    NSString * _valString;
}

@property (nonatomic, readwrite, retain) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artworkValue;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) int format;
@property (nonatomic, readonly) BOOL hasArtwork;
@property (nonatomic, readwrite) BOOL hasFormat;
@property (nonatomic, readonly) BOOL hasPrice;
@property (nonatomic, readonly) BOOL hasToken;
@property (nonatomic, readwrite) BOOL hasValInt1;
@property (nonatomic, readwrite) BOOL hasValInt2;
@property (nonatomic, readonly) BOOL hasValString;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) GEOPrice *price;
@property (nonatomic, readonly) <GEOServerFormatTokenPriceValue> *priceValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) NSArray *timeStampValues;
@property (nonatomic, readwrite, retain) NSMutableArray *timestampDatas;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readwrite, retain) NSString *token;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readwrite) unsigned int valInt1;
@property (nonatomic, readwrite) unsigned int valInt2;
@property (nonatomic, readonly) unsigned int*valInt3s;
@property (nonatomic, readonly) unsigned long long valInt3sCount;
@property (nonatomic, readwrite, retain) NSString *valString;
@property (nonatomic, readonly) unsigned int value1;
@property (nonatomic, readonly) unsigned int value2;
@property (nonatomic, readonly) NSArray *value3s;

+ (Class)timestampDataType;

- (void).cxx_destruct;
- (int)StringAsFormat:(id)arg1;
- (void)addTimestampData:(id)arg1;
- (void)addValInt3:(unsigned int)arg1;
- (id)artwork;
- (void)clearTimestampDatas;
- (void)clearValInt3s;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)format;
- (id)formatAsString:(int)arg1;
- (BOOL)hasArtwork;
- (BOOL)hasFormat;
- (BOOL)hasPrice;
- (BOOL)hasToken;
- (BOOL)hasValInt1;
- (BOOL)hasValInt2;
- (BOOL)hasValString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)price;
- (BOOL)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)setHasFormat:(BOOL)arg1;
- (void)setHasValInt1:(BOOL)arg1;
- (void)setHasValInt2:(BOOL)arg1;
- (void)setPrice:(id)arg1;
- (void)setTimestampDatas:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setValInt1:(unsigned int)arg1;
- (void)setValInt2:(unsigned int)arg1;
- (void)setValInt3s:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setValString:(id)arg1;
- (id)timestampDataAtIndex:(unsigned long long)arg1;
- (id)timestampDatas;
- (unsigned long long)timestampDatasCount;
- (id)token;
- (unsigned int)valInt1;
- (unsigned int)valInt2;
- (unsigned int)valInt3AtIndex:(unsigned long long)arg1;
- (unsigned int*)valInt3s;
- (unsigned long long)valInt3sCount;
- (id)valString;
- (void)writeTo:(id)arg1;

// GEOFormatArgument (GEOServicesExtras)

- (id)artworkValue;
- (id)priceValue;
- (id)stringValue;
- (id)timeStampValues;
- (long long)type;
- (unsigned int)value1;
- (unsigned int)value2;
- (id)value3s;

@end