/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying> {
    unsigned long long  _buildingId;
    NSMutableArray * _categorys;
    struct { 
        unsigned int buildingId : 1; 
        unsigned int levelId : 1; 
        unsigned int sectionId : 1; 
        unsigned int venueId : 1; 
        unsigned int maxResults : 1; 
        unsigned int highlightDiff : 1; 
    }  _has;
    BOOL  _highlightDiff;
    unsigned long long  _levelId;
    int  _maxResults;
    NSString * _query;
    unsigned long long  _sectionId;
    PBUnknownFields * _unknownFields;
    unsigned long long  _venueId;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, readwrite) unsigned long long buildingId;
@property (nonatomic, readwrite, retain) NSMutableArray *categorys;
@property (nonatomic, readwrite) BOOL hasBuildingId;
@property (nonatomic, readwrite) BOOL hasHighlightDiff;
@property (nonatomic, readwrite) BOOL hasLevelId;
@property (nonatomic, readwrite) BOOL hasMaxResults;
@property (nonatomic, readonly) BOOL hasQuery;
@property (nonatomic, readwrite) BOOL hasSectionId;
@property (nonatomic, readwrite) BOOL hasVenueId;
@property (nonatomic, readonly) BOOL hasViewportInfo;
@property (nonatomic, readwrite) BOOL highlightDiff;
@property (nonatomic, readwrite) unsigned long long levelId;
@property (nonatomic, readwrite) int maxResults;
@property (nonatomic, readwrite, retain) NSString *query;
@property (nonatomic, readwrite) unsigned long long sectionId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite) unsigned long long venueId;
@property (nonatomic, readwrite, retain) GEOPDViewportInfo *viewportInfo;

+ (Class)categoryType;

- (void).cxx_destruct;
- (void)addCategory:(id)arg1;
- (unsigned long long)buildingId;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (id)categorys;
- (unsigned long long)categorysCount;
- (void)clearCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBuildingId;
- (BOOL)hasHighlightDiff;
- (BOOL)hasLevelId;
- (BOOL)hasMaxResults;
- (BOOL)hasQuery;
- (BOOL)hasSectionId;
- (BOOL)hasVenueId;
- (BOOL)hasViewportInfo;
- (unsigned long long)hash;
- (BOOL)highlightDiff;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)levelId;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)sectionId;
- (void)setBuildingId:(unsigned long long)arg1;
- (void)setCategorys:(id)arg1;
- (void)setHasBuildingId:(BOOL)arg1;
- (void)setHasHighlightDiff:(BOOL)arg1;
- (void)setHasLevelId:(BOOL)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHasSectionId:(BOOL)arg1;
- (void)setHasVenueId:(BOOL)arg1;
- (void)setHighlightDiff:(BOOL)arg1;
- (void)setLevelId:(unsigned long long)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setSectionId:(unsigned long long)arg1;
- (void)setVenueId:(unsigned long long)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (unsigned long long)venueId;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
