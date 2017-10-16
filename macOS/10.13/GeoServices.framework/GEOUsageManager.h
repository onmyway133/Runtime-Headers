/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOUsageManager : NSObject

+ (void)registerConnectedCarInfo:(id)arg1;
+ (id)sharedManager;

- (void)_captureNetworUsageLogMessageForProtobufSessionTask:(id)arg1 service:(int)arg2 requestType:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestAppId:(id)arg6 fromLogFrameworkAdaptor:(BOOL)arg7;
- (void)_captureNetworUsageLogMessageForService:(int)arg1 requestType:(int)arg2 httpResponseStatusCode:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestDataSize:(int)arg6 responseDataSize:(int)arg7 responseTime:(int)arg8 requestAppId:(id)arg9 remoteAddressAndPort:(id)arg10 fromLogFrameworkAdaptor:(BOOL)arg11;
- (BOOL)_isDiagnosticSubmissionEnabled;
- (void)captureCacheHitLogMessageForLocationShiftWithHitCount:(unsigned int)arg1 cacheMissCount:(unsigned int)arg2;
- (void)captureCacheHitLogMessageForTilesWithTileStyle:(int)arg1 cacheHitCount:(unsigned int)arg2 cacheMissCount:(unsigned int)arg3;
- (void)captureDirectionsFeedbackLogMessage:(id)arg1 durationsInNavigationModes:(id)arg2;
- (void)captureFailedMsgMetricFromLogFrameworkAdaptor:(BOOL)arg1;
- (void)captureMapsResultsDisplayedFeedbackForQueryString:(id)arg1 resultsArray:(id)arg2;
- (void)captureNetworkMetricWithState:(int)arg1 fromLogFrameworkAdaptor:(BOOL)arg2 logCollectionRequest:(id)arg3;
- (void)captureNetworkUsageForProtobufSessionTask:(id)arg1 service:(int)arg2 fromLogFrameworkAdaptor:(BOOL)arg3;
- (void)captureNetworkUsageForProtobufSessionTask:(id)arg1 service:(int)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 fromLogFrameworkAdaptor:(BOOL)arg5;
- (void)captureNetworkUsageForProtobufSessionTask:(id)arg1 service:(int)arg2 requestType:(int)arg3 requestAppId:(id)arg4;
- (void)captureNetworkUsageForRequestToService:(int)arg1 httpResponseStatusCode:(unsigned long long)arg2 requestError:(id)arg3 responseSize:(unsigned long long)arg4 responseTime:(unsigned long long)arg5 remoteAddressAndPort:(id)arg6;
- (void)captureNetworkUsageForRequestToService:(int)arg1 httpResponseStatusCode:(unsigned long long)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 responseSize:(unsigned long long)arg5 responseTime:(unsigned long long)arg6 remoteAddressAndPort:(id)arg7;
- (void)captureNetworkUsageForTile:(id)arg1 traits:(id)arg2;
- (void)capturePurgeMetricWithState:(int)arg1 purgeReason:(int)arg2 fromLogFrameworkAdaptor:(BOOL)arg3;
- (void)captureRequestsForPlaceDataCache:(id)arg1 appIdentifier:(id)arg2;
- (void)captureStateTransition:(id)arg1 force:(BOOL)arg2;
- (void)captureTileStateForGridCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3;
- (void)captureTileStateForLoadCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3;
- (void)captureTimeToLeaveHypothesisWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
- (void)captureTimeToLeaveInitialTravelTime:(double)arg1;
- (void)captureTransitAppLaunchSource:(struct { double x1; double x2; })arg1 destination:(struct { double x1; double x2; })arg2 bundleIdentifier:(id)arg3;
- (void)clearStateTimingData;
- (id)init;
- (id)sharedLogManagerInstance;
- (id)sharedLogMsgEventFactoryInstance;
- (id)sharedLogMsgStateFactoryInstance;
- (id)sharedLoggerInstance;
- (BOOL)shouldIgnoreUsageForCountry;

// GEOUsageManager (LogMsgEvent)

- (void)captureCacheHitEventForLocationShiftWithHitCount:(unsigned int)arg1 cacheMissCount:(unsigned int)arg2;
- (void)captureCacheHitEventForTileCacheType:(int)arg1 cacheHitCount:(unsigned int)arg2 cacheMissCount:(unsigned int)arg3;
- (void)captureClientACSuggestionsEventWith:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3 selectedIndex:(int)arg4;
- (void)captureCommuteDoomWindow:(id)arg1 exitTime:(id)arg2 destinations:(id)arg3 reason:(long long)arg4 networkRequests:(unsigned long long)arg5 alerts:(unsigned long long)arg6;
- (void)captureDirectionsEventForDirectionsFeedbacks:(id)arg1 finalLocation:(id)arg2 arrivedAtDestination:(BOOL)arg3 navigationAudioFeedback:(struct GEONavigationAudioFeedback { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })arg4 durationOfTrip:(double)arg5 durationsInNavigationMode:(id)arg6;
- (void)captureFullNavTraceEventWithData:(id)arg1;
- (void)captureGenericAppErrorDomain:(id)arg1 appErrorCode:(long long)arg2;
- (void)captureListInteractionSessionEventWithListType:(int)arg1 listResultItems:(id)arg2 searchString:(id)arg3;
- (void)captureLogFrameworkEventForMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logCollectionRequest:(id)arg4;
- (void)captureLogFrameworkEventForMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logMessageType:(int)arg4;
- (void)captureMapLaunchEventWithLaunchUrl:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(BOOL)arg3 ttlEventTime:(id)arg4;
- (void)captureMapsWidgetsInteractionForType:(int)arg1 endState:(int)arg2 widgetSpecificObject:(id)arg3 wasLocked:(BOOL)arg4 startDate:(id)arg5 forDuration:(double)arg6;
- (void)captureNetworkEventForLoadingTileWithUsageInfo:(id)arg1 traits:(id)arg2;
- (void)captureNetworkEventForProtobufSessionTask:(id)arg1 networkService:(int)arg2 requestType:(int)arg3 requestAppId:(id)arg4 fromLogFrameworkAdaptor:(BOOL)arg5;
- (void)captureNetworkEventForProtobufSessionTask:(id)arg1 networkService:(int)arg2 requestType:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestAppId:(id)arg6 fromLogFrameworkAdaptor:(BOOL)arg7;
- (void)captureNetworkEventForService:(int)arg1 requestType:(int)arg2 httpResponseStatusCode:(int)arg3 requestErrorDomain:(id)arg4 requestErrorCode:(long long)arg5 requestDataSize:(int)arg6 responseDataSize:(int)arg7 responseTime:(int)arg8 requestAppId:(id)arg9 remoteAddressAndPort:(id)arg10 fromLogFrameworkAdaptor:(BOOL)arg11;
- (void)capturePlaceCardUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 placeCardType:(int)arg6 categoriesDisplayed:(id)arg7 categorySelected:(id)arg8;
- (void)capturePlaceCardUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 placeCardType:(int)arg12 localizedMapItemCategory:(id)arg13 availableActions:(id)arg14 unactionableUIElements:(id)arg15;
- (void)capturePlaceCardUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 placeCardType:(int)arg12 localizedMapItemCategory:(id)arg13 availableActions:(id)arg14 unactionableUIElements:(id)arg15 categoriesDisplayed:(id)arg16 categorySelected:(id)arg17;
- (void)capturePlaceDataCacheEventForPlaceRequest:(id)arg1 requestingAppId:(id)arg2;
- (void)captureProactiveSuggestionInteractionForType:(int)arg1 items:(id)arg2 interactedWithItemIndex:(int)arg3 forDuration:(double)arg4;
- (void)captureRefineSearchSessionEventWithSearchType:(int)arg1 refineSearchType:(int)arg2 suggestionItems:(id)arg3 searchString:(id)arg4;
- (void)captureStaleResourcesEventForResources:(id)arg1;
- (void)captureStateTransitionEventWithStates:(id)arg1 generateOnlyIfStateChanged:(BOOL)arg2;
- (void)captureTelemetricEntityCountForEventKey:(int)arg1 eventDetail:(id)arg2;
- (void)captureTelemetricEntityForEventKey:(int)arg1 eventValue:(unsigned long long)arg2 eventDetail:(id)arg3;
- (void)captureTileSetStateEventForType:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4;
- (void)captureTimeToLeaveIntialTravelTimeEventWithTravelTime:(double)arg1;
- (void)captureTransitAppLaunchEventForBundleId:(id)arg1 sourceLocation:(id)arg2 destinationLocation:(id)arg3;
- (void)captureTransitPlaceCardUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 transitCardCategory:(int)arg10 transitSystem:(id)arg11 transitDepartureSequence:(id)arg12 transitIncident:(id)arg13;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 categoriesDisplayed:(id)arg4 categorySelected:(id)arg5;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 categoriesMetadataDisplayed:(id)arg4 categoryMetadataSelected:(id)arg5;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapRegion:(id)arg4 zoomLevel:(double)arg5 mapType:(int)arg6;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapsServerMetadata:(id)arg4;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4 mapRegion:(id)arg5 zoomLevel:(double)arg6 mapType:(int)arg7;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 resultsArray:(id)arg4;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 routeDetails:(id)arg4;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 selectedReportAnIssueIndex:(unsigned int)arg4;
- (void)capturerTimeToLeaveHypothesisEventWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
- (id)logContextByAddingMapRestoreStateWithUITargets:(id)arg1 toLogContext:(id)arg2;
- (id)logContextByAddingMapViewLocationStateWithLocationBucket:(int)arg1 currentLocationInViewport:(BOOL)arg2 toLogContext:(id)arg3;
- (id)logContextByAddingMapViewStateWithMapRegion:(id)arg1 zoomLevel:(double)arg2 mapType:(int)arg3 toLogContext:(id)arg4;
- (id)logContextByAddingMapsSettingsStateWithPreferredTransportMode:(int)arg1 avoidTolls:(BOOL)arg2 avoidHighways:(BOOL)arg3 navVoiceVolume:(int)arg4 pauseSpokenAudioEnabled:(BOOL)arg5 findMyCarEnabled:(BOOL)arg6 trafficEnabled:(BOOL)arg7 labelEnabled:(BOOL)arg8 toLogContext:(id)arg9;
- (id)logContextByAddingNavigationStateWithLineType:(int)arg1 navState:(int)arg2 distanceToDestination:(double)arg3 upcomingManeuverType:(int)arg4 distanceToManeuver:(int)arg5 isGroupedManeuver:(BOOL)arg6 speedBucket:(int)arg7 toLogContext:(id)arg8;
- (id)logContextByAddingPlaceCardStateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 toLogContext:(id)arg4;
- (id)logContextByAddingPlaceCardStateWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 toLogContext:(id)arg4;
- (id)logContextByAddingPlaceCardStateWithPlaceActionDetails:(id)arg1 placeCardType:(int)arg2 mapItemCategory:(id)arg3 availableActions:(id)arg4 unactionableUIElements:(id)arg5 toLogContext:(id)arg6;
- (id)logContextByAddingSuggestionsStateWithSearchFieldType:(int)arg1 searchString:(id)arg2 displayedResults:(id)arg3 selectedIndex:(int)arg4 acSequenceNumber:(int)arg5 toLogContext:(id)arg6;
- (void)registerTouristInfo:(BOOL)arg1;

@end
