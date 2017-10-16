/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEOPlaceDataItem : NSObject <GEOMapItem> {
    GEOAddressObject * _addressObject;
    NSMapTable * _attributionMap;
    NSArray * _currentOperatingHours;
    GEOMapItemDetourInfo * _detourInfo;
    GEOPDMultiLocalizedString * _disambiguationLabel;
    _GEOEncyclopedicInfo * _encyclopedicInfo;
    NSData * _externalTransitStationCode;
    GEOMapItemIdentifier * _identifier;
    BOOL  _isTransitDisplayFeature;
    NSString * _name;
    GEOPlace * _place;
    GEOPDPlace * _placeData;
    <GEOMapItemVenueInfo> * _venueInfo;
}

@property (getter=_acceptsApplePay, nonatomic, readonly) BOOL acceptsApplePay;
@property (getter=_additionalPlaceInfos, nonatomic, readonly) NSArray *additionalPlaceInfos;
@property (nonatomic, readonly) NSDictionary *addressDictionary;
@property (getter=_addressGeocodeAccuracy, nonatomic, readonly) int addressGeocodeAccuracy;
@property (getter=_areaInMeters, nonatomic, readonly) double areaInMeters;
@property (nonatomic, readonly) NSArray *areasOfInterest;
@property (getter=_associatedApp, nonatomic, readonly) GEOAssociatedApp *associatedApp;
@property (getter=_attribution, nonatomic, readonly) GEOMapItemPlaceAttribution *attribution;
@property (getter=_browseCategories, nonatomic, readonly) NSArray *browseCategories;
@property (getter=_businessClaim, nonatomic, readonly) GEOPDBusinessClaim *businessClaim;
@property (getter=_businessURL, nonatomic, readonly) NSString *businessURL;
@property (nonatomic, readonly) struct { double x1; double x2; } centerCoordinate;
@property (getter=_childPlaces, nonatomic, readonly) NSArray *childPlaces;
@property (getter=_clientAttributes, nonatomic, readonly) GEOMapItemClientAttributes *clientAttributes;
@property (getter=_completeOperatingHours, nonatomic, readonly) NSArray *completeOperatingHours;
@property (nonatomic, readonly) int contactAddressType;
@property (nonatomic, readonly) BOOL contactIsMe;
@property (nonatomic, readonly) NSString *contactName;
@property (nonatomic, readonly) NSString *contactSpokenName;
@property (getter=_containedPlace, nonatomic, readonly) GEOMapItemContainedPlace *containedPlace;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (getter=_customIconID, nonatomic, readonly) unsigned long long customIconID;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOMapItemDetourInfo *detourInfo;
@property (getter=_disambiguationName, nonatomic, readonly) NSString *disambiguationName;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegionOrNil;
@property (nonatomic, readonly) float displayMaxZoom;
@property (nonatomic, readonly) float displayMinZoom;
@property (getter=isDisputed, nonatomic, readonly) BOOL disputed;
@property (nonatomic, readonly) NSData *encodedData;
@property (getter=_encyclopedicInfo, nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSData *externalTransitStationCode;
@property (getter=_featureLink, nonatomic, readonly) GEORestaurantFeaturesLink *featureLink;
@property (getter=_flyover, nonatomic, readonly) GEOPDFlyover *flyover;
@property (getter=_flyoverAnnouncementMessage, nonatomic, readonly) NSString *flyoverAnnouncementMessage;
@property (nonatomic, readonly) GEOAddress *geoAddress;
@property (nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property (getter=_goodForKids, nonatomic, readonly) BOOL goodForKids;
@property (getter=_hasAcceptsApplePayAmenity, nonatomic, readonly) BOOL hasAcceptsApplePayAmenity;
@property (getter=_hasAnyAmenities, nonatomic, readonly) BOOL hasAnyAmenities;
@property (getter=_hasAreaInMeters, nonatomic, readonly) BOOL hasAreaInMeters;
@property (getter=_hasBusinessClaim, nonatomic, readonly) BOOL hasBusinessClaim;
@property (getter=_hasCurrentOperatingHours, nonatomic, readonly) BOOL hasCurrentOperatingHours;
@property (getter=_hasDelivery, nonatomic, readonly) BOOL hasDelivery;
@property (getter=_hasDeliveryAmenity, nonatomic, readonly) BOOL hasDeliveryAmenity;
@property (nonatomic, readonly) BOOL hasDisplayMaxZoom;
@property (nonatomic, readonly) BOOL hasDisplayMinZoom;
@property (getter=_hasEncyclopedicInfo, nonatomic, readonly) BOOL hasEncyclopedicInfo;
@property (nonatomic, readonly) BOOL hasExpiredComponents;
@property (getter=_hasFeatureLink, nonatomic, readonly) BOOL hasFeatureLink;
@property (getter=_hasFlyover, nonatomic, readonly) BOOL hasFlyover;
@property (getter=_hasGoodForKidsAmenity, nonatomic, readonly) BOOL hasGoodForKidsAmenity;
@property (getter=_hasMUID, nonatomic, readonly) BOOL hasMUID;
@property (getter=_hasOperatingHours, nonatomic, readonly) BOOL hasOperatingHours;
@property (getter=_hasPriceRange, nonatomic, readonly) BOOL hasPriceRange;
@property (getter=_hasResolvablePartialInformation, nonatomic, readonly) BOOL hasResolvablePartialInformation;
@property (getter=_hasResultProviderID, nonatomic, readonly) BOOL hasResultProviderID;
@property (getter=_hasTakesReservationsAmenity, nonatomic, readonly) BOOL hasTakesReservationsAmenity;
@property (getter=_hasTelephone, nonatomic, readonly) BOOL hasTelephone;
@property (getter=_hasTransit, nonatomic, readonly) BOOL hasTransit;
@property (getter=_hasUserRatingScore, nonatomic, readonly) BOOL hasUserRatingScore;
@property (getter=_hasVenueFeatureType, nonatomic, readonly) BOOL hasVenueFeatureType;
@property (getter=_hasWifiFingerprintConfidence, nonatomic, readonly) BOOL hasWifiFingerprintConfidence;
@property (getter=_hasWifiFingerprintLabelStatusCode, nonatomic, readonly) BOOL hasWifiFingerprintLabelStatusCode;
@property (getter=_hasWifiFingerprintLabelType, nonatomic, readonly) BOOL hasWifiFingerprintLabelType;
@property (atomic, readonly) unsigned long long hash;
@property (getter=_identifier, nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (getter=_isInLinkedPlaceRelationship, nonatomic, readonly) BOOL inLinkedPlaceRelationship;
@property (nonatomic, readonly) BOOL isEventAllDay;
@property (getter=_isStandaloneBrand, nonatomic, readonly) BOOL isStandAloneBrand;
@property (getter=_isTransitDisplayFeature, nonatomic, readonly) BOOL isTransitDisplayFeature;
@property (getter=_messageLink, nonatomic, readonly) GEOMessageLink *messageLink;
@property (getter=_muid, nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (getter=_needsAttribution, nonatomic, readonly) BOOL needsAttribution;
@property (getter=_normalizedUserRatingScore, nonatomic, readonly) float normalizedUserRatingScore;
@property (getter=_openingHoursOptions, nonatomic, readonly) unsigned long long openingHoursOptions;
@property (getter=_operatingHours, nonatomic, readonly) NSArray *operatingHours;
@property (getter=_optsOutOfTelephoneAds, nonatomic, readonly) BOOL optsOutOfTelephoneAds;
@property (getter=_parsecSectionType, nonatomic, readonly) int parsecSectionType;
@property (getter=_photos, nonatomic, readonly) NSArray *photos;
@property (getter=_photosAttribution, nonatomic, readonly) GEOMapItemPhotosAttribution *photosAttribution;
@property (getter=_place, nonatomic, readonly) GEOPlace *place;
@property (getter=_placeData, nonatomic, readonly) GEOPDPlace *placeData;
@property (getter=_placeDataAsData, nonatomic, readonly) NSData *placeDataAsData;
@property (getter=_placeDisplayStyle, nonatomic, readonly) int placeDisplayStyle;
@property (getter=_placeDisplayType, nonatomic, readonly) int placeDisplayType;
@property (getter=_placeType, nonatomic, readonly) int placeType;
@property (getter=_poiPinpointURLString, nonatomic, readonly) NSString *poiPinpointURLString;
@property (getter=_poiSurveyURLString, nonatomic, readonly) NSString *poiSurveyURLString;
@property (getter=_priceDescription, nonatomic, readonly) GEOPriceDescription *priceDescription;
@property (getter=_priceRange, nonatomic, readonly) unsigned int priceRange;
@property (getter=_providerURL, nonatomic, readonly, copy) NSURL *providerURL;
@property (getter=_quickLinks, nonatomic, readonly) NSArray *quickLinks;
@property (nonatomic, readonly) int referenceFrame;
@property (getter=_responseStatusIsIncomplete, nonatomic, readonly) BOOL responseStatusIncomplete;
@property (getter=_resultProviderID, nonatomic, readonly) int resultProviderID;
@property (getter=_resultSnippetDistanceDisplayThreshold, nonatomic, readonly) unsigned int resultSnippetDistanceDisplayThreshold;
@property (getter=_resultSnippetLocationString, nonatomic, readonly) NSString *resultSnippetLocationString;
@property (getter=_reviews, nonatomic, readonly) NSArray *reviews;
@property (getter=_reviewsAttribution, nonatomic, readonly) GEOMapItemReviewsAttribution *reviewsAttribution;
@property (getter=_roadAccessPoints, nonatomic, readonly) NSArray *roadAccessPoints;
@property (getter=_sampleSizeForUserRatingScore, nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property (nonatomic, readonly) NSArray *spatialMappedCategories;
@property (getter=_styleAttributes, nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (atomic, readonly) Class superclass;
@property (getter=_takesReservations, nonatomic, readonly) BOOL takesReservations;
@property (getter=_telephone, nonatomic, readonly) NSString *telephone;
@property (nonatomic, readonly) NSTimeZone *timezone;
@property (getter=_tips, nonatomic, readonly) NSArray *tips;
@property (getter=_transitAttribution, nonatomic, readonly) <GEOTransitAttribution> *transitAttribution;
@property (getter=_transitInfo, nonatomic, readonly) <GEOMapItemTransitInfo> *transitInfo;
@property (getter=isValid, nonatomic, readonly) BOOL valid;
@property (getter=_vendorID, nonatomic, readonly, copy) NSString *vendorID;
@property (getter=_venueFeatureType, nonatomic, readonly) int venueFeatureType;
@property (getter=_venueInfo, nonatomic, readonly) <GEOMapItemVenueInfo> *venueInfo;
@property (getter=_webURL, nonatomic, readonly, copy) NSURL *webURL;
@property (getter=_wifiFingerprintConfidence, nonatomic, readonly) unsigned int wifiFingerprintConfidence;
@property (getter=_wifiFingerprintLabelStatusCode, nonatomic, readonly) int wifiFingerprintLabelStatusCode;
@property (getter=_wifiFingerprintLabelType, nonatomic, readonly) int wifiFingerprintLabelType;

- (void).cxx_destruct;
- (BOOL)_acceptsApplePay;
- (id)_additionalPlaceInfos;
- (int)_addressGeocodeAccuracy;
- (double)_areaInMeters;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (id)_asPlaceInfo;
- (id)_associatedApp;
- (id)_attribution;
- (id)_attributionInfoForAttribution:(id)arg1 requirement:(int)arg2;
- (id)_bestBrandIconURLForSize:(struct CGSize { double x1; double x2; })arg1 allowSmaller:(BOOL)arg2;
- (id)_browseCategories;
- (id)_businessClaim;
- (id)_businessURL;
- (id)_childPlaces;
- (id)_clientAttributes;
- (id)_completeOperatingHours;
- (id)_containedPlace;
- (unsigned long long)_customIconID;
- (id)_disambiguationName;
- (id)_displayNameForAttribution:(id)arg1 requirement:(int)arg2;
- (id)_encyclopedicInfo;
- (id)_featureLink;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (BOOL)_goodForKids;
- (BOOL)_hasAcceptsApplePayAmenity;
- (BOOL)_hasAnyAmenities;
- (BOOL)_hasAreaInMeters;
- (BOOL)_hasBusinessClaim;
- (BOOL)_hasCurrentOperatingHours;
- (BOOL)_hasDelivery;
- (BOOL)_hasDeliveryAmenity;
- (BOOL)_hasEncyclopedicInfo;
- (BOOL)_hasFeatureLink;
- (BOOL)_hasFlyover;
- (BOOL)_hasGoodForKidsAmenity;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasMUID;
- (BOOL)_hasMoreForAttribution:(id)arg1 requirement:(int)arg2;
- (BOOL)_hasOperatingHours;
- (BOOL)_hasPriceRange;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasResultProviderID;
- (BOOL)_hasTakesReservationsAmenity;
- (BOOL)_hasTelephone;
- (BOOL)_hasTransit;
- (BOOL)_hasUserRatingScore;
- (BOOL)_hasVenueFeatureType;
- (BOOL)_hasWifiFingerprintConfidence;
- (BOOL)_hasWifiFingerprintLabelStatusCode;
- (BOOL)_hasWifiFingerprintLabelType;
- (id)_identifier;
- (BOOL)_isInLinkedPlaceRelationship;
- (BOOL)_isStandaloneBrand;
- (BOOL)_isTransitDisplayFeature;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_logoPathForAttribution:(id)arg1 requirement:(int)arg2 scale:(double)arg3;
- (id)_mapItemBySettingIsTransitDisplayFeature:(BOOL)arg1;
- (id)_mapItemByStrippingOptionalData;
- (id)_messageLink;
- (unsigned long long)_muid;
- (BOOL)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned long long)_openingHoursOptions;
- (id)_operatingHours;
- (BOOL)_optsOutOfTelephoneAds;
- (int)_parsecSectionType;
- (id)_photos;
- (id)_photosAttribution;
- (id)_place;
- (id)_placeData;
- (id)_placeDataAsData;
- (id)_placeDataStyleAttributes;
- (int)_placeDisplayStyle;
- (int)_placeDisplayType;
- (int)_placeType;
- (id)_poiPinpointURLString;
- (id)_poiSurveyURLString;
- (id)_priceDescription;
- (unsigned int)_priceRange;
- (id)_providerURL;
- (id)_quickLinks;
- (BOOL)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (unsigned int)_resultSnippetDistanceDisplayThreshold;
- (id)_resultSnippetLocationString;
- (id)_reviews;
- (id)_reviewsAttribution;
- (id)_roadAccessPoints;
- (unsigned int)_sampleSizeForUserRatingScore;
- (BOOL)_showAddForAttribution:(id)arg1 requirement:(int)arg2;
- (BOOL)_showAttributionForAttribution:(id)arg1 requirement:(int)arg2;
- (id)_spokenAddressForLocale:(id)arg1;
- (id)_styleAttributes;
- (BOOL)_takesReservations;
- (id)_telephone;
- (id)_tips;
- (id)_transitAttribution;
- (id)_transitInfo;
- (id)_vendorID;
- (int)_venueFeatureType;
- (id)_venueInfo;
- (id)_webURL;
- (id)_wifiFingerprintComponent;
- (unsigned int)_wifiFingerprintConfidence;
- (int)_wifiFingerprintLabelStatusCode;
- (int)_wifiFingerprintLabelType;
- (id)addressDictionary;
- (id)addressObject;
- (id)areasOfInterest;
- (struct { double x1; double x2; })centerCoordinate;
- (int)contactAddressType;
- (BOOL)contactIsMe;
- (id)contactName;
- (id)contactSpokenName;
- (struct { double x1; double x2; })coordinate;
- (id)description;
- (id)detourInfo;
- (id)displayMapRegion;
- (id)displayMapRegionOrNil;
- (float)displayMaxZoom;
- (float)displayMinZoom;
- (id)encodedData;
- (id)eventDate;
- (id)eventName;
- (id)externalTransitStationCode;
- (id)geoAddress;
- (id)geoFenceMapRegion;
- (BOOL)hasDisplayMaxZoom;
- (BOOL)hasDisplayMinZoom;
- (BOOL)hasExpiredComponents;
- (id)initWithPlaceData:(id)arg1;
- (id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2 disambiguationLabel:(id)arg3 detourInfo:(id)arg4 externalTransitStationCode:(id)arg5;
- (id)initWithPlaceData:(id)arg1 detourInfo:(id)arg2;
- (BOOL)isDisputed;
- (BOOL)isEqualToMapItem:(id)arg1;
- (BOOL)isEventAllDay;
- (BOOL)isValid;
- (id)name;
- (int)referenceFrame;
- (id)shortAddress;
- (id)spatialMappedCategories;
- (id)spokenNameForLocale:(id)arg1;
- (id)timezone;
- (id)weatherDisplayName;

@end
