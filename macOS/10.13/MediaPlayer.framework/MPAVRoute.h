/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPAVRoute : NSObject {
    NSArray * _auxiliaryDevices;
    NSDictionary * _avRouteDescription;
    BOOL  _b238Route;
    MPAVBatteryLevel * _batteryLevel;
    BOOL  _canAccessRemoteAssets;
    BOOL  _carplayRoute;
    MPAVRouteConnection * _connection;
    long long  _displayRouteType;
    void * _externalDevice;
    long long  _pickableRouteType;
    BOOL  _picked;
    BOOL  _pickedOnPairedDevice;
    BOOL  _playingOnPairedDevice;
    NSString * _productIdentifier;
    BOOL  _requiresPassword;
    NSString * _routeName;
    long long  _routeSubtype;
    long long  _routeType;
    NSString * _routeUID;
    MPAVRoute * _wirelessDisplayRoute;
}

@property (getter=isAirpodsRoute, nonatomic, readonly) BOOL airpodsRoute;
@property (getter=isAppleTVRoute, nonatomic, readonly) BOOL appleTVRoute;
@property (nonatomic, readonly) NSArray *auxiliaryDevices;
@property (nonatomic, readonly) NSDictionary *avRouteDescription;
@property (getter=isB238Route, nonatomic, readonly) BOOL b238Route;
@property (nonatomic, readonly) MPAVBatteryLevel *batteryLevel;
@property (getter=isBeatsSoloRoute, nonatomic, readonly) BOOL beatsSoloRoute;
@property (getter=isBeatsStudioRoute, nonatomic, readonly) BOOL beatsStudioRoute;
@property (getter=isBeatsXRoute, nonatomic, readonly) BOOL beatsXRoute;
@property (nonatomic, readonly) BOOL canAccessRemoteAssets;
@property (getter=isCarplayRoute, nonatomic, readonly) BOOL carplayRoute;
@property (nonatomic, readonly) MPAVRouteConnection *connection;
@property (nonatomic, readonly) BOOL displayIsPicked;
@property (nonatomic, readwrite) long long displayRouteType;
@property (getter=_externalDevice, nonatomic, readonly) void*externalDevice;
@property (nonatomic, readonly) BOOL isDeviceRoute;
@property (nonatomic, readonly) long long passwordType;
@property (nonatomic, readonly) long long pickableRouteType;
@property (getter=isPicked, nonatomic, readwrite) BOOL picked;
@property (getter=isPickedOnPairedDevice, nonatomic, readonly) BOOL pickedOnPairedDevice;
@property (getter=isPlayingOnPairedDevice, nonatomic, readonly) BOOL playingOnPairedDevice;
@property (getter=isPowerbeatsRoute, nonatomic, readonly) BOOL powerbeatsRoute;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (nonatomic, readonly) BOOL requiresPassword;
@property (nonatomic, readwrite, copy) NSString *routeName;
@property (nonatomic, readonly) long long routeSubtype;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) NSString *routeUID;
@property (nonatomic, readonly) BOOL supportsWirelessDisplay;
@property (nonatomic, readwrite, retain) MPAVRoute *wirelessDisplayRoute;

- (void).cxx_destruct;
- (void*)_externalDevice;
- (id)auxiliaryDevices;
- (id)avRouteDescription;
- (id)batteryLevel;
- (BOOL)canAccessRemoteAssets;
- (id)connection;
- (id)debugDescription;
- (id)description;
- (BOOL)displayIsPicked;
- (long long)displayRouteType;
- (unsigned long long)hash;
- (BOOL)isAirpodsRoute;
- (BOOL)isAppleTVRoute;
- (BOOL)isB238Route;
- (BOOL)isBeatsSoloRoute;
- (BOOL)isBeatsStudioRoute;
- (BOOL)isBeatsXRoute;
- (BOOL)isCarplayRoute;
- (BOOL)isDeviceRoute;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPicked;
- (BOOL)isPickedOnPairedDevice;
- (BOOL)isPlayingOnPairedDevice;
- (BOOL)isPowerbeatsRoute;
- (long long)passwordType;
- (long long)pickableRouteType;
- (id)productIdentifier;
- (BOOL)requiresPassword;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setAVRouteDescription:(id)arg1;
- (void)setDisplayRouteType:(long long)arg1;
- (void)setPicked:(BOOL)arg1;
- (void)setRouteName:(id)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (BOOL)supportsWirelessDisplay;
- (id)wirelessDisplayRoute;

@end
