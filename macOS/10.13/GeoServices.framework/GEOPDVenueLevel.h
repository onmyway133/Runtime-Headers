/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDVenueLevel : PBCodable <NSCopying> {
    struct { 
        unsigned int levelId : 1; 
        unsigned int ordinal : 1; 
    }  _has;
    GEOPDVenueLabel * _label;
    unsigned long long  _levelId;
    int  _ordinal;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasLabel;
@property (nonatomic, readwrite) BOOL hasLevelId;
@property (nonatomic, readwrite) BOOL hasOrdinal;
@property (nonatomic, readwrite, retain) GEOPDVenueLabel *label;
@property (nonatomic, readwrite) unsigned long long levelId;
@property (nonatomic, readwrite) int ordinal;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLabel;
- (BOOL)hasLevelId;
- (BOOL)hasOrdinal;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)levelId;
- (void)mergeFrom:(id)arg1;
- (int)ordinal;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLevelId:(BOOL)arg1;
- (void)setHasOrdinal:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLevelId:(unsigned long long)arg1;
- (void)setOrdinal:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
