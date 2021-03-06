/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSFullScreenTileOverlayLayer : CALayer {
    BOOL  _active;
    NSView * _auxiliaryView;
    unsigned long long  _parentSpaceID;
    unsigned long long  _tileID;
    _NSFullScreenTileOverlayWindow * _window;
    CALayer * _windowContentLayer;
    NSMutableArray * _windowLayers;
}

@property (atomic, readwrite) NSView *auxiliaryView;

- (void)addWindowWithID:(unsigned int)arg1;
- (void)applyPresentationFilters:(BOOL)arg1;
- (id)auxiliaryView;
- (void)dealloc;
- (void)endPresentation;
- (id)initWithTileID:(unsigned long long)arg1 parentSpaceID:(unsigned long long)arg2 coveredWindowTileFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 window:(id)arg4;
- (void)positionAuxiliaryView;
- (void)setAuxiliaryView:(id)arg1;
- (unsigned long long)tileID;
- (void)updateFrame;
- (void)updateFrameUsingCoveredWindowTileFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
