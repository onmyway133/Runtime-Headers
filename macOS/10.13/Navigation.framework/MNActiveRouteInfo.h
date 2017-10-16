/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNActiveRouteInfo : NSObject <NSSecureCoding> {
    unsigned long long  _alternateRouteIndex;
    NSDate * _displayETA;
    unsigned long long  _displayRemainingMinutes;
    GEOETARoute * _etaRoute;
    GEOComposedRoute * _route;
    NSUUID * _routeID;
    NSArray * _routeIncidents;
    GEORouteInitializerData * _routeInitializerData;
}

@property (nonatomic, readwrite) unsigned long long alternateRouteIndex;
@property (nonatomic, readwrite, retain) NSDate *displayETA;
@property (nonatomic, readwrite) unsigned long long displayRemainingMinutes;
@property (nonatomic, readwrite, retain) GEOETATrafficUpdateResponse *etaResponse;
@property (nonatomic, readwrite, retain) GEOETARoute *etaRoute;
@property (nonatomic, readwrite, retain) GEOComposedRoute *route;
@property (nonatomic, readonly) NSUUID *routeID;
@property (nonatomic, readwrite, retain) NSArray *routeIncidents;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)alternateRouteIndex;
- (id)displayETA;
- (unsigned long long)displayRemainingMinutes;
- (void)encodeWithCoder:(id)arg1;
- (id)etaResponse;
- (id)etaRoute;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (id)route;
- (id)routeID;
- (id)routeIncidents;
- (void)setAlternateRouteIndex:(unsigned long long)arg1;
- (void)setDisplayETA:(id)arg1;
- (void)setDisplayRemainingMinutes:(unsigned long long)arg1;
- (void)setEtaResponse:(id)arg1;
- (void)setEtaRoute:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteIncidents:(id)arg1;
- (void)updateWithETARoute:(id)arg1 offsetInMeters:(double)arg2;

// MNActiveRouteInfo (Temp)

- (void)setRouteID:(id)arg1;

@end
