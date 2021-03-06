/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
 */

@interface CWANQPWANMetrics : CWANQPElement <NSCopying, NSSecureCoding> {
    long long  _downlinkLoad;
    long long  _downlinkSpeed;
    BOOL  _hasSymmetricLink;
    BOOL  _isAtCapacity;
    long long  _linkStatus;
    long long  _loadMeasurementDuration;
    long long  _uplinkLoad;
    long long  _uplinkSpeed;
}

@property (nonatomic, readwrite) long long downlinkLoad;
@property (nonatomic, readwrite) long long downlinkSpeed;
@property (nonatomic, readwrite) BOOL hasSymmetricLink;
@property (nonatomic, readwrite) BOOL isAtCapacity;
@property (nonatomic, readwrite) long long linkStatus;
@property (nonatomic, readwrite) long long loadMeasurementDuration;
@property (nonatomic, readwrite) long long uplinkLoad;
@property (nonatomic, readwrite) long long uplinkSpeed;

+ (id)stringForWANMetricsLinkStatus:(long long)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)downlinkLoad;
- (long long)downlinkSpeed;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasSymmetricLink;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3;
- (BOOL)isAtCapacity;
- (long long)linkStatus;
- (long long)loadMeasurementDuration;
- (void)setDownlinkLoad:(long long)arg1;
- (void)setDownlinkSpeed:(long long)arg1;
- (void)setHasSymmetricLink:(BOOL)arg1;
- (void)setIsAtCapacity:(BOOL)arg1;
- (void)setLinkStatus:(long long)arg1;
- (void)setLoadMeasurementDuration:(long long)arg1;
- (void)setUplinkLoad:(long long)arg1;
- (void)setUplinkSpeed:(long long)arg1;
- (long long)uplinkLoad;
- (long long)uplinkSpeed;

@end
