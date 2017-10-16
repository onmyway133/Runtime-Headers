/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPBTransitArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {
    NSString * _accessibilityString;
    int  _artworkType;
    int  _artworkUse;
    int  _badge;
    struct { 
        unsigned int artworkType : 1; 
        unsigned int artworkUse : 1; 
        unsigned int badge : 1; 
    }  _has;
    GEOPBTransitIcon * _icon;
    GEOPBTransitShield * _iconFallbackShield;
    GEOPBTransitShield * _shield;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSString *accessibilityString;
@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) long long artworkSourceType;
@property (nonatomic, readwrite) int artworkType;
@property (nonatomic, readwrite) int artworkUse;
@property (nonatomic, readonly) long long artworkUseType;
@property (nonatomic, readwrite) int badge;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasAccessibilityString;
@property (nonatomic, readwrite) BOOL hasArtworkType;
@property (nonatomic, readwrite) BOOL hasArtworkUse;
@property (nonatomic, readwrite) BOOL hasBadge;
@property (nonatomic, readonly) BOOL hasIcon;
@property (nonatomic, readonly) BOOL hasIconFallbackShield;
@property (nonatomic, readonly) BOOL hasRoutingIncidentBadge;
@property (nonatomic, readonly) BOOL hasShield;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) GEOPBTransitIcon *icon;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, readwrite, retain) GEOPBTransitShield *iconFallbackShield;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, readwrite, retain) GEOPBTransitShield *shield;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsArtworkType:(id)arg1;
- (int)StringAsArtworkUse:(id)arg1;
- (int)StringAsBadge:(id)arg1;
- (id)accessibilityString;
- (int)artworkType;
- (id)artworkTypeAsString:(int)arg1;
- (int)artworkUse;
- (id)artworkUseAsString:(int)arg1;
- (int)badge;
- (id)badgeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAccessibilityString;
- (BOOL)hasArtworkType;
- (BOOL)hasArtworkUse;
- (BOOL)hasBadge;
- (BOOL)hasIcon;
- (BOOL)hasIconFallbackShield;
- (BOOL)hasShield;
- (unsigned long long)hash;
- (id)icon;
- (id)iconFallbackShield;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAccessibilityString:(id)arg1;
- (void)setArtworkType:(int)arg1;
- (void)setArtworkUse:(int)arg1;
- (void)setBadge:(int)arg1;
- (void)setHasArtworkType:(BOOL)arg1;
- (void)setHasArtworkUse:(BOOL)arg1;
- (void)setHasBadge:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconFallbackShield:(id)arg1;
- (void)setShield:(id)arg1;
- (id)shield;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPBTransitArtwork (GEOTransitExtrasInternal)

- (id)accessibilityText;
- (long long)artworkSourceType;
- (long long)artworkUseType;
- (BOOL)hasRoutingIncidentBadge;
- (id)iconDataSource;
- (id)iconFallbackShieldDataSource;
- (id)shieldDataSource;

@end