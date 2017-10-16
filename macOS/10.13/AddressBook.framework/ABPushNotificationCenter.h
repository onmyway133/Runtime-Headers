/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPushNotificationCenter : NSObject <APSConnectionDelegate> {
    NSMutableSet * _developmentSources;
    NSMutableSet * _enabledDevelopmentTopics;
    NSMutableSet * _enabledProductionTopics;
    NSMutableSet * _productionSources;
    APSConnection * _pushServiceConnection;
    APSConnection * _pushServiceConnectionDev;
    NSObject<OS_dispatch_queue> * _pushWorkQueue;
    NSMutableDictionary * _sourcesByPushKey;
    NSMutableDictionary * _subscriptionURLBySourceIdentifier;
    BOOL  _unitTestOverride;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) BOOL unitTestOverride;

+ (id)sharedPushNotificationCenter;

- (void)configurePushConnectionForTransports:(id)arg1 source:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)connectionForPushTransports:(id)arg1;
- (void)consumeOutstandingPushes;
- (void)dealloc;
- (id)init;
- (id)pushConnection;
- (id)pushConnectionDev;
- (void)refreshAllPushSubscriptionsForConnection:(id)arg1;
- (void)registerSource:(id)arg1 withPushTransports:(id)arg2 forPushKey:(id)arg3;
- (void)runWithLock:(id)arg1;
- (void)sendSubscriptionRequestForKey:(id)arg1 source:(id)arg2 usingToken:(id)arg3;
- (void)setPushConnectionDev:(id)arg1;
- (void)setUnitTestOverride:(BOOL)arg1;
- (BOOL)shouldHandleIncomingMessages;
- (BOOL)shouldUpdatePushConfiguration;
- (id)sourcesForPushKey:(id)arg1;
- (id)stringFromTokenData:(id)arg1;
- (BOOL)unitTestOverride;
- (void)unregisterSource:(id)arg1;

@end
