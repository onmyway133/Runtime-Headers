/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextLayer : _NSBackingLayer <CALinearMaskLayerDelegate> {
    BOOL  _allowsLinearMaskLayer;
    CALayer * _colorLayer;
    struct CGColorTransform { } * _colorTransform;
    struct CGContext { } * _ctx;
    struct CGDisplayList { } * _displayList;
    struct CGContext { } * _displayListContext;
    NSMapTable * _layers;
    BOOL  _needsFSBC;
    CALinearMaskLayer * _primaryOverlay;
    struct CGColor { } * _primaryOverlayColor;
    id  _primaryOverlayRenderer;
    NSMutableArray * _primaryOverlayRenderers;
    struct CGDisplayList { } * _renderInContextDisplayList;
    NSMapTable * _renderers;
    BOOL  _wantsSubpixelAA;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)NS_didChangeDefaultContentsScale:(double)arg1;
- (BOOL)NS_usesLinearMaskOverlay;
- (void)_NS_invalidateSuggestedContentsScale;
- (void)_appkitViewBackingLayerUniqueMethod;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)display;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawLayer:(id)arg1 inLinearMaskContext:(struct CALinearMaskContext { }*)arg2;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setContentsScale:(double)arg1;

@end
