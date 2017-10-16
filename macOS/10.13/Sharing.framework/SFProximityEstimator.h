/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFProximityEstimator : NSObject {
    long long  _estimatedRSSI;
    long long  _rssiThreshold;
}

@property (nonatomic, readonly) long long estimatedRSSI;

+ (id)proximityEstimatorWithProximityInfo:(id)arg1;

- (long long)estimatedRSSI;
- (id)initWithProximityInfo:(id)arg1;
- (BOOL)updateWithSFBLEDevice:(id)arg1;

@end
