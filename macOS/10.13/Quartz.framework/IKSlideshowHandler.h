/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKSlideshowHandler : NSObject <NSWindowDelegate> {
    NSString * _audioFile;
    IKSlideshowAudioPlayer * _audioPlayer;
    double  _autoPlayDelay;
    double  _autoPlayTransitionTime;
    BOOL  _autoPlayWrapAround;
    BOOL  _autoPlaying;
    IKSSBackgroundWindow * _backgroundWindow;
    long long  _currentIndex;
    IKSlideshowElement * _currentItem;
    IKSlideshowDataSourceHandler * _dataSourceHandler;
    IKSSIndexHandler * _indexHandler;
    long long  _itemArraySize;
    unsigned long long  _itemCount;
    IKSlideshowElement * _itemList;
    NSString * _mode;
    NSOperationQueue * _operationQueue;
    NSMutableArray * _otherScreens;
    long long  _pageIncrement;
    IKSSPanel * _panel;
    BOOL  _pdfDisplayAsBook;
    long long  _pdfDisplayBox;
    long long  _pdfDisplayMode;
    unsigned int  _sToken;
    IKSlideshow * _slideshow;
    BOOL  _slideshowIsRunning;
    NSScreen * _slideshowScreen;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _slideshowScreenRectWhenLaunched;
}

@property (atomic, readwrite, copy) NSString *audioFile;
@property (atomic, readwrite) double autoPlayDelay;
@property (atomic, readwrite) BOOL autoPlayWrapAround;
@property (atomic, readwrite) BOOL autoPlaying;
@property (atomic, readwrite) long long currentIndex;
@property (atomic, readonly) IKSlideshowElement *currentItem;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) long long itemArraySize;
@property (atomic, readwrite) unsigned long long itemCount;
@property (atomic, readwrite) BOOL pdfDisplayAsBook;
@property (atomic, readwrite) long long pdfDisplayBox;
@property (atomic, readwrite) long long pdfDisplayMode;
@property (atomic, readonly) BOOL slideshowIsRunning;
@property (atomic, readonly) Class superclass;

+ (id)sharedSlideshowHandler;

- (void)addSibling:(id)arg1 forItem:(id)arg2;
- (void)appWillBecomeActive:(id)arg1;
- (void)appWillHide:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appWillUnhide:(id)arg1;
- (void)applicationDidChangeScreenParameters:(id)arg1;
- (id)audioFile;
- (double)autoPlayDelay;
- (BOOL)autoPlayWrapAround;
- (BOOL)autoPlaying;
- (void)cleanup;
- (void)closeDown;
- (void)createPanel:(id)arg1;
- (long long)currentIndex;
- (id)currentItem;
- (void)dealloc;
- (void)debugState;
- (void)doStopSlideshow:(id)arg1;
- (void)exportMarkedItems;
- (void)fadeFromBlackToNormal:(float)arg1 wait:(BOOL)arg2;
- (void)fadeFromNormalToBlack:(float)arg1 wait:(BOOL)arg2;
- (void)finalize;
- (void)freeItems;
- (void)goFullScreen:(id)arg1;
- (void)gotoFirst;
- (void)gotoIndex:(unsigned long long)arg1 transitionTime:(double)arg2 direction:(int)arg3;
- (void)gotoLast;
- (void)gotoNext;
- (void)gotoPrevious;
- (BOOL)handleKeyCode:(unsigned short)arg1;
- (void)imageDidLoad:(id)arg1;
- (unsigned long long)indexForItem:(id)arg1;
- (id)init;
- (void)installOtherScreensBackground;
- (long long)itemArraySize;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (void)itemCountChanged;
- (void)itemWasRotated:(id)arg1;
- (void)leaveFullScreen:(id)arg1;
- (void)loadItem:(id)arg1;
- (void)loadNeighborsOfItem:(id)arg1 direction:(int)arg2;
- (void)loadThumbnailForElement:(id)arg1 currentCount:(unsigned long long)arg2;
- (void)magnifyWithEvent:(id)arg1;
- (void)makeCurrentItem:(id)arg1;
- (void)makePanelFadeOut;
- (id)panel;
- (void)pdfDidLoad:(id)arg1;
- (BOOL)pdfDisplayAsBook;
- (long long)pdfDisplayBox;
- (long long)pdfDisplayMode;
- (id)pdfView;
- (void)play:(id)arg1;
- (void)qlDidLoad:(id)arg1;
- (void)releaseFadeReservation;
- (void)reloadData;
- (void)reloadSlideshowItemAtIndex:(unsigned long long)arg1;
- (void)removeOtherScreensBackground;
- (void)rotateLeft;
- (void)rotateRight;
- (void)runWithSlideshow:(id)arg1 dataSource:(id)arg2 inMode:(id)arg3 options:(id)arg4;
- (void)setAudioFile:(id)arg1;
- (void)setAutoPlayDelay:(double)arg1;
- (void)setAutoPlayWrapAround:(BOOL)arg1;
- (void)setAutoPlaying:(BOOL)arg1;
- (void)setCurrentIndex:(long long)arg1;
- (void)setItemArraySize:(long long)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setPdfDisplayAsBook:(BOOL)arg1;
- (void)setPdfDisplayBox:(long long)arg1;
- (void)setPdfDisplayMode:(long long)arg1;
- (BOOL)shouldLoad:(id)arg1;
- (BOOL)slideshowIsRunning;
- (id)slideshowScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })slideshowScreenRect;
- (void)slideshowToggleExportToiPhoto;
- (void)startAutoPlay;
- (void)startPlayAudio;
- (void)stopAutoPlay;
- (void)stopPlayAudio;
- (void)stopSlideshow:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)switchToActualSize;
- (void)switchToFullScreen;
- (void)switchToIndexMode;
- (void)switchToSingleMode:(unsigned long long)arg1;
- (void)thumbnailDidLoad:(id)arg1;
- (void)thumbnailDidLoad:(id)arg1 currentCount:(unsigned long long)arg2;
- (void)toggleAutoPlay:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromRect:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 windowWidth:(float)arg2 windowHeight:(float)arg3;
- (void)unloadFarNeighborsOfItem:(id)arg1;
- (void)updateItemCount;
- (double)userSpaceScaleFactor;

@end
