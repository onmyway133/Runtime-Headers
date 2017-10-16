/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKImageEditPanel : NSPanel {
    void * _privateData;
}

@property (atomic, readwrite) <IKImageEditPanelDataSource> *dataSource;
@property (atomic, readonly) NSArray *filterArray;

+ (id)sharedImageEditPanel;

- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)canBecomeKeyWindow;
- (id)dataSource;
- (id)filterArray;
- (id)imageView;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)showPanel:(BOOL)arg1;
- (int)tabHeight;
- (void)tabSelectionChanged:(id)arg1;
- (int)windowbarHeight;

// IKImageEditPanel (IKImageEditPanelInternal)

+ (id)IKEditPanelLocalizedString:(id)arg1;
+ (id)IKImageIOLocalizedString:(id)arg1;
+ (BOOL)hasSharedImageEditPanel;
+ (void)locateLongitude:(double)arg1 latitude:(double)arg2;
+ (void)locateLongitude:(double)arg1 latitude:(double)arg2 query:(id)arg3;
+ (id)processMetaData:(id)arg1;

- (void)adjustDisplayModes:(long long)arg1;
- (void)dealloc;
- (id)dsHandler;
- (void)finalize;
- (BOOL)hasAdjustMode;
- (BOOL)hasDetailsMode;
- (BOOL)hasEffectsMode;
- (void)makeBig;
- (void)makeSmall;
- (void)setHasAdjustMode:(BOOL)arg1;
- (void)setHasDetailsMode:(BOOL)arg1;
- (void)setHasEffectsMode:(BOOL)arg1;
- (void)setup;

@end
