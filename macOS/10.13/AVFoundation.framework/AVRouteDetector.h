/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal * _routeDetectorInternal;
}

@property (atomic, readonly) BOOL multipleRoutesDetected;
@property (getter=isRouteDetectionEnabled, atomic, readwrite) BOOL routeDetectionEnabled;

+ (void)initialize;

- (void)_updateMultipleRoutesDetected;
- (void)dealloc;
- (id)init;
- (BOOL)isRouteDetectionEnabled;
- (BOOL)multipleRoutesDetected;
- (void)setRouteDetectionEnabled:(BOOL)arg1;

@end
