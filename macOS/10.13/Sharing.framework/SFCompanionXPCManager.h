/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFCompanionXPCManager : NSObject {
    NSXPCConnection * _connection;
    BOOL  _interrupted;
    BOOL  _invalid;
    int  _listenerResumedToken;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _xpcSetupQueue;
}

@property (atomic, readwrite, retain) NSXPCConnection *connection;
@property (atomic, readwrite) BOOL interrupted;
@property (getter=isInvalid, atomic, readwrite) BOOL invalid;
@property (atomic, readwrite) int listenerResumedToken;
@property (atomic, readwrite, retain) NSMutableArray *observers;
@property (atomic, readwrite, retain) NSObject<OS_dispatch_queue> *xpcSetupQueue;

+ (id)advertiserClientInterface;
+ (id)advertiserInterface;
+ (id)hotspotClientInterface;
+ (id)hotspotInterface;
+ (void)initialize;
+ (id)scannerClientInterface;
+ (id)scannerInterface;
+ (id)serviceManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)sharedManager;
+ (id)unlockInterface;
+ (id)xpcManagerInterface;

- (void).cxx_destruct;
- (void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(id)arg2;
- (void)appleAccountSignedIn;
- (void)appleAccountSignedOut;
- (id)connection;
- (void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)interrupted;
- (BOOL)isInvalid;
- (int)listenerResumedToken;
- (void)notifyOfInterruption;
- (void)notifyOfInvalidation;
- (void)notifyOfResume;
- (id)observers;
- (void)registerObserver:(id)arg1;
- (void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(id)arg2;
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(id)arg3;
- (void)setConnection:(id)arg1;
- (void)setInterrupted:(BOOL)arg1;
- (void)setInvalid:(BOOL)arg1;
- (void)setListenerResumedToken:(int)arg1;
- (void)setObservers:(id)arg1;
- (void)setXpcSetupQueue:(id)arg1;
- (void)setupConnection;
- (void)streamsForMessage:(id)arg1 withCompletionHandler:(id)arg2;
- (void)unlockManagerWithCompletionHandler:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)xpcSetupQueue;

@end
