/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKComposer : NSObject {
    NSURL * _URL;
    int  _annotationType;
    NSColor * _backgroundColor;
    struct CGColor { } * _cgBackgroundColor;
    IKFilterChain * _filterChain;
    IKImageBackgroundLayer * _imageBackgroundLayer;
    IKImageLayer * _imageLayer;
    BOOL  _isOpaque;
    NSMutableArray * _layers;
    int  _maxTextureSize;
    CALayer * _mouseDownLayer;
    BOOL  _needToCreateImageForImageState;
    long long  _oldToolMode;
    NSMutableDictionary * _registeredLayers;
    BOOL  _reuseImageLayer;
    IKRootLayer * _rootLayer;
    int  _selectionType;
    long long  _toolMode;
    CALayer * _userOverlayImage;
    CALayer * _userOverlayRoot;
    IKImageView * _view;
    id  _viewDelegate;
    BOOL  _viewDelegateRespondsToDidChange;
    BOOL  _viewDelegateRespondsToDidChangeWithParameters;
    BOOL  _viewDelegateRespondsToUndoManagerForOperation;
    BOOL  _viewDelegateRespondsToWillChange;
}

@property (atomic, readwrite, retain) NSURL *URL;
@property (atomic, readwrite) BOOL isOpaque;
@property (atomic, readwrite) BOOL reuseImageLayer;

+ (struct CGContext { }*)createContextForCGImage:(struct CGImage { }*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 alphaInfo:(unsigned int)arg4 data:(void**)arg5;
+ (struct CGImage { }*)createCopy:(struct CGImage { }*)arg1 filterArray:(id)arg2;
+ (struct CGImage { }*)createCopy:(struct CGImage { }*)arg1 orientationTag:(int)arg2;
+ (struct CGImage { }*)imageFromCGImage:(struct CGImage { }*)arg1 imageProperties:(id)arg2 imageState:(id)arg3 options:(id)arg4;
+ (struct CGImage { }*)imageFromURL:(id)arg1 imageState:(id)arg2 options:(id)arg3;

- (id)URL;
- (void)addCursorRectForToolMode;
- (void)addLayer:(id)arg1 linkedTo:(id)arg2;
- (int)annotationType;
- (void)applyPaste:(id)arg1;
- (void)applyPasteCallback:(id)arg1 layer:(id)arg2;
- (void)applyPendingChanges;
- (id)backgroundColor;
- (id)backgroundLayer;
- (void)bind:(id)arg1 toLayer:(id)arg2;
- (BOOL)canCrop;
- (BOOL)canPaste;
- (struct CGColor { }*)cgBackgroundColor;
- (struct CGImage { }*)cgImageFromSelection:(BOOL)arg1;
- (struct CGImage { }*)cgImageFromSelection:(BOOL)arg1 createSquarePixels:(BOOL)arg2;
- (void)changeColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)cleanup;
- (void)closingDown;
- (struct CGPoint { double x1; double x2; })convertImagePointToViewPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertImageRectToViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertViewPointToImagePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertViewRectToImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copy:(id)arg1;
- (struct CGColor { }*)createCGColorFromNSColor:(id)arg1;
- (struct CGImage { }*)createImageWithCallback:(SEL)arg1 param:(id)arg2;
- (id)createLayerForTool:(long long)arg1 event:(id)arg2;
- (struct CGImage { }*)createNewImageWithCallback:(SEL)arg1 param:(id)arg2 applyFilters:(BOOL)arg3;
- (struct CGImage { }*)createThumbnailWithMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)crop:(id)arg1;
- (void)dealloc;
- (void)doAddAnnotation:(id)arg1 select:(BOOL)arg2;
- (void)doRemoveAnnotation:(id)arg1;
- (id)fileURL;
- (void)filter:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)filter:(id)arg1 valueForKey:(id)arg2;
- (void)filterAdded:(id)arg1 filterChain:(id)arg2;
- (id)filterArray;
- (id)filterChain;
- (void)filterChainChanged:(id)arg1;
- (void)filterRemoved:(id)arg1 filterChain:(id)arg2;
- (void)finalize;
- (void)flipImageHorizontal:(id)arg1;
- (void)flipImageVertical:(id)arg1;
- (void)hideKnobs;
- (struct CGImage { }*)image;
- (void)imageDidChange;
- (void)imageDidChange:(BOOL)arg1 imageStateDidChange:(BOOL)arg2;
- (struct CGImage { }*)imageForImageState;
- (id)imageLayer;
- (id)imageProperties;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageState;
- (void)imageState:(id*)arg1 image:(struct CGImage {}**)arg2 options:(id)arg3;
- (id)imageView;
- (void)imageWillChange;
- (struct CGImage { }*)imageWithOptions:(id)arg1;
- (id)initWithView:(id)arg1;
- (BOOL)isOpaque;
- (BOOL)keyDown:(id)arg1;
- (id)layerForImage;
- (id)layerForName:(id)arg1;
- (id)layerForTool:(long long)arg1;
- (id)layerOfType:(id)arg1;
- (int)maxTextureSize;
- (void)mouseDown:(id)arg1;
- (id)mouseDownLayer;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overlayForType:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)reassignFilterChain:(id)arg1;
- (void)registerInternalLayers;
- (BOOL)registerLayer:(id)arg1;
- (void)removeLayer:(id)arg1;
- (void)removeSelectionLayers;
- (void)renderOptionsForOptionsCallback:(id)arg1 param:(id)arg2;
- (void)resetToolMode;
- (BOOL)reuseImageLayer;
- (id)rootLayer;
- (void)rotateImageLeft:(id)arg1;
- (void)rotateImageRight:(id)arg1;
- (void)scrollToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)scrollToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)selectAll:(id)arg1;
- (void)selectionRectAdded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRectCG;
- (void)selectionRectDidChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)selectionRectRemoved;
- (int)selectionType;
- (void)setAnnotationType:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFilterArray:(id)arg1;
- (void)setFilterChain:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1 imageProperties:(id)arg2 imageState:(id)arg3 options:(id)arg4;
- (void)setImageLayer:(id)arg1;
- (void)setImageWithURL:(id)arg1 imageState:(id)arg2 options:(id)arg3;
- (void)setImageZoomFactor:(double)arg1 centerPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setIsOpaque:(BOOL)arg1;
- (void)setMouseDownLayer:(id)arg1;
- (void)setOverlay:(id)arg1 forType:(id)arg2;
- (void)setReuseImageLayer:(BOOL)arg1;
- (void)setRotationAngle:(double)arg1 centerPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setSelectionRectCG:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectionType:(int)arg1;
- (void)setToolMode:(long long)arg1;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 inObject:(id)arg3;
- (void)setupDefaultLayers;
- (void)setupImageBackgroundLayer;
- (void)setupImageLayer;
- (void)setupRootLayer;
- (void)showKnobs;
- (void)swapOldImage:(struct CGImage { }*)arg1 oldState:(id)arg2 newImage:(struct CGImage { }*)arg3 newState:(id)arg4 undoManager:(id)arg5;
- (id)targetForSelector:(SEL)arg1;
- (long long)toolMode;
- (void)unbindLayer:(id)arg1;
- (id)undoManagerForOperation:(id)arg1;
- (void)updateFilter:(id)arg1 withParameters:(id)arg2;
- (BOOL)validLayer:(id)arg1;
- (void)viewDelegateChanged;

@end