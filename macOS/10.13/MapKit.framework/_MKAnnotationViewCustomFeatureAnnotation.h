/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject <VKCustomFeatureAnnotation> {
    MKAnnotationView * _annotationView;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    VKCustomFeature * _customFeature;
}

@property (nonatomic, readwrite) MKAnnotationView *annotationView;
@property (nonatomic, readwrite) struct { double x1; double x2; } coordinate;
@property (nonatomic, readwrite) double course;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) VKCustomFeature *feature;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)annotationView;
- (struct { double x1; double x2; })coordinate;
- (id)feature;
- (void)setAnnotationView:(id)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@end
