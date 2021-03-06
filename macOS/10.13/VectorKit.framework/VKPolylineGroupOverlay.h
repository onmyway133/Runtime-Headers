/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKPolylineGroupOverlay : NSObject <VKOverlay> {
    GEOMapRegion * _boundingMapRegion;
    BOOL  _containsTransit;
    struct __CFSet { } * _observers;
    NSMutableSet * _polylines;
    VKPolylineOverlay * _selectedPolyline;
    BOOL  _showTraffic;
}

@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) BOOL containsTransit;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *polylines;
@property (nonatomic, readwrite, retain) VKPolylineOverlay *selectedPolyline;
@property (nonatomic, readwrite) BOOL showTraffic;
@property (atomic, readonly) Class superclass;

- (void)_updateBoundingMapRegion;
- (void)_updateContainsTransit;
- (void)addObserver:(id)arg1;
- (void)addPolyline:(id)arg1;
- (id)boundingMapRegion;
- (BOOL)containsTransit;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)polylines;
- (void)removeObserver:(id)arg1;
- (void)removePolyline:(id)arg1;
- (id)selectedPolyline;
- (void)setSelectedPolyline:(id)arg1;
- (void)setShowTraffic:(BOOL)arg1;
- (BOOL)showTraffic;

@end
