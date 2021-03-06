/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKMapSnapshot : NSObject {
    NSImage * _image;
    VKMapSnapshot * _snapshot;
}

@property (nonatomic, readonly) NSImage *image;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })_coordinateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)_hasNoDataPlaceholders;
- (id)_initWithLoDPISnapshot:(id)arg1 hiDPISnapshot:(id)arg2;
- (void)_prepareForRenderWithAnnotationViews:(id)arg1;
- (id)image;
- (struct CGPoint { double x1; double x2; })pointForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

// MKMapSnapshot (MKMapSnapshotExtras)

- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
