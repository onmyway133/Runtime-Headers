/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNTrafficIncidentAlert : NSObject {
    NSDate * _alertDate;
    NSData * _alertID;
    unsigned long long  _alertType;
    struct { 
        unsigned int index; 
        float offset; 
    }  _alternateEndValidCoordinateRange;
    GEOComposedRoute * _alternateRoute;
    double  _distanceToIncident;
    struct { 
        unsigned int index; 
        float offset; 
    }  _endValidCoordinateRange;
    NSDate * _eta;
    NSData * _etaResponseID;
    struct { 
        unsigned int index; 
        float offset; 
    }  _incidentCoordinate;
    BOOL  _isAutomaticReroute;
    GEOETARoute * _oldETARoute;
    GEOComposedRoute * _originalRoute;
    struct { 
        unsigned int index; 
        float offset; 
    }  _startValidCoordinateRange;
}

@property (nonatomic, readonly) NSDate *alertDate;
@property (nonatomic, readonly) NSArray *alertDescriptions;
@property (nonatomic, readonly) double alertDisplayDuration;
@property (nonatomic, readonly) NSData *alertID;
@property (nonatomic, readonly) NSArray *alertTitles;
@property (nonatomic, readonly) unsigned long long alertType;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } alternateEndValidCoordinateRange;
@property (nonatomic, readonly) GEOComposedRoute *alternateRoute;
@property (nonatomic, readwrite) double distanceToIncident;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } endValidCoordinateRange;
@property (nonatomic, readwrite, retain) NSDate *eta;
@property (nonatomic, readonly) NSData *etaResponseID;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } incidentCoordinate;
@property (nonatomic, readonly) BOOL isAutomaticReroute;
@property (nonatomic, readonly) double newEstimatedTime;
@property (nonatomic, readonly) GEOETARoute *oldETARoute;
@property (nonatomic, readonly) GEORouteIncident *oldETARouteIncident;
@property (nonatomic, readonly) double oldEstimatedTime;
@property (nonatomic, readonly) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) unsigned long long secondsSaved;
@property (nonatomic, readonly) NSArray *spokenTexts;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } startValidCoordinateRange;

- (void).cxx_destruct;
- (struct { double x1; double x2; })_divergenceCoordinate;
- (id)_dynamicStringValues;
- (void)_findRouteDivergence;
- (struct { unsigned int x1; float x2; })_routeCoordinateAtDuration:(double)arg1 beforeRouteCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (id)alertDate;
- (id)alertDescriptions;
- (double)alertDisplayDuration;
- (id)alertID;
- (id)alertTitles;
- (unsigned long long)alertType;
- (struct { unsigned int x1; float x2; })alternateEndValidCoordinateRange;
- (id)alternateRoute;
- (double)distanceToIncident;
- (struct { unsigned int x1; float x2; })endValidCoordinateRange;
- (id)eta;
- (id)etaResponseID;
- (struct { unsigned int x1; float x2; })incidentCoordinate;
- (id)initWithRoute:(id)arg1 etaRoute:(id)arg2 etaResponse:(id)arg3;
- (id)initWithTrafficIncidentAlertDetails:(id)arg1;
- (BOOL)isAutomaticReroute;
- (BOOL)isSimilarTo:(id)arg1;
- (double)newEstimatedTime;
- (id)oldETARoute;
- (id)oldETARouteIncident;
- (double)oldEstimatedTime;
- (id)originalRoute;
- (unsigned long long)secondsSaved;
- (void)setDistanceToIncident:(double)arg1;
- (void)setEta:(id)arg1;
- (id)spokenTexts;
- (struct { unsigned int x1; float x2; })startValidCoordinateRange;
- (void)updateAlertIDWithAlert:(id)arg1;
- (void)updateLocation:(id)arg1;

// MNTrafficIncidentAlert (Extras)

+ (id)trafficIncidentAlertForDetails:(id)arg1;

@end
