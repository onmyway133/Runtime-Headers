/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImageManagerAgeProfileView : QCAgeProfileView {
    unsigned long long  _binCount;
    double  _binSize;
    double * _buffer;
    QCImageManager * _manager;
    double  _maxAge;
    double  _maxAgePurgeable;
    NSArray * _names;
    double  _querySuccess;
    unsigned long long  _selectedIndex;
    unsigned long long  _statCount;
    double  _stdDev;
    void * _unused2;
}

- (void)_updateProfile;
- (void)clearAllSamples;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)finalize;
- (id)imageManager;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)nameCount;
- (id)nameForIndex:(unsigned long long)arg1;
- (id)selectedCache;
- (void)setImageManager:(id)arg1;
- (void)setSelectedCache:(id)arg1;

@end