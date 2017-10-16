/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarColorPickerFavoriteItem : NSCollectionViewItem <NSGestureRecognizerDelegate> {
    NSColor * _displayedColor;
    id  _selectionHandler;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, copy) NSColor *displayedColor;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) id selectionHandler;
@property (atomic, readonly) Class superclass;

- (BOOL)_viewControllerSupports10_10Features;
- (void)dealloc;
- (id)displayedColor;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)loadView;
- (void)prepareForReuse;
- (void)pressItem:(id)arg1;
- (id)selectionHandler;
- (void)setDisplayedColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelectionHandler:(id)arg1;

@end
