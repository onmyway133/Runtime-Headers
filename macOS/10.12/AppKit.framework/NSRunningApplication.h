/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSRunningApplication : NSObject {
    unsigned int  _activeSeed;
    struct { 
        unsigned int fetchedDynamic : 1; 
        unsigned int deadToUs : 1; 
        unsigned int terminated : 1; 
        unsigned int finishedLaunching : 1; 
        unsigned int hidden : 1; 
        unsigned int active : 1; 
        unsigned int ownsMenuBar : 1; 
        unsigned int arch : 3; 
        unsigned int activationPolicy : 3; 
        unsigned int reserved1 : 19; 
    }  _aflags;
    id  _appReserved;
    void * _asn;
    NSString * _bundleID;
    NSURL * _bundleURL;
    NSURL * _executableURL;
    void ** _helpers;
    NSImage * _icon;
    unsigned int  _lastSeed;
    NSDate * _launchDate;
    NSString * _localizedName;
    NSLock * _lock;
    id  _obsInfo;
    unsigned long long  _obsMask;
    int  _pid;
    unsigned int  _staleSeed;
    id  _superReserved;
}

@property (atomic, readonly) long long activationPolicy;
@property (getter=isActive, atomic, readonly) BOOL active;
@property (atomic, readonly, copy) NSString *bundleIdentifier;
@property (atomic, readonly, copy) NSURL *bundleURL;
@property (atomic, readonly) long long executableArchitecture;
@property (atomic, readonly, copy) NSURL *executableURL;
@property (getter=isFinishedLaunching, atomic, readonly) BOOL finishedLaunching;
@property (getter=isHidden, atomic, readonly) BOOL hidden;
@property (atomic, readonly) NSImage *icon;
@property (atomic, readonly, copy) NSDate *launchDate;
@property (atomic, readonly, copy) NSString *localizedName;
@property (atomic, readonly) BOOL ownsMenuBar;
@property (atomic, readonly) int processIdentifier;
@property (getter=isTerminated, atomic, readonly) BOOL terminated;

+ (id)_TALTerminatedApplications;
+ (id)_allApplications;
+ (id)_allRunningApplications;
+ (BOOL)_deactivateCurrentAppAndCheckIfFrontReservationIsAvailable;
+ (void)_dumpRunningApplicationObservationInfo;
+ (id)_transformASNArrayToAppArrayWithRelease:(struct __CFArray { }*)arg1;
+ (id)currentApplication;
+ (void)initialize;
+ (id)runningApplicationWithProcessIdentifier:(int)arg1;
+ (id)runningApplicationsWithBundleIdentifier:(id)arg1;
+ (void)terminateAutomaticallyTerminableApplications;

- (void)_applyInformationFromLSDictionary:(id)arg1 includeDynamicProperties:(BOOL)arg2;
- (void)_applyPropertyChanges:(unsigned long long)arg1 fromDictionary:(struct __CFDictionary { }*)arg2;
- (void)_changeObservingNotificationMask:(unsigned long long)arg1 to:(BOOL)arg2;
- (void)_checkForUnecessaryLSNotifications;
- (void)_fetchDynamicProperties;
- (void)_fetchDynamicPropertiesIfNecessary;
- (void)_fetchDynamicPropertiesIfNecessaryOrAppSeedIsOutOfDate;
- (void)_fetchStaticInformationWithAtLeastKey:(struct __CFString { }*)arg1;
- (id)_fetchValueForKey:(void*)arg1;
- (BOOL)_getProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x1; unsigned int x2; }*)arg1;
- (BOOL)_hasASN:(struct __LSASN { }*)arg1;
- (id)_initDeadWithLSDictionary:(struct __CFDictionary { }*)arg1 forASN:(struct __LSASN { }*)arg2;
- (BOOL)_isAppPropertyUpdatedByLSNotifications:(int)arg1;
- (BOOL)_isLSStopped;
- (BOOL)_isProxiedByTalagent;
- (void)_observeChangeInKey:(int)arg1 withDataRef:(void*)arg2;
- (BOOL)_performWithPSN:(id)arg1;
- (void)_postWillOrDidChangeNotificationsForKeyIndex:(int)arg1 isWill:(BOOL)arg2;
- (void)_preserveStaleDynamicPropertiesForRemainderOfRunLoop;
- (BOOL)_preservingStaleProperties;
- (BOOL)_quittingWillBeNoisyOrLoseData;
- (id)_reasonThatQuittingWillBeNoisyOrLoseData;
- (void)_updateActiveAndMenuBarOwnerProperties;
- (void)_updateObservationMask;
- (void)_updateOrStaleProperty:(int)arg1;
- (BOOL)activateWithOptions:(unsigned long long)arg1;
- (long long)activationPolicy;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (struct __LSASN { }*)applicationSerialNumber;
- (BOOL)applyPendingPropertyChanges;
- (id)bundleIdentifier;
- (id)bundleURL;
- (void)dealloc;
- (id)description;
- (long long)executableArchitecture;
- (id)executableURL;
- (BOOL)forceTerminate;
- (unsigned long long)hash;
- (BOOL)hide;
- (id)icon;
- (id)initWithApplicationSerialNumber:(struct __LSASN { }*)arg1;
- (BOOL)isActive;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFinishedLaunching;
- (BOOL)isHidden;
- (BOOL)isTerminated;
- (id)launchDate;
- (id)localizedName;
- (void*)observationInfo;
- (BOOL)ownsMenuBar;
- (int)processIdentifier;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setObservationInfo:(void*)arg1;
- (BOOL)terminate;
- (BOOL)unhide;

// NSRunningApplication (NSWindowRestorationPrivate)

- (id)_URLForDeletingRestorableState;

@end