/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTileScrollingInfoLayer : CALayer <CALayerDelegate> {
    CALayer * _activeRectLayer;
    CALayer * _coverageRectLayer;
    _NSTiledLayer * _tileLayer;
    NSMutableDictionary * _tiles;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) _NSTiledLayer *tileLayer;

- (void)_updateTileRepresentation;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)display;
- (id)init;
- (void)layoutSublayers;
- (void)setTileLayer:(id)arg1;
- (id)tileLayer;

@end
