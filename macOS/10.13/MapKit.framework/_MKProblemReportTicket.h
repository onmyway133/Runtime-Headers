/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MKProblemReportTicket : NSObject <MKMapServiceProblemReportTicket> {
    <GEOMapServiceProblemReportTicket> * _ticket;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithProblemReportTicket:(id)arg1;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;

@end
