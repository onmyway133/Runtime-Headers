/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiWakeOnWireless : NSObject {
    long long  beaconLossTime;
    BOOL  isEnabled;
    NSMutableArray * wakePatterns;
    BOOL  willWakeOnBeaconLoss;
    BOOL  willWakeOnDeauthenticated;
    BOOL  willWakeOnDisassociated;
    BOOL  willWakeOnMagicPattern;
    BOOL  willWakeOnNetPattern;
    BOOL  willWakeOnRetrogradeTsf;
}

@property (nonatomic, readwrite) long long beaconLossTime;
@property (nonatomic, readwrite) BOOL isEnabled;
@property (nonatomic, readwrite, retain) NSMutableArray *wakePatterns;
@property (nonatomic, readwrite) BOOL willWakeOnBeaconLoss;
@property (nonatomic, readwrite) BOOL willWakeOnDeauthenticated;
@property (nonatomic, readwrite) BOOL willWakeOnDisassociated;
@property (nonatomic, readwrite) BOOL willWakeOnMagicPattern;
@property (nonatomic, readwrite) BOOL willWakeOnNetPattern;
@property (nonatomic, readwrite) BOOL willWakeOnRetrogradeTsf;

- (long long)beaconLossTime;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithSkeleton:(id)arg1;
- (BOOL)isEnabled;
- (void)setBeaconLossTime:(long long)arg1;
- (void)setIsEnabled:(BOOL)arg1;
- (void)setWakePatterns:(id)arg1;
- (void)setWillWakeOnBeaconLoss:(BOOL)arg1;
- (void)setWillWakeOnDeauthenticated:(BOOL)arg1;
- (void)setWillWakeOnDisassociated:(BOOL)arg1;
- (void)setWillWakeOnMagicPattern:(BOOL)arg1;
- (void)setWillWakeOnNetPattern:(BOOL)arg1;
- (void)setWillWakeOnRetrogradeTsf:(BOOL)arg1;
- (id)skeleton;
- (id)wakePatterns;
- (BOOL)willWakeOnBeaconLoss;
- (BOOL)willWakeOnDeauthenticated;
- (BOOL)willWakeOnDisassociated;
- (BOOL)willWakeOnMagicPattern;
- (BOOL)willWakeOnNetPattern;
- (BOOL)willWakeOnRetrogradeTsf;

@end
