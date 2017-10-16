/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {
    GEOLatLng * _coordinate;
    struct { 
        unsigned int stopID : 1; 
    }  _has;
    unsigned long long  _stopID;
}

@property (nonatomic, readwrite, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) BOOL hasCoordinate;
@property (nonatomic, readwrite) BOOL hasStopID;
@property (nonatomic, readwrite) unsigned long long stopID;

- (void).cxx_destruct;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCoordinate;
- (BOOL)hasStopID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasStopID:(BOOL)arg1;
- (void)setStopID:(unsigned long long)arg1;
- (unsigned long long)stopID;
- (void)writeTo:(id)arg1;

// GEONavigationTransitStopSummary (GEONavigation)

- (id)initWithTransitStop:(id)arg1;

@end
