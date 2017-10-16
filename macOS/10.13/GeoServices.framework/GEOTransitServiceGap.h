/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying> {
    unsigned int  _absEndTime;
    unsigned int  _absStartTime;
    unsigned int  _appearsBeforeSuggestedRouteIndex;
    GEOFormattedString * _displayMessage;
    struct { 
        unsigned int absEndTime : 1; 
        unsigned int absStartTime : 1; 
        unsigned int appearsBeforeSuggestedRouteIndex : 1; 
    }  _has;
}

@property (nonatomic, readwrite) unsigned int absEndTime;
@property (nonatomic, readwrite) unsigned int absStartTime;
@property (nonatomic, readwrite) unsigned int appearsBeforeSuggestedRouteIndex;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) <GEOServerFormattedString> *displayMessagFormatString;
@property (nonatomic, readwrite, retain) GEOFormattedString *displayMessage;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readwrite) BOOL hasAbsEndTime;
@property (nonatomic, readwrite) BOOL hasAbsStartTime;
@property (nonatomic, readwrite) BOOL hasAppearsBeforeSuggestedRouteIndex;
@property (nonatomic, readonly) BOOL hasDisplayMessage;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long routeListInsertBeforeIndex;
@property (nonatomic, readonly) NSDate *startDate;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)absEndTime;
- (unsigned int)absStartTime;
- (unsigned int)appearsBeforeSuggestedRouteIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMessage;
- (BOOL)hasAbsEndTime;
- (BOOL)hasAbsStartTime;
- (BOOL)hasAppearsBeforeSuggestedRouteIndex;
- (BOOL)hasDisplayMessage;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAbsEndTime:(unsigned int)arg1;
- (void)setAbsStartTime:(unsigned int)arg1;
- (void)setAppearsBeforeSuggestedRouteIndex:(unsigned int)arg1;
- (void)setDisplayMessage:(id)arg1;
- (void)setHasAbsEndTime:(BOOL)arg1;
- (void)setHasAbsStartTime:(BOOL)arg1;
- (void)setHasAppearsBeforeSuggestedRouteIndex:(BOOL)arg1;
- (void)writeTo:(id)arg1;

// GEOTransitServiceGap (GEOTransitExtrasInternal)

- (id)displayMessagFormatString;
- (id)endDate;
- (unsigned long long)routeListInsertBeforeIndex;
- (id)startDate;

@end
