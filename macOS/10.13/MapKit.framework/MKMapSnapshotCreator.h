/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKMapSnapshotCreator : NSObject {
    BOOL  _rendering;
    VKMapSnapshotCreator * _snapshotCreator;
}

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })axisTransformFrom:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })commonSnapshotRegionForRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectEncloserOfMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 withSizeProportionalToSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)snapshotCreatorWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (BOOL)supportsSharingThumbnails;

- (void).cxx_destruct;
- (void)_renderWithCompletionBlock:(id)arg1;
- (void)cancel;
- (void)renderRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 completionBlock:(id)arg2;
- (void)renderRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 completionBlock:(id)arg3;

@end
