/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKTrafficSupport : NSObject

+ (id)sharedTrafficSupport;

- (long long)_convertType:(int)arg1;
- (id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2;
- (id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3;
- (id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3;
- (void)setupTrafficIncidents;

@end
