/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNCommuteSession : NSObject <MNCommuteDestinationObserver, MNCommuteDestinationUpdaterDelegate> {
    unsigned long long  _commuteSessionState;
    MNCommuteDestinationUpdater * _comparisonDestinationStartTime;
    unsigned long long  _currentSuggestionID;
    NSTimer * _etaUpdateTimer;
    BOOL  _isMapsActive;
    MNLocation * _lastLocation;
    MNLocationHistory * _locationHistory;
    MNObserverHashTable<MNCommuteSessionObserver> * _observers;
    NSArray * _rankedDestinations;
    id  _rankedDestinationsSync;
    NSTimer * _stateChangeTimer;
    NSMutableDictionary * _suggestions;
    MNSuggestionsManager * _suggestionsManager;
    MNNavigationTraceManager * _traceManager;
}

@property (nonatomic, readwrite) unsigned long long commuteSessionState;
@property (nonatomic, readwrite) MNCommuteDestinationUpdater *comparisonDestinationStartTime;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) BOOL isMapsActive;
@property (nonatomic, readonly) NSArray *rankedDestinations;
@property (atomic, readonly) NSString *suggestionsDescription;
@property (nonatomic, readwrite) MNSuggestionsManager *suggestionsManager;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;

- (void).cxx_destruct;
- (void)_resetRankedDestinations;
- (void)_updateSuggestionsManagerState;
- (void)_updatedDestinations;
- (void)addObserver:(id)arg1;
- (void)addSuggestion:(id)arg1;
- (void)commuteDestination:(id)arg1 didChangeInvalid:(BOOL)arg2;
- (unsigned long long)commuteSessionState;
- (id)comparisonDestinationStartTime;
- (void)dealloc;
- (void)destinationUpdater:(id)arg1 didUpdateDestination:(id)arg2;
- (void)destinationUpdaterDidArrive:(id)arg1;
- (id)init;
- (id)initWithTraceName:(id)arg1 isTraceRecording:(BOOL)arg2;
- (BOOL)isMapsActive;
- (id)rankedDestinations;
- (void)removeObserver:(id)arg1;
- (void)setCommuteSessionState:(unsigned long long)arg1;
- (void)setComparisonDestinationStartTime:(id)arg1;
- (void)setSuggestionsManager:(id)arg1;
- (void)startETAUpdatesWithInterval:(double)arg1;
- (void)stop;
- (void)stopETAUpdates;
- (id)suggestionsDescription;
- (id)suggestionsManager;
- (id)traceManager;
- (void)updateComparisonStartDate;
- (void)updateLocation:(id)arg1;
- (void)updateMapsActive:(BOOL)arg1;

@end
