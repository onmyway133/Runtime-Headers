/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPlatform : NSObject

+ (void)setIsRunningInGeod:(BOOL)arg1;
+ (id)sharedPlatform;

- (BOOL)_deviceSupportsNavigation;
- (id)_systemInfoDictionary;
- (id)buildVersion;
- (id)clientCapabilities;
- (long long)deviceScreenHeightInPixels;
- (double)deviceScreenScale;
- (long long)deviceScreenWidthInPixels;
- (id)hardwareIdentifier;
- (id)hardwareModel;
- (BOOL)isInternalInstall;
- (BOOL)mapsFeatureFreedomEnabled;
- (id)osVersion;
- (id)productName;
- (BOOL)supportsNavigation;
- (BOOL)supportsRealisticTiles;

@end
