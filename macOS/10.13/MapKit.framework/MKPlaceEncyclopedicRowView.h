/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {
    unsigned long long  _columnCount;
    NSMutableArray * _factoidViews;
    NSLayoutGuide * _insetMetricGuide;
    NSArray * _items;
    NSMutableArray * _labelConstraints;
    NSLayoutGuide * _leftMetricGuide;
    NSLayoutGuide * _rightMetricGuide;
}

@property (nonatomic, readwrite, retain) NSArray *items;
@property (nonatomic, readwrite, retain) NSMutableArray *labelConstraints;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)addWidthAndSideSpacingConstraintsForLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (id)labelConstraints;
- (void)layout;
- (void)refreshColumnCount;
- (void)refreshContent:(BOOL)arg1;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)setItems:(id)arg1;
- (void)setLabelConstraints:(id)arg1;

@end
