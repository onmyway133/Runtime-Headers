/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapAccessTransitStop : GEOMapAccessTransitNodeBase <GEOMapTransitStop> {
    <GEOMapTransitHall> * _hall;
}

@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long hallID;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) struct { double x1; double x2; }*polygonPoints;
@property (nonatomic, readonly) long long polygonPointsCount;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long transitID;

- (void).cxx_destruct;
- (id)findAccessPoints:(id)arg1 completionHandler:(id)arg2;
- (id)findHall:(id)arg1 completionHandler:(id)arg2;
- (id)findLinksIn:(id)arg1 completionHandler:(id)arg2;
- (id)findLinksOut:(id)arg1 completionHandler:(id)arg2;
- (unsigned long long)hallID;

@end
