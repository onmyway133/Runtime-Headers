/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDSearchResult : PBCodable <NSCopying> {
    GEOPDResolvedItem * _clientResolvedResult;
    GEOPDRelatedSearchSuggestion * _defaultRelatedSearchSuggestion;
    GEOPDDirectionIntent * _directionIntent;
    NSMutableArray * _disambiguationLabels;
    NSMutableArray * _displayHeaderSubstitutes;
    GEOMapRegion * _displayMapRegion;
    unsigned int  _dymSuggestionVisibleTime;
    BOOL  _enablePartialClientization;
    struct { 
        unsigned int dymSuggestionVisibleTime : 1; 
        unsigned int searchResultType : 1; 
        unsigned int enablePartialClientization : 1; 
        unsigned int isChainResultSet : 1; 
        unsigned int showDymSuggestionCloseButton : 1; 
    }  _has;
    BOOL  _isChainResultSet;
    NSMutableArray * _relatedSearchSuggestions;
    NSMutableArray * _resultDetourInfos;
    NSString * _resultDisplayHeader;
    GEOPDSearchClientBehavior * _searchClientBehavior;
    int  _searchResultType;
    BOOL  _showDymSuggestionCloseButton;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) GEOPDResolvedItem *clientResolvedResult;
@property (nonatomic, readwrite, retain) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property (nonatomic, readwrite, retain) GEOPDDirectionIntent *directionIntent;
@property (nonatomic, readwrite, retain) NSMutableArray *disambiguationLabels;
@property (nonatomic, readwrite, retain) NSMutableArray *displayHeaderSubstitutes;
@property (nonatomic, readwrite, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, readwrite) unsigned int dymSuggestionVisibleTime;
@property (nonatomic, readwrite) BOOL enablePartialClientization;
@property (nonatomic, readonly) BOOL hasClientResolvedResult;
@property (nonatomic, readonly) BOOL hasDefaultRelatedSearchSuggestion;
@property (nonatomic, readonly) BOOL hasDirectionIntent;
@property (nonatomic, readonly) BOOL hasDisplayMapRegion;
@property (nonatomic, readwrite) BOOL hasDymSuggestionVisibleTime;
@property (nonatomic, readwrite) BOOL hasEnablePartialClientization;
@property (nonatomic, readwrite) BOOL hasIsChainResultSet;
@property (nonatomic, readonly) BOOL hasResultDisplayHeader;
@property (nonatomic, readonly) BOOL hasSearchClientBehavior;
@property (nonatomic, readwrite) BOOL hasSearchResultType;
@property (nonatomic, readwrite) BOOL hasShowDymSuggestionCloseButton;
@property (nonatomic, readwrite) BOOL isChainResultSet;
@property (nonatomic, readwrite, retain) NSMutableArray *relatedSearchSuggestions;
@property (nonatomic, readwrite, retain) NSMutableArray *resultDetourInfos;
@property (nonatomic, readwrite, retain) NSString *resultDisplayHeader;
@property (nonatomic, readwrite, retain) GEOPDSearchClientBehavior *searchClientBehavior;
@property (nonatomic, readwrite) int searchResultType;
@property (nonatomic, readwrite) BOOL showDymSuggestionCloseButton;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)disambiguationLabelType;
+ (Class)displayHeaderSubstituteType;
+ (Class)relatedSearchSuggestionType;
+ (Class)resultDetourInfoType;

- (void).cxx_destruct;
- (int)StringAsSearchResultType:(id)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)addDisplayHeaderSubstitute:(id)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (void)clearDisambiguationLabels;
- (void)clearDisplayHeaderSubstitutes;
- (void)clearRelatedSearchSuggestions;
- (void)clearResultDetourInfos;
- (id)clientResolvedResult;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultRelatedSearchSuggestion;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionIntent;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (id)disambiguationLabels;
- (unsigned long long)disambiguationLabelsCount;
- (id)displayHeaderSubstituteAtIndex:(unsigned long long)arg1;
- (id)displayHeaderSubstitutes;
- (unsigned long long)displayHeaderSubstitutesCount;
- (id)displayMapRegion;
- (unsigned int)dymSuggestionVisibleTime;
- (BOOL)enablePartialClientization;
- (BOOL)hasClientResolvedResult;
- (BOOL)hasDefaultRelatedSearchSuggestion;
- (BOOL)hasDirectionIntent;
- (BOOL)hasDisplayMapRegion;
- (BOOL)hasDymSuggestionVisibleTime;
- (BOOL)hasEnablePartialClientization;
- (BOOL)hasIsChainResultSet;
- (BOOL)hasResultDisplayHeader;
- (BOOL)hasSearchClientBehavior;
- (BOOL)hasSearchResultType;
- (BOOL)hasShowDymSuggestionCloseButton;
- (unsigned long long)hash;
- (BOOL)isChainResultSet;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (id)relatedSearchSuggestions;
- (unsigned long long)relatedSearchSuggestionsCount;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (id)resultDetourInfos;
- (unsigned long long)resultDetourInfosCount;
- (id)resultDisplayHeader;
- (id)searchClientBehavior;
- (int)searchResultType;
- (id)searchResultTypeAsString:(int)arg1;
- (void)setClientResolvedResult:(id)arg1;
- (void)setDefaultRelatedSearchSuggestion:(id)arg1;
- (void)setDirectionIntent:(id)arg1;
- (void)setDisambiguationLabels:(id)arg1;
- (void)setDisplayHeaderSubstitutes:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setDymSuggestionVisibleTime:(unsigned int)arg1;
- (void)setEnablePartialClientization:(BOOL)arg1;
- (void)setHasDymSuggestionVisibleTime:(BOOL)arg1;
- (void)setHasEnablePartialClientization:(BOOL)arg1;
- (void)setHasIsChainResultSet:(BOOL)arg1;
- (void)setHasSearchResultType:(BOOL)arg1;
- (void)setHasShowDymSuggestionCloseButton:(BOOL)arg1;
- (void)setIsChainResultSet:(BOOL)arg1;
- (void)setRelatedSearchSuggestions:(id)arg1;
- (void)setResultDetourInfos:(id)arg1;
- (void)setResultDisplayHeader:(id)arg1;
- (void)setSearchClientBehavior:(id)arg1;
- (void)setSearchResultType:(int)arg1;
- (void)setShowDymSuggestionCloseButton:(BOOL)arg1;
- (BOOL)showDymSuggestionCloseButton;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
