/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEOMapItemTransitInfo : NSObject <GEOMapItemTransitInfo> {
    NSMapTable * _cachedHeadSignsForLine;
    NSArray * _connections;
    NSArray * _departureSequences;
    NSString * _displayName;
    BOOL  _hasTransitIncidentComponent;
    NSDate * _incidentExpirationDate;
    NSArray * _incidents;
    NSArray * _lines;
    NSArray * _systems;
    NSTimeZone * _timeZone;
    GEOPDTransitInfo * _transitInfo;
    GEOPDTransitSchedule * _transitSchedule;
}

@property (nonatomic, readonly) NSArray *connections;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *departureSequences;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) BOOL hasTransitIncidentComponent;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) BOOL isTransitIncidentsTTLExpired;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) NSDate *lastFullScheduleValidDate;
@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic, readonly) unsigned long long linesCount;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) NSArray *systems;
@property (nonatomic, readonly) unsigned long long systemsCount;

- (void).cxx_destruct;
- (id)_departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 ignoreDirectionFilter:(BOOL)arg3 direction:(id)arg4 validForDateFromBlock:(id)arg5;
- (id)allSequencesForSystem:(id)arg1 direction:(id)arg2;
- (id)connections;
- (id)departureSequences;
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(id)arg4;
- (id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(id)arg3 hasSequencesWithNoDirection:(out BOOL*)arg4;
- (id)displayName;
- (BOOL)hasTransitIncidentComponent;
- (id)headSignsForLine:(id)arg1;
- (id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(id)arg2 excludingIncidentEntities:(id)arg3;
- (id)incidents;
- (id)initWithTransitInfo:(id)arg1 schedule:(id)arg2 timeZone:(id)arg3 incidents:(id)arg4 hasTransitIncidentComponent:(BOOL)arg5 incidentExpirationDate:(id)arg6 providerID:(int)arg7;
- (BOOL)isTransitIncidentsTTLExpired;
- (id)labelItems;
- (id)lastFullScheduleValidDate;
- (id)lines;
- (unsigned long long)linesCount;
- (id)linesForSystem:(id)arg1;
- (unsigned long long)numAdditionalDeparturesForSequence:(id)arg1;
- (id)sequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(id)arg4;
- (id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out BOOL*)arg4;
- (id)systems;
- (unsigned long long)systemsCount;

@end
