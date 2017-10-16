/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKTextTouchBarItemController : NSTextTouchBarItemController <NSCandidateListTouchBarItemDelegate, NSTouchBarDelegate> {
    unsigned long long  _currentTextAlignment;
    struct RetainPtr<NSColor> { 
        void *m_ptr; 
    }  _textColor;
    BOOL  _textIsBold;
    BOOL  _textIsItalic;
    BOOL  _textIsUnderlined;
    struct RetainPtr<WKTextListTouchBarViewController> { 
        void *m_ptr; 
    }  _textListTouchBarViewController;
    struct WebViewImpl { bool x1; bool x2; bool x3; bool x4; bool x5; struct RetainPtr<NSTouchBar> { void *x_6_1_1; } x6; struct RetainPtr<NSTouchBar> { void *x_7_1_1; } x7; struct RetainPtr<NSTouchBar> { void *x_8_1_1; } x8; struct RetainPtr<NSTouchBar> { void *x_9_1_1; } x9; struct RetainPtr<WKTextTouchBarItemController> { void *x_10_1_1; } x10; struct RetainPtr<NSCandidateListTouchBarItem> { void *x_11_1_1; } x11; struct RetainPtr<NSCandidateListTouchBarItem> { void *x_12_1_1; } x12; struct RetainPtr<NSCandidateListTouchBarItem> { void *x_13_1_1; } x13; struct RetainPtr<WebPlaybackControlsManager> { void *x_14_1_1; } x14; struct RetainPtr<NSCustomTouchBarItem> { void *x_15_1_1; } x15; struct RetainPtr<AVTouchBarPlaybackControlsProvider> { void *x_16_1_1; } x16; struct RetainPtr<AVTouchBarScrubber> { void *x_17_1_1; } x17; id x18; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x19; in int x20; long long x21; void*x22; void*x23; void*x24; void*x25; void*x26; const void*x27; void*x28; void*x29; unsigned int x30/* : ? */; } * _webViewImpl;
}

@property (nonatomic, readwrite) unsigned long long currentTextAlignment;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) NSColor *textColor;
@property (nonatomic, readwrite) BOOL textIsBold;
@property (nonatomic, readwrite) BOOL textIsItalic;
@property (nonatomic, readwrite) BOOL textIsUnderlined;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_wkChangeColor:(id)arg1;
- (void)_wkChangeTextAlignment:(id)arg1;
- (void)_wkChangeTextStyle:(id)arg1;
- (void)candidateListTouchBarItem:(id)arg1 changedCandidateListVisibility:(BOOL)arg2;
- (void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(long long)arg2;
- (unsigned long long)currentTextAlignment;
- (void)didChangeAutomaticTextCompletion:(id)arg1;
- (void)didDestroyView;
- (id)initWithWebViewImpl:(struct WebViewImpl { bool x1; bool x2; bool x3; bool x4; bool x5; struct RetainPtr<NSTouchBar> { void *x_6_1_1; } x6; struct RetainPtr<NSTouchBar> { void *x_7_1_1; } x7; struct RetainPtr<NSTouchBar> { void *x_8_1_1; } x8; struct RetainPtr<NSTouchBar> { void *x_9_1_1; } x9; struct RetainPtr<WKTextTouchBarItemController> { void *x_10_1_1; } x10; struct RetainPtr<NSCandidateListTouchBarItem> { void *x_11_1_1; } x11; struct RetainPtr<NSCandidateListTouchBarItem> { void *x_12_1_1; } x12; struct RetainPtr<NSCandidateListTouchBarItem> { void *x_13_1_1; } x13; struct RetainPtr<WebPlaybackControlsManager> { void *x_14_1_1; } x14; struct RetainPtr<NSCustomTouchBarItem> { void *x_15_1_1; } x15; struct RetainPtr<AVTouchBarPlaybackControlsProvider> { void *x_16_1_1; } x16; struct RetainPtr<AVTouchBarScrubber> { void *x_17_1_1; } x17; id x18; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x19; in int x20; long long x21; void*x22; void*x23; void*x24; void*x25; void*x26; const void*x27; void*x28; void*x29; unsigned int x30/* : ? */; }*)arg1;
- (id)itemForIdentifier:(id)arg1;
- (void)setCurrentTextAlignment:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextIsBold:(BOOL)arg1;
- (void)setTextIsItalic:(BOOL)arg1;
- (void)setTextIsUnderlined:(BOOL)arg1;
- (id)textColor;
- (BOOL)textIsBold;
- (BOOL)textIsItalic;
- (BOOL)textIsUnderlined;
- (id)textListTouchBarViewController;
- (id)textListViewController;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)touchBarDidExitCustomization:(id)arg1;
- (void)touchBarWillEnterCustomization:(id)arg1;

@end
