/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MKWiFiObserver : NSObject {
    struct __SCDynamicStore { } * _airportDynamicStore;
    <_MKWiFiObserverDelegate> * _delegate;
    BOOL  _wifiEnabled;
}

@property (nonatomic, readwrite) <_MKWiFiObserverDelegate> *delegate;
@property (getter=isWifiEnabled, nonatomic, readonly) BOOL wifiEnabled;

- (void).cxx_destruct;
- (void)_updateWiFiState:(BOOL)arg1;
- (id)delegate;
- (id)init;
- (BOOL)isWifiEnabled;
- (void)setDelegate:(id)arg1;

@end
