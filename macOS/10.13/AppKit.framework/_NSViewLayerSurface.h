/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSViewLayerSurface : NSObject {
    CAContext * _context;
    NSCGSWindowLayerSurface * _surface;
    NSView * _view;
    id  _viewGeometryObserver;
    NSWindow * _window;
    NSArray * _windowObservers;
}

+ (id)_windowTitlebarLayerSurfaceForView:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)invalidate;
- (void)update;

@end
