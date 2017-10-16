/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _additionalPlaceTypes;
    NSString * _deviceCountryCode;
    NSString * _displayRegion;
    NSMutableArray * _locations;
    NSMutableArray * _serviceTags;
}

@property (nonatomic, readonly) int*additionalPlaceTypes;
@property (nonatomic, readonly) unsigned long long additionalPlaceTypesCount;
@property (nonatomic, readwrite, retain) NSString *deviceCountryCode;
@property (nonatomic, readwrite, retain) NSString *displayRegion;
@property (nonatomic, readonly) BOOL hasDeviceCountryCode;
@property (nonatomic, readonly) BOOL hasDisplayRegion;
@property (nonatomic, readwrite, retain) NSMutableArray *locations;
@property (nonatomic, readwrite, retain) NSMutableArray *serviceTags;

+ (Class)locationType;
+ (Class)serviceTagType;

- (void).cxx_destruct;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)addLocation:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (int*)additionalPlaceTypes;
- (id)additionalPlaceTypesAsString:(int)arg1;
- (unsigned long long)additionalPlaceTypesCount;
- (void)clearAdditionalPlaceTypes;
- (void)clearLocations;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceCountryCode;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (BOOL)hasDeviceCountryCode;
- (BOOL)hasDisplayRegion;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)writeTo:(id)arg1;

@end