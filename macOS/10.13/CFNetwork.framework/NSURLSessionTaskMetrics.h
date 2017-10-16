/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface NSURLSessionTaskMetrics : NSObject

@property (atomic, readwrite) unsigned long long redirectCount;
@property (atomic, readwrite, copy) NSDateInterval *taskInterval;
@property (atomic, readwrite, copy) NSArray *transactionMetrics;

// Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork

- (id)_initWithTask:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNoInit;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices

// NSURLSessionTaskMetrics (GEOExtras)

- (id)_geo_clientMetrics;
- (id)_geo_remoteAddressAndPort;

@end