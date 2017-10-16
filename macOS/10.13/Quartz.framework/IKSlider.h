/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKSlider : NSSlider {
    double  _defaultValue;
    id  _delegate;
    CIFilter * _filter;
    NSString * _filterName;
    NSString * _key;
}

@property (atomic, readwrite) double defaultValue;
@property (atomic, readwrite) id delegate;
@property (nonatomic, readwrite) CIFilter *filter;
@property (atomic, readwrite, copy) NSString *filterName;
@property (atomic, readwrite, copy) NSString *key;

- (double)defaultValue;
- (id)delegate;
- (id)filter;
- (id)filterName;
- (id)key;
- (void)leftImageClicked:(id)arg1;
- (void)rightImageClicked:(id)arg1;
- (void)setDefaultValue:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilterName:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setupWithDelegate:(id)arg1 filterArray:(id)arg2 filter:(id)arg3 key:(id)arg4;
- (void)sliderChanged:(id)arg1;
- (BOOL)snapsToDefault;

@end
