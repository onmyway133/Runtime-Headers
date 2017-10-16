/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {
    NSString * _countryCode;
    NSLock * _countryCodeLock;
    BOOL  _hasURLAuthenticationTimeToLive;
    <_GEOCountryConfigurationServerProxy> * _serverProxy;
    NSMutableDictionary * _supportedFeatures;
    NSLock * _supportedFeaturesLock;
    NSMutableArray * _updateCompletionHandlers;
    double  _urlAuthenticationTimeToLive;
}

@property (nonatomic, readwrite, copy) NSString *countryCode;
@property (nonatomic, readonly) BOOL currentCountrySupportsCarIntegration;
@property (nonatomic, readonly) BOOL currentCountrySupportsCommute;
@property (nonatomic, readonly) BOOL currentCountrySupportsDirections;
@property (nonatomic, readonly) BOOL currentCountrySupportsNavigation;
@property (nonatomic, readonly) BOOL currentCountrySupportsRouteGenius;
@property (nonatomic, readonly) BOOL currentCountrySupportsTraffic;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) double urlAuthenticationTimeToLive;

+ (void)disableServerConnection;
+ (void)setUseLocalProxy:(BOOL)arg1;
+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long*)arg3;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long*)arg4;
- (void)_resetSupportedFeatures;
- (void)_updateCountryConfiguration:(id)arg1 callbackQueue:(id)arg2;
- (id)countryCode;
- (BOOL)countryCode:(id)arg1 supportsFeature:(long long)arg2;
- (BOOL)currentCountrySupportsCarIntegration;
- (BOOL)currentCountrySupportsCommute;
- (BOOL)currentCountrySupportsDirections;
- (BOOL)currentCountrySupportsFeature:(long long)arg1;
- (BOOL)currentCountrySupportsNavigation;
- (BOOL)currentCountrySupportsRouteGenius;
- (BOOL)currentCountrySupportsTraffic;
- (void)dealloc;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3;
- (id)init;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)serverProxyProvidersDidChange:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)updateCountryConfiguration:(id)arg1;
- (void)updateCountryConfiguration:(id)arg1 callbackQueue:(id)arg2;
- (void)updateProvidersForCurrentCountry;
- (double)urlAuthenticationTimeToLive;

@end
