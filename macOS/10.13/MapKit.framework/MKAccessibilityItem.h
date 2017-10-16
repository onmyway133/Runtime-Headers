/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKAccessibilityItem : NSObject {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    MKMapView * _mapView;
    BOOL  _selectable;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readwrite) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readwrite, retain) MKMapView *mapView;
@property (getter=isSelectable, nonatomic, readwrite) BOOL selectable;
@property (nonatomic, readwrite, copy) NSString *title;
@property (nonatomic, readwrite) long long type;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForCoodinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 mapView:(id)arg3;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (id)initWithLabelMarker:(id)arg1 mapView:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSelectable;
- (id)mapView;
- (id)positionValue;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapView:(id)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)sizeValue;
- (id)title;
- (long long)type;

@end
