/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLSeamlessItemOpener : NSObject {
    QLPreviewBubble * _bubble;
    <QLPreviewItem> * _item;
    QLSeamlessOpener * _opener;
    QLPreviewPanel * _previewPanel;
    struct __QLSeamlessOpeningRequest { } * _request;
}

@property (atomic, readonly) <QLSeamlessOpenerDelegate> *delegate;
@property (atomic, readwrite, retain) <QLPreviewItem> *item;
@property (atomic, readwrite, retain) QLSeamlessOpener *opener;

+ (id)itemOpenerForPreviewItem:(id)arg1 fromOpener:(id)arg2;

- (void)_displayLegacyOpeningAnimationWithSourceImage:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromPreviewPanel:(id)arg3;
- (id)_displayStateFromViewDisplayState:(id)arg1 fullscreen:(BOOL)arg2 screenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_invalidateWithSuccess:(BOOL)arg1;
- (void)_performBlock:(id)arg1;
- (int)_supportWithMaxSupport:(int)arg1;
- (id)_viewDisplayStateFromDisplayState:(id)arg1;
- (void)bindToPID:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)discard;
- (id)item;
- (int)openWithOptions:(int)arg1 fromPreviewPanel:(id)arg2 minWindowLevel:(long long)arg3;
- (id)opener;
- (void)setItem:(id)arg1;
- (void)setOpener:(id)arg1;

@end
