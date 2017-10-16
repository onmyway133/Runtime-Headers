/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MKLocationShifter : NSObject {
    GEOLocationShifter * _locationShifter;
}

@property (getter=isLocationShiftEnabled, nonatomic, readonly) BOOL locationShiftEnabled;

+ (BOOL)isLocationShiftRequiredForLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(id)arg2 withShiftRequestBlock:(id)arg3;
- (id)init;
- (BOOL)isLocationShiftEnabled;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(id)arg2;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(id)arg2 callbackQueue:(id)arg3;

@end
