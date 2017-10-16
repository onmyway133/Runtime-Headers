/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgStateFactory : NSObject {
    NSString * _carrierOperatorName;
    BOOL  _cellularDataUsageAllowedForMaps;
    NSObject<OS_dispatch_queue> * _coreTelephonyIsolationQueue;
    BOOL  _hasCellularDataUsageAllowedForMaps;
    unsigned long long  _numberOfExplicitSubscriptions;
    NSObject<OS_dispatch_queue> * _subscriptionIsolation;
}

@property (nonatomic, readonly) NSString *carrierOperatorName;
@property (getter=isCellularDataUsageAllowedForDevice, nonatomic, readonly) BOOL cellularDataUsageAllowedForDevice;
@property (getter=isCellularDataUsageAllowedForMaps, nonatomic, readonly) BOOL cellularDataUsageAllowedForMaps;

+ (BOOL)deviceHasRadio;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_connectToCoreTelephonyServer;
- (void)_retrieveCarrierOperatorName;
- (void)_retrieveCellularDataUsagePolicyForMaps;
- (void)_updateCarrierOperatorName;
- (void)_updateCellularDataAllowedForMapsSetting;
- (id)carrierOperatorName;
- (int)cellularDataState;
- (void)dealloc;
- (id)init;
- (BOOL)isCellularDataUsageAllowedForDevice;
- (BOOL)isCellularDataUsageAllowedForMaps;
- (id)logMsgStateForCarPlayWithIsConnected:(BOOL)arg1 carInfo:(id)arg2;
- (id)logMsgStateForCarPlayWithStateOrigin:(id)arg1 isConnected:(BOOL)arg2 carInfo:(id)arg3;
- (id)logMsgStateForExtensionWithTableBookingAppsInstalled:(BOOL)arg1 hasAppsEnabled:(BOOL)arg2;
- (id)logMsgStateForMapRestoreWithStateOrigin:(id)arg1 targetLayouts:(id)arg2;
- (id)logMsgStateForMapRestoreWithTargetLayouts:(id)arg1;
- (id)logMsgStateForMapRestoreWithUITargets:(id)arg1;
- (id)logMsgStateForMapSettingsWithPrefferedTransportMode:(int)arg1 avoidTolls:(BOOL)arg2 avoidHighways:(BOOL)arg3 headingEnabled:(BOOL)arg4 speedLimitEnabled:(BOOL)arg5 navVoiceVolume:(int)arg6 pauseSpokenAudioEnabled:(BOOL)arg7 findMyCarEnabled:(BOOL)arg8 trafficEnabled:(BOOL)arg9 labelEnabled:(BOOL)arg10;
- (id)logMsgStateForMapSettingsWithStateOrigin:(id)arg1 prefferedTransportMode:(int)arg2 avoidTolls:(BOOL)arg3 avoidHighways:(BOOL)arg4 headingEnabled:(BOOL)arg5 speedLimitEnabled:(BOOL)arg6 navVoiceVolume:(int)arg7 pauseSpokenAudioEnabled:(BOOL)arg8 findMyCarEnabled:(BOOL)arg9 trafficEnabled:(BOOL)arg10 labelEnabled:(BOOL)arg11;
- (id)logMsgStateForMapViewLocationWithLocationBucket:(int)arg1 currentLocationInViewport:(BOOL)arg2;
- (id)logMsgStateForMapViewLocationWithStateOrigin:(id)arg1 locationBucket:(int)arg2 currentLocationInViewport:(BOOL)arg3;
- (id)logMsgStateForMapViewLocationWithTouristInfo:(BOOL)arg1;
- (id)logMsgStateForMapViewWithMapRegion:(id)arg1 zoomLevel:(double)arg2 mapType:(int)arg3;
- (id)logMsgStateForMapViewWithStateOrigin:(id)arg1 mapRegion:(id)arg2 zoomLevel:(double)arg3 mapType:(int)arg4;
- (id)logMsgStateForMapsServerWithMapsResultsDisplayed:(id)arg1;
- (id)logMsgStateForMapsServerWithSearchCategoriesDisplayed:(id)arg1 selectedSearchCategory:(id)arg2;
- (id)logMsgStateForMapsServerWithSearchCategoriesDisplayedAsNSData:(id)arg1 selectedSearchCategory:(id)arg2;
- (id)logMsgStateForMapsServerWithServerMetadata:(id)arg1;
- (id)logMsgStateForMapsServerWithStateOrigin:(id)arg1 serverMetadata:(id)arg2;
- (id)logMsgStateForMapsUIShownWithIsAirQualityShown:(BOOL)arg1;
- (id)logMsgStateForMapsUIShownWithStateOrigin:(id)arg1 isAirQualityShown:(BOOL)arg2;
- (id)logMsgStateForMapsUIWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2;
- (id)logMsgStateForMapsUIWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2 numberOfTabs:(unsigned int)arg3 currentTabIndex:(unsigned int)arg4;
- (id)logMsgStateForMapsUIWithStateOrigin:(id)arg1 layoutInfo:(int)arg2 layoutStyle:(int)arg3;
- (id)logMsgStateForMapsUIWithStateOrigin:(id)arg1 layoutInfo:(int)arg2 layoutStyle:(int)arg3 numberOfTabs:(unsigned int)arg4 currentTabIndex:(unsigned int)arg5;
- (id)logMsgStateForNavigationWithLineType:(int)arg1 navState:(int)arg2 distanceToDestination:(double)arg3 navCameraState:(id)arg4;
- (id)logMsgStateForNavigationWithLineType:(int)arg1 navState:(int)arg2 distanceToDestination:(double)arg3 upcomingManeuverType:(int)arg4 distanceToManeuver:(int)arg5 isGroupedManeuver:(BOOL)arg6 speedBucket:(int)arg7;
- (id)logMsgStateForPairedDeviceWithIsConnected:(BOOL)arg1 deviceType:(int)arg2 deviceOSVersion:(id)arg3 deviceHardwareId:(id)arg4;
- (id)logMsgStateForPairedDeviceWithStateOrigin:(id)arg1 isConnected:(BOOL)arg2 deviceType:(int)arg3 deviceOSVersion:(id)arg4 deviceHardwareId:(id)arg5;
- (id)logMsgStateForPlaceCardWithPlaceActionDetails:(id)arg1 placeCardType:(int)arg2 mapItemCategory:(id)arg3 availableActions:(id)arg4 unactionableUIElements:(id)arg5;
- (id)logMsgStateForPlaceCardWithStateOrigin:(id)arg1 placeActionDetails:(id)arg2 placeCardType:(int)arg3 mapItemCategory:(id)arg4 actionableActions:(id)arg5 unactionableUIElements:(id)arg6;
- (id)logMsgStateForPlaceRequestWithRequestType:(int)arg1 request:(id)arg2;
- (id)logMsgStateForPlaceRequestWithStateOrigin:(id)arg1 requestType:(int)arg2 request:(id)arg3;
- (id)logMsgStateForRealtimeTrafficProbeCollectionWithTripId:(id)arg1 probeCount:(unsigned long long)arg2 recvTime:(id)arg3;
- (id)logMsgStateForReportAnIssueWithSelectedIndex:(unsigned int)arg1;
- (id)logMsgStateForRidesharingWithNumberOfAppsInstalled:(unsigned long long)arg1 enabled:(unsigned long long)arg2;
- (id)logMsgStateForRouteWithRouteDetails:(id)arg1;
- (id)logMsgStateForRouteWithStateOrigin:(id)arg1 routeDetails:(id)arg2;
- (id)logMsgStateForSuggestionsWithSearchFieldType:(int)arg1 searchString:(id)arg2 displayedResults:(id)arg3 selectedIndex:(int)arg4 acSequenceNumber:(int)arg5;
- (id)logMsgStateForTileSetWithStateOrigin:(id)arg1 tileSetInfo:(id)arg2;
- (id)logMsgStateForTileSetWithStateOrigin:(id)arg1 tileSetInfoArray:(id)arg2;
- (id)logMsgStateForTileSetWithTileSetInfo:(id)arg1;
- (id)logMsgStateForTileSetWithTileSetInfoArray:(id)arg1;
- (id)logMsgStateForTransitWithStateOrigin:(id)arg1 transitNotAvailableAdvisoryShowing:(BOOL)arg2;
- (id)logMsgStateForTransitWithTransitNotAvailableAdvisoryShowing:(BOOL)arg1;
- (id)logMsgStateForUserSessionWithSessionType:(unsigned long long)arg1 isNavSessionAllowed:(BOOL)arg2 userSessionSnapshot:(id)arg3;

@end
