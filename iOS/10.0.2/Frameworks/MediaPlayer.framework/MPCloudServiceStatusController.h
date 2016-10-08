/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudServiceStatusController : NSObject <ISURLBagObserver, SSVPlaybackLeaseDelegate> {
    unsigned long long  _URLBagObservationCount;
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _accountStoreChangeObservationCount;
    unsigned long long  _automaticLeaseRefreshCount;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    unsigned long long  _cloudLibraryObservationCount;
    NSOperationQueue * _fairPlayOperationQueue;
    SSVFairPlaySubscriptionController * _fairPlaySubscriptionController;
    unsigned long long  _fairPlaySubscriptionStatusObservationCount;
    bool  _hasLoadedMatchStatus;
    bool  _hasLoadedURLBag;
    bool  _hasSubscriptionLease;
    SSVFairPlaySubscriptionStatus * _lastKnownFairPlaySubscriptionStatus;
    SSVSubscriptionStatus * _lastKnownSubscriptionStatus;
    unsigned long long  _matchStatus;
    unsigned long long  _matchStatusObservationCount;
    bool  _observingNetworkReachability;
    SSVPlaybackLease * _playbackLease;
    unsigned long long  _purchaseHistoryObservationCount;
    bool  _shouldPlaybackRequireSubscriptionLease;
    unsigned long long  _shouldPlaybackRequireSubscriptionLeaseObservationCount;
    unsigned long long  _subscriptionAvailabilityObservationCount;
    bool  _subscriptionAvailable;
    unsigned long long  _subscriptionLeaseUsageCount;
    unsigned long long  _subscriptionStatusObservationCount;
}

@property (getter=isCloudLibraryEnabled, nonatomic, readonly) bool cloudLibraryEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SSVFairPlaySubscriptionStatus *lastKnownFairPlaySubscriptionStatus;
@property (nonatomic, readonly) unsigned long long matchStatus;
@property (getter=isPurchaseHistoryEnabled, nonatomic, readonly) bool purchaseHistoryEnabled;
@property (nonatomic, readonly) bool shouldPlaybackRequireSubscriptionLease;
@property (getter=isSubscriptionAvailable, nonatomic, readonly) bool subscriptionAvailable;
@property (nonatomic, readonly, copy) SSVSubscriptionStatus *subscriptionStatus;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_accountStoreChangedNotification:(id)arg1;
- (id)_activeAccount;
- (void)_beginObservingAccountStoreDidChange;
- (void)_beginObservingURLBag;
- (void)_beginUsingSubscriptionLeaseWithCompletionHandler:(id /* block */)arg1;
- (bool)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(bool*)arg1;
- (void)_cloudClientAuthenticationDidChange;
- (bool)_currentCloudLibraryEnabled;
- (bool)_currentPurchaseHistoryEnabled;
- (void)_endObservingAccountStoreDidChange;
- (void)_endObservingURLBag;
- (void)_endUsingSubscriptionLease;
- (id)_fairPlaySubscriptionController;
- (void)_fairPlaySubscriptionControllerSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_getCurrentFairPlaySubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (void)_networkReachabilityDidChangeNotification:(id)arg1;
- (void)_setHasSubscriptionLease:(bool)arg1 endReasonType:(unsigned long long)arg2;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updateForNetworkReachabilityObserversCountChange;
- (void)_updateMatchStatus;
- (void)_updateWithURLBagDictionary:(id)arg1;
- (void)acquireSubscriptionLeaseWithCompletionHandler:(id /* block */)arg1;
- (void)bagDidChange:(id)arg1;
- (void)beginAutomaticallyRefreshingSubscriptionLease;
- (void)beginObservingCloudLibraryEnabled;
- (void)beginObservingFairPlaySubscriptionStatus;
- (void)beginObservingMatchStatus;
- (void)beginObservingPurchaseHistoryEnabled;
- (void)beginObservingShouldPlaybackRequireSubscriptionLease;
- (void)beginObservingSubscriptionAvailability;
- (void)beginObservingSubscriptionLease;
- (void)beginObservingSubscriptionStatus;
- (void)dealloc;
- (void)endAutomaticallyRefreshingSubscriptionLease;
- (void)endObservingCloudLibraryEnabled;
- (void)endObservingFairPlaySubscriptionStatus;
- (void)endObservingMatchStatus;
- (void)endObservingPurchaseHistoryEnabled;
- (void)endObservingShouldPlaybackRequireSubscriptionLease;
- (void)endObservingSubscriptionAvailability;
- (void)endObservingSubscriptionLease;
- (void)endObservingSubscriptionStatus;
- (void)endSubscriptionLease;
- (void)getFairPlaySubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (void)getSubscriptionAssetWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSubscriptionStatusWithOptions:(id)arg1 statusBlock:(id /* block */)arg2;
- (id)init;
- (bool)isCloudLibraryEnabled;
- (bool)isPurchaseHistoryEnabled;
- (bool)isSubscriptionAvailable;
- (id)lastKnownFairPlaySubscriptionStatus;
- (unsigned long long)matchStatus;
- (void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3;
- (void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned long long)arg2;
- (void)preheatSubscriptionLeaseRequestsWithCompletionHandler:(id /* block */)arg1;
- (void)refreshSubscriptionLeaseWithCompletionHandler:(id /* block */)arg1;
- (bool)shouldPlaybackRequireSubscriptionLease;
- (id)subscriptionStatus;

@end
