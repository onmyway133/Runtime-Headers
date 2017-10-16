/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKImageEditDSHandler : NSObject {
    CIImage * _ciImage;
    id  _dataSource;
    struct CGImage { } * _dataSourceImage;
    BOOL  _dataSourceIsIKImageView;
    NSMutableArray * _filterArray;
    IKImageEditPanel * _panel;
}

@property (nonatomic, readwrite) id dataSource;
@property (atomic, readwrite) BOOL dataSourceIsIKImageView;
@property (atomic, readonly) NSMutableArray *filterArray;

- (void)cleanup;
- (id)dataSource;
- (BOOL)dataSourceIsIKImageView;
- (void)dealloc;
- (id)delegateForIKFilterChain;
- (void)filter:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 filterChain:(id)arg4;
- (id)filter:(id)arg1 valueForKey:(id)arg2;
- (void)filterAdded:(id)arg1 filterChain:(id)arg2;
- (id)filterArray;
- (void)filterChainChanged:(id)arg1;
- (void)filterRemoved:(id)arg1 filterChain:(id)arg2;
- (void)finalize;
- (id)initWithPanel:(id)arg1;
- (id)metaDataFromCGImageRef;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceIsIKImageView:(BOOL)arg1;
- (void)setFilterArray:(id)arg1;
- (void)setSingleEffectFilterArray:(id)arg1;
- (void)updateDataSourceImage:(id)arg1;
- (void)updateFilter:(id)arg1 withParameters:(id)arg2 filterChain:(id)arg3;

@end
