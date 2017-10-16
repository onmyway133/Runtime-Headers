/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORerouteInfo : NSObject <NSSecureCoding> {
    double  _distanceFromDestination;
    double  _distancePenalty;
    double  _penalty;
    double  _throttledReroutesPenalty;
    NSDate * _time;
}

@property (nonatomic, readwrite) double distanceFromDestination;
@property (nonatomic, readonly) double penalty;
@property (nonatomic, readwrite, retain) NSDate *time;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (double)distanceFromDestination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)penalty;
- (void)setDistanceFromDestination:(double)arg1;
- (void)setTime:(id)arg1;
- (id)time;
- (void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(BOOL)arg3 destinationCoordinate:(struct { double x1; double x2; })arg4 numThrottledReroutes:(unsigned long long)arg5;

@end
