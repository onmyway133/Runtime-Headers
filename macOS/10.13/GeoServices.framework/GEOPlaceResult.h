/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPlaceResult : PBCodable <NSCopying> {
    NSMutableArray * _additionalPlaces;
    int  _cacheControl;
    NSMutableArray * _disambiguationLabels;
    unsigned long long  _flyoverTourMuid;
    struct { 
        unsigned int flyoverTourMuid : 1; 
        unsigned int cacheControl : 1; 
        unsigned int travelDistance : 1; 
        unsigned int travelTime : 1; 
    }  _has;
    NSMutableArray * _matchedTokens;
    NSMutableArray * _namedFeatures;
    GEOPlace * _place;
    NSString * _quad;
    GEOPlaceSearchRequest * _revgeoRequestTemplate;
    NSString * _suggestedQuery;
    GEOAddress * _tokenEntity;
    unsigned int  _travelDistance;
    unsigned int  _travelTime;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _unmatchedStrings;
}

@property (nonatomic, readwrite, retain) NSMutableArray *additionalPlaces;
@property (nonatomic, readwrite) int cacheControl;
@property (nonatomic, readwrite, retain) NSMutableArray *disambiguationLabels;
@property (nonatomic, readwrite) unsigned long long flyoverTourMuid;
@property (nonatomic, readwrite) BOOL hasCacheControl;
@property (nonatomic, readwrite) BOOL hasFlyoverTourMuid;
@property (nonatomic, readonly) BOOL hasQuad;
@property (nonatomic, readonly) BOOL hasRevgeoRequestTemplate;
@property (nonatomic, readonly) BOOL hasSuggestedQuery;
@property (nonatomic, readonly) BOOL hasTokenEntity;
@property (nonatomic, readwrite) BOOL hasTravelDistance;
@property (nonatomic, readwrite) BOOL hasTravelTime;
@property (nonatomic, readwrite, retain) NSMutableArray *matchedTokens;
@property (nonatomic, readwrite, retain) NSMutableArray *namedFeatures;
@property (nonatomic, readwrite, retain) GEOPlace *place;
@property (nonatomic, readwrite, retain) NSString *quad;
@property (nonatomic, readwrite, retain) GEOPlaceSearchRequest *revgeoRequestTemplate;
@property (nonatomic, readwrite, retain) NSString *suggestedQuery;
@property (nonatomic, readwrite, retain) GEOAddress *tokenEntity;
@property (nonatomic, readwrite) unsigned int travelDistance;
@property (nonatomic, readwrite) unsigned int travelTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) NSMutableArray *unmatchedStrings;

+ (Class)additionalPlaceType;
+ (Class)disambiguationLabelType;
+ (Class)matchedTokenType;
+ (Class)namedFeatureType;
+ (Class)unmatchedStringType;

- (void).cxx_destruct;
- (int)StringAsCacheControl:(id)arg1;
- (void)addAdditionalPlace:(id)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)addMatchedToken:(id)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)addUnmatchedString:(id)arg1;
- (id)additionalPlaceAtIndex:(unsigned long long)arg1;
- (id)additionalPlaces;
- (unsigned long long)additionalPlacesCount;
- (int)cacheControl;
- (id)cacheControlAsString:(int)arg1;
- (void)clearAdditionalPlaces;
- (void)clearDisambiguationLabels;
- (void)clearMatchedTokens;
- (void)clearNamedFeatures;
- (void)clearUnmatchedStrings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (id)disambiguationLabels;
- (unsigned long long)disambiguationLabelsCount;
- (unsigned long long)flyoverTourMuid;
- (BOOL)hasCacheControl;
- (BOOL)hasFlyoverTourMuid;
- (BOOL)hasQuad;
- (BOOL)hasRevgeoRequestTemplate;
- (BOOL)hasSuggestedQuery;
- (BOOL)hasTokenEntity;
- (BOOL)hasTravelDistance;
- (BOOL)hasTravelTime;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)matchedTokenAtIndex:(unsigned long long)arg1;
- (id)matchedTokens;
- (unsigned long long)matchedTokensCount;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (id)namedFeatures;
- (unsigned long long)namedFeaturesCount;
- (id)place;
- (id)quad;
- (BOOL)readFrom:(id)arg1;
- (id)revgeoRequestTemplate;
- (void)setAdditionalPlaces:(id)arg1;
- (void)setCacheControl:(int)arg1;
- (void)setDisambiguationLabels:(id)arg1;
- (void)setFlyoverTourMuid:(unsigned long long)arg1;
- (void)setHasCacheControl:(BOOL)arg1;
- (void)setHasFlyoverTourMuid:(BOOL)arg1;
- (void)setHasTravelDistance:(BOOL)arg1;
- (void)setHasTravelTime:(BOOL)arg1;
- (void)setMatchedTokens:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setRevgeoRequestTemplate:(id)arg1;
- (void)setSuggestedQuery:(id)arg1;
- (void)setTokenEntity:(id)arg1;
- (void)setTravelDistance:(unsigned int)arg1;
- (void)setTravelTime:(unsigned int)arg1;
- (void)setUnmatchedStrings:(id)arg1;
- (id)suggestedQuery;
- (id)tokenEntity;
- (unsigned int)travelDistance;
- (unsigned int)travelTime;
- (id)unknownFields;
- (id)unmatchedStringAtIndex:(unsigned long long)arg1;
- (id)unmatchedStrings;
- (unsigned long long)unmatchedStringsCount;
- (void)writeTo:(id)arg1;

// GEOPlaceResult (GEOMapItemExtras)

- (id)geoMapItem;

@end
