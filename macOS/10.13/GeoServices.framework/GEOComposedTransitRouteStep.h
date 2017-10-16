/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {
    GEOPBTransitHall * _destinationHall;
    GEOPBTransitStop * _destinationStop;
    unsigned int  _duration;
    int  _maneuver;
    GEOPBTransitHall * _originHall;
    GEOPBTransitStop * _originStop;
    <GEOTransitRoutingIncidentMessage> * _routeDetailsIncidentMessage;
    NSArray * _routeDetailsPrimaryArtwork;
    <GEOTransitArtworkDataSource> * _routeDetailsSecondaryArtwork;
    unsigned int  _startTime;
    NSArray * _steppingArtwork;
    <GEOTransitRoutingIncidentMessage> * _steppingIncidentMessage;
    GEOTransitStep * _transitStep;
}

@property (nonatomic, readonly) GEOPBTransitHall *destinationHall;
@property (nonatomic, readonly) GEOPBTransitStop *destinationStop;
@property (nonatomic, readonly) NSString *destinationStopIntermediateListName;
@property (nonatomic, readonly) unsigned long long destinationTransitEntityMuid;
@property (nonatomic, readonly) GEOInstructionSet *instructions;
@property (nonatomic, readonly) int maneuver;
@property (nonatomic, readonly) GEOComposedTransitRouteStep *nextTransitStep;
@property (nonatomic, readonly) GEOPBTransitHall *originHall;
@property (nonatomic, readonly) GEOPBTransitStop *originStop;
@property (nonatomic, readonly) NSString *originStopIntermediateListName;
@property (nonatomic, readonly) unsigned long long originTransitEntityMuid;
@property (nonatomic, readonly) GEOComposedTransitRouteStep *previousTransitStep;
@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *routeDetailsIncidentMessage;
@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *steppingIncidentMessage;
@property (nonatomic, readonly) GEOTransitStep *transitStep;

- (void).cxx_destruct;
- (id)_intermediateListNameForStop:(id)arg1;
- (id)_largestEntityAtStop:(id)arg1 passingTest:(id)arg2;
- (unsigned long long)_muidForStop:(id)arg1;
- (void)_populateArtworksWithDecoderData:(id)arg1;
- (void)_populateIncidentsWithDecoderData:(id)arg1;
- (id)description;
- (id)destinationHall;
- (id)destinationStop;
- (id)destinationStopIntermediateListName;
- (unsigned long long)destinationTransitEntityMuid;
- (unsigned int)distance;
- (unsigned int)duration;
- (struct { double x1; double x2; })endGeoCoordinate;
- (id)endingStop;
- (BOOL)hasDuration;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)instructions;
- (BOOL)isArrivalStep;
- (int)maneuver;
- (id)nextAlightingStep;
- (id)nextBoardingStep;
- (id)nextStop;
- (id)nextTransitStep;
- (id)originHall;
- (id)originStop;
- (id)originStopIntermediateListName;
- (unsigned long long)originTransitEntityMuid;
- (id)previousAlightingStep;
- (id)previousBoardingStep;
- (id)previousStop;
- (id)previousTransitStep;
- (id)routeDetailsIncidentMessage;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (struct { double x1; double x2; })startGeoCoordinate;
- (unsigned int)startTime;
- (id)startingStop;
- (id)steppingArtwork;
- (id)steppingIncidentMessage;
- (id)transitStep;

@end
