/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKPerformanceTest : NSObject {
    int  _loopCounter;
    VKMapView * _mapView;
    NSString * _outputHeader;
    int  _resultCount;
    struct VKPerformanceTestResult_struct { char *x1; float x2[5]; } * _results;
    BOOL  _running;
}

+ (void)runWithMapView:(id)arg1 outputHeader:(id)arg2;

- (void)abort;
- (void)dealloc;
- (id)initWithMapView:(id)arg1 outputHeader:(id)arg2;
- (void)loop;
- (void)printResults;
- (void)runTest:(int)arg1 step:(int)arg2;
- (void)tick:(int)arg1;

@end
