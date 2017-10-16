/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEOMapItemTransitAttribution : NSObject <GEOTransitAttribution> {
    GEOPDTransitAttribution * _transitAttribution;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (getter=_providerNames, nonatomic, readonly) NSArray *providerNames;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)_providerNames;
- (id)initWithTransitAttribution:(id)arg1;

@end