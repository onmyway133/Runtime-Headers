/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPBTransitHall : PBCodable <GEOTransitNamedItem, NSCopying> {
    unsigned int  _hallIndex;
    struct { 
        unsigned int muid : 1; 
        unsigned int hallIndex : 1; 
        unsigned int stationIndex : 1; 
    }  _has;
    GEOLatLng * _location;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    unsigned int  _stationIndex;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _zoomNames;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) unsigned int hallIndex;
@property (nonatomic, readwrite) BOOL hasHallIndex;
@property (nonatomic, readonly) BOOL hasLocation;
@property (nonatomic, readwrite) BOOL hasMuid;
@property (nonatomic, readonly) BOOL hasNameDisplayString;
@property (nonatomic, readwrite) BOOL hasStationIndex;
@property (nonatomic, readonly) BOOL hasStyleAttributes;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) GEOLatLng *location;
@property (nonatomic, readwrite) unsigned long long muid;
@property (nonatomic, readwrite, retain) NSString *nameDisplayString;
@property (nonatomic, readwrite) unsigned int stationIndex;
@property (nonatomic, readwrite, retain) GEOStyleAttributes *styleAttributes;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) NSMutableArray *zoomNames;

+ (Class)zoomNameType;

- (void).cxx_destruct;
- (void)addZoomName:(id)arg1;
- (void)clearZoomNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hallIndex;
- (BOOL)hasHallIndex;
- (BOOL)hasLocation;
- (BOOL)hasMuid;
- (BOOL)hasNameDisplayString;
- (BOOL)hasStationIndex;
- (BOOL)hasStyleAttributes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (BOOL)readFrom:(id)arg1;
- (void)setHallIndex:(unsigned int)arg1;
- (void)setHasHallIndex:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasStationIndex:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStationIndex:(unsigned int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setZoomNames:(id)arg1;
- (unsigned int)stationIndex;
- (id)styleAttributes;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (id)zoomNames;
- (unsigned long long)zoomNamesCount;

// GEOPBTransitHall (GEOTransitExtras)

- (id)bestName;
- (id)bestNameWithLocale:(out id*)arg1;
- (id)identifier;

@end
