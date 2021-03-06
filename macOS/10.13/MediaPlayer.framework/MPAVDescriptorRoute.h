/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPAVDescriptorRoute : MPAVRoute {
    NSArray * _auxiliaryDevices;
    MPAVBatteryLevel * _batteryLevel;
}

- (void).cxx_destruct;
- (id)_airPlayExtendedInfo;
- (id)auxiliaryDevices;
- (id)batteryLevel;
- (id)initWithRouteDescriptor:(id)arg1;
- (BOOL)isB238Route;
- (BOOL)isCarplayRoute;
- (BOOL)isPicked;
- (BOOL)isPickedOnPairedDevice;
- (long long)passwordType;
- (long long)pickableRouteType;
- (id)productIdentifier;
- (BOOL)requiresPassword;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;

@end
