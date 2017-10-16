/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNTraceVehicleSpeedRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    double  _timestamp;
    double  _vehicleSpeed;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) double position;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) double timestamp;
@property (nonatomic, readwrite) double vehicleSpeed;

- (void)setTimestamp:(double)arg1;
- (void)setVehicleSpeed:(double)arg1;
- (double)timestamp;
- (double)vehicleSpeed;

// MNTraceVehicleSpeedRow (MNTracePlayerAdapter)

- (double)position;

@end
