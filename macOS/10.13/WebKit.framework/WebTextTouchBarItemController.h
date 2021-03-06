/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebTextTouchBarItemController : NSTextTouchBarItemController {
    unsigned long long  _currentTextAlignment;
    struct RetainPtr<NSColor> { 
        void *m_ptr; 
    }  _textColor;
    BOOL  _textIsBold;
    BOOL  _textIsItalic;
    BOOL  _textIsUnderlined;
    struct RetainPtr<WebTextListTouchBarViewController> { 
        void *m_ptr; 
    }  _textListTouchBarViewController;
    WebView * _webView;
}

@property (nonatomic, readwrite) unsigned long long currentTextAlignment;
@property (nonatomic, readwrite, retain) NSColor *textColor;
@property (nonatomic, readwrite) BOOL textIsBold;
@property (nonatomic, readwrite) BOOL textIsItalic;
@property (nonatomic, readwrite) BOOL textIsUnderlined;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_webChangeColor:(id)arg1;
- (void)_webChangeTextAlignment:(id)arg1;
- (void)_webChangeTextStyle:(id)arg1;
- (unsigned long long)currentTextAlignment;
- (id)initWithWebView:(id)arg1;
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
- (id)textListViewController;
- (id)webTextListTouchBarViewController;

@end
