/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDPlace : PBCodable <NSCopying> {
    NSMutableArray * _components;
    struct { 
        unsigned int muid : 1; 
        unsigned int preferredMuid : 1; 
        unsigned int updateVersion : 1; 
        unsigned int referenceFrame : 1; 
        unsigned int resultProviderId : 1; 
        unsigned int status : 1; 
    }  _has;
    GEOPDMapsIdentifier * _mapsId;
    unsigned long long  _muid;
    unsigned long long  _preferredMuid;
    int  _referenceFrame;
    GEOMapItemInitialRequestData * _requestData;
    int  _resultProviderId;
    int  _status;
    PBUnknownFields * _unknownFields;
    unsigned long long  _updateVersion;
}

@property (nonatomic, readwrite, retain) NSMutableArray *components;
@property (nonatomic, readonly) BOOL hasMapsId;
@property (nonatomic, readwrite) BOOL hasMuid;
@property (nonatomic, readwrite) BOOL hasPreferredMuid;
@property (nonatomic, readwrite) BOOL hasReferenceFrame;
@property (nonatomic, readonly) BOOL hasRequestData;
@property (nonatomic, readwrite) BOOL hasResultProviderId;
@property (nonatomic, readwrite) BOOL hasStatus;
@property (nonatomic, readwrite) BOOL hasUpdateVersion;
@property (nonatomic, readwrite, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, readwrite) unsigned long long muid;
@property (nonatomic, readwrite) unsigned long long preferredMuid;
@property (nonatomic, readwrite) int referenceFrame;
@property (nonatomic, readwrite, retain) GEOMapItemInitialRequestData *requestData;
@property (nonatomic, readwrite) int resultProviderId;
@property (nonatomic, readwrite) int status;
@property (getter=isSupportedVenue, nonatomic, readonly) BOOL supportedVenue;
@property (getter=isSupportedVenuePOI, nonatomic, readonly) BOOL supportedVenuePOI;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite) unsigned long long updateVersion;

+ (Class)componentType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)clearComponents;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)components;
- (unsigned long long)componentsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMapsId;
- (BOOL)hasMuid;
- (BOOL)hasPreferredMuid;
- (BOOL)hasResultProviderId;
- (BOOL)hasStatus;
- (BOOL)hasUpdateVersion;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (unsigned long long)preferredMuid;
- (BOOL)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setComponents:(id)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasPreferredMuid:(BOOL)arg1;
- (void)setHasResultProviderId:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasUpdateVersion:(BOOL)arg1;
- (void)setMapsId:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPreferredMuid:(unsigned long long)arg1;
- (void)setResultProviderId:(int)arg1;
- (void)setStatus:(int)arg1;
- (void)setUpdateVersion:(unsigned long long)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)unknownFields;
- (unsigned long long)updateVersion;
- (void)writeTo:(id)arg1;

// GEOPDPlace (Cacheability)

- (BOOL)isCacheable;

// GEOPDPlace (DebugStrings)

- (id)compactDebugDescription;

// GEOPDPlace (GEOClientGeo3Extension)

- (int)StringAsReferenceFrame:(id)arg1;
- (BOOL)hasReferenceFrame;
- (BOOL)hasRequestData;
- (int)referenceFrame;
- (id)referenceFrameAsString:(int)arg1;
- (id)requestData;
- (void)setHasReferenceFrame:(BOOL)arg1;
- (void)setReferenceFrame:(int)arg1;
- (void)setRequestData:(id)arg1;

// GEOPDPlace (GEOMapItemExtras)

- (id)geoMapItem;
- (id)geoMapItemWithDetourInfo:(id)arg1;

// GEOPDPlace (PlaceDataExtras)

+ (id)attributionForPlaceData:(id)arg1 type:(int)arg2;
+ (id)failedPlaceData;
+ (id)failedPlaceDataForMuid:(unsigned long long)arg1;

- (id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1;
- (id)_entityName;
- (void)_removeETAComponents;
- (id)bestName;
- (id)businessURL;
- (id)cacheKey;
- (id)componentOfType:(int)arg1 options:(unsigned long long)arg2;
- (id)copyWithStrippedOptionalData;
- (id)copyWithoutETAComponents;
- (void)enumerateComponentOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(id)arg3;
- (void)enumerateComponentValuesOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(id)arg3;
- (void)enumerateComponentsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (void)enumerateValidComponentValuesOfType:(int)arg1 usingBlock:(id)arg2;
- (void)enumerateValidComponentWithValuesOfType:(int)arg1 usingBlock:(id)arg2;
- (void)enumerateValidComponentsWithValuesUsingBlock:(id)arg1;
- (BOOL)hasExpiredComponentsAsOf:(double)arg1;
- (BOOL)isDisputed;
- (BOOL)isStandAloneBrand;
- (BOOL)phoneNumberOptsOutOfAds:(id)arg1;
- (id)phoneNumbers;
- (int)placeDisplayType;
- (void)setFirstSeenTimestamp:(double)arg1;
- (id)spokenNameForLocale:(id)arg1;
- (BOOL)statusCodeIsValid;
- (id)successfulComponentWithValuesOfType:(int)arg1;

// GEOPDPlace (Venues)

- (BOOL)isStringIndicatingPoiInsideWestfield:(id)arg1;
- (BOOL)isSupportedVenue;
- (BOOL)isSupportedVenuePOI;

@end
