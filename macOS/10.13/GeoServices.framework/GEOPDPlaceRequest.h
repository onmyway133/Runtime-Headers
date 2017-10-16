/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEOPDClientMetadata * _clientMetadata;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    struct { 
        unsigned int requestType : 1; 
        unsigned int needLatency : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    }  _has;
    BOOL  _needLatency;
    GEOPDPlaceRequestParameters * _placeRequestParameters;
    int  _requestType;
    NSMutableArray * _requestedComponents;
    NSMutableArray * _spokenLanguages;
    BOOL  _suppressResultsRequiringAttribution;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, readwrite, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, readwrite, retain) NSMutableArray *displayLanguages;
@property (nonatomic, readwrite, retain) NSString *displayRegion;
@property (nonatomic, readonly) BOOL hasAnalyticMetadata;
@property (nonatomic, readonly) BOOL hasClientMetadata;
@property (nonatomic, readonly) BOOL hasDisplayRegion;
@property (nonatomic, readwrite) BOOL hasNeedLatency;
@property (nonatomic, readonly) BOOL hasPlaceRequestParameters;
@property (nonatomic, readwrite) BOOL hasRequestType;
@property (nonatomic, readwrite) BOOL hasSuppressResultsRequiringAttribution;
@property (nonatomic, readwrite) BOOL needLatency;
@property (nonatomic, readwrite, retain) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (nonatomic, readwrite) int requestType;
@property (nonatomic, readwrite, retain) NSMutableArray *requestedComponents;
@property (nonatomic, readwrite, retain) NSMutableArray *spokenLanguages;
@property (nonatomic, readwrite) BOOL suppressResultsRequiringAttribution;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)displayLanguageType;
+ (Class)requestedComponentType;
+ (Class)spokenLanguageType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (void)addDisplayLanguage:(id)arg1;
- (void)addRequestedComponent:(id)arg1;
- (void)addSpokenLanguage:(id)arg1;
- (id)analyticMetadata;
- (void)clearDisplayLanguages;
- (void)clearRequestedComponents;
- (void)clearSpokenLanguages;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (id)displayLanguages;
- (unsigned long long)displayLanguagesCount;
- (id)displayRegion;
- (BOOL)hasAnalyticMetadata;
- (BOOL)hasClientMetadata;
- (BOOL)hasDisplayRegion;
- (BOOL)hasPlaceRequestParameters;
- (BOOL)hasRequestType;
- (BOOL)hasSuppressResultsRequiringAttribution;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRequestParameters;
- (BOOL)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedComponentAtIndex:(unsigned long long)arg1;
- (id)requestedComponents;
- (unsigned long long)requestedComponentsCount;
- (Class)responseClass;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setPlaceRequestParameters:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setRequestedComponents:(id)arg1;
- (void)setSpokenLanguages:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(BOOL)arg1;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (id)spokenLanguages;
- (unsigned long long)spokenLanguagesCount;
- (BOOL)suppressResultsRequiringAttribution;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPDPlaceRequest (GEOPlaceDataRequestClientExtendedExtension)

- (BOOL)hasNeedLatency;
- (BOOL)needLatency;
- (void)setHasNeedLatency:(BOOL)arg1;
- (void)setNeedLatency:(BOOL)arg1;

// GEOPDPlaceRequest (PlaceDataExtras)

- (id)_initWithTraits:(id)arg1;
- (void)addRequestedComponentIfNotNil:(id)arg1;
- (id)componentInfoWithType:(int)arg1 count:(unsigned int)arg2 traits:(id)arg3;
- (int)geoUserPreferredTransportType;
- (BOOL)hasResultProviderID;
- (id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned int)arg2;
- (id)initForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)initForCategoryListWithTraits:(id)arg1;
- (id)initForDFRCategoryListWithTraits:(id)arg1;
- (id)initForDatasetCheckWithTraits:(id)arg1;
- (id)initForGeoIpLookupWithIpAddress:(id)arg1 traits:(id)arg2;
- (id)initForNearestTransitStationWithLine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)initForSpotlightCategoryListWithTraits:(id)arg1;
- (id)initForWifiFingerprintLookupWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4;
- (id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 floorOrdinal:(int)arg2 includeEntryPoints:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4;
- (id)initWithSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 suppressResultsRequiringAttribution:(BOOL)arg6 traits:(id)arg7;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithTraits:(id)arg1 count:(unsigned int)arg2 includeEntryPoints:(BOOL)arg3;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (BOOL)isAlwaysCacheable;
- (BOOL)isBrandLookupRequest;
- (BOOL)isCanonicalLocationSearchRequest;
- (BOOL)isForwardGeocoderRequest;
- (BOOL)isMerchantRequest;
- (BOOL)isPlaceRefinementRequest;
- (int)resultProviderID;
- (BOOL)shouldConsiderCaching;

@end
