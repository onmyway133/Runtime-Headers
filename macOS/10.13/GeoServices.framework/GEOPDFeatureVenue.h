/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDFeatureVenue : PBCodable <NSCopying> {
    NSMutableArray * _buildings;
    NSMutableArray * _levels;
    PBUnknownFields * _unknownFields;
    GEOPDVenueContainer * _venueContainer;
}

@property (nonatomic, readwrite, retain) NSMutableArray *buildings;
@property (nonatomic, readonly) BOOL hasVenueContainer;
@property (nonatomic, readwrite, retain) NSMutableArray *levels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) GEOPDVenueContainer *venueContainer;

+ (Class)buildingType;
+ (Class)levelType;

- (void).cxx_destruct;
- (void)addBuilding:(id)arg1;
- (void)addLevel:(id)arg1;
- (id)buildingAtIndex:(unsigned long long)arg1;
- (id)buildings;
- (unsigned long long)buildingsCount;
- (void)clearBuildings;
- (void)clearLevels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasVenueContainer;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)levelAtIndex:(unsigned long long)arg1;
- (id)levels;
- (unsigned long long)levelsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBuildings:(id)arg1;
- (void)setLevels:(id)arg1;
- (void)setVenueContainer:(id)arg1;
- (id)unknownFields;
- (id)venueContainer;
- (void)writeTo:(id)arg1;

@end
