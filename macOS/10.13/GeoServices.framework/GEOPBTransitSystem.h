/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPBTransitSystem : PBCodable <GEOTransitNamedItem, NSCopying> {
    GEOPBTransitArtwork * _artwork;
    struct { 
        unsigned int muid : 1; 
        unsigned int systemIndex : 1; 
    }  _has;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    GEOStyleAttributes * _styleAttributes;
    unsigned int  _systemIndex;
    PBUnknownFields * _unknownFields;
    NSString * _website;
}

@property (nonatomic, readwrite, retain) GEOPBTransitArtwork *artwork;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasArtwork;
@property (nonatomic, readwrite) BOOL hasMuid;
@property (nonatomic, readonly) BOOL hasNameDisplayString;
@property (nonatomic, readonly) BOOL hasStyleAttributes;
@property (nonatomic, readwrite) BOOL hasSystemIndex;
@property (nonatomic, readonly) BOOL hasWebsite;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) unsigned long long muid;
@property (nonatomic, readwrite, retain) NSString *nameDisplayString;
@property (nonatomic, readwrite, retain) GEOStyleAttributes *styleAttributes;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) unsigned int systemIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) NSString *website;

- (void).cxx_destruct;
- (id)artwork;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArtwork;
- (BOOL)hasMuid;
- (BOOL)hasNameDisplayString;
- (BOOL)hasStyleAttributes;
- (BOOL)hasSystemIndex;
- (BOOL)hasWebsite;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (BOOL)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasSystemIndex:(BOOL)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setSystemIndex:(unsigned int)arg1;
- (void)setWebsite:(id)arg1;
- (id)styleAttributes;
- (unsigned int)systemIndex;
- (id)unknownFields;
- (id)website;
- (void)writeTo:(id)arg1;

// GEOPBTransitSystem (GEOTransitExtras)

- (id)geoTransitSystem;
- (id)identifier;

// GEOPBTransitSystem (GEOTransitExtrasInternal)

- (id)bestName;

@end
