/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebDefaultUIDelegate : NSObject <WebUIDelegate> {
    NSMenu * defaultMenu;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)sharedUIDelegate;

- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 windowFeatures:(id)arg3;
- (void)webView:(id)arg1 didDrawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webView:(id)arg1 didScrollDocumentInFrameView:(id)arg2;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (unsigned long long)webView:(id)arg1 dragSourceActionMaskForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (id)webView:(id)arg1 generateReplacementFile:(id)arg2;
- (void)webView:(id)arg1 makeFirstResponder:(id)arg2;
- (void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;
- (void)webView:(id)arg1 printFrameView:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;
- (void)webView:(id)arg1 setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webView:(id)arg1 setResizable:(BOOL)arg2;
- (void)webView:(id)arg1 setStatusBarVisible:(BOOL)arg2;
- (void)webView:(id)arg1 setStatusText:(id)arg2;
- (void)webView:(id)arg1 setToolbarsVisible:(BOOL)arg2;
- (BOOL)webView:(id)arg1 shouldReplaceUploadFile:(id)arg2 usingGeneratedFilename:(id*)arg3;
- (void)webView:(id)arg1 willPerformDragDestinationAction:(unsigned long long)arg2 forDraggingInfo:(id)arg3;
- (void)webView:(id)arg1 willPerformDragSourceAction:(unsigned long long)arg2 fromPoint:(struct CGPoint { double x1; double x2; })arg3 withPasteboard:(id)arg4;
- (void)webView:(id)arg1 willPopupMenu:(id)arg2;
- (BOOL)webViewAreToolbarsVisible:(id)arg1;
- (void)webViewClose:(id)arg1;
- (id)webViewFirstResponder:(id)arg1;
- (void)webViewFocus:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })webViewFrame:(id)arg1;
- (BOOL)webViewIsResizable:(id)arg1;
- (BOOL)webViewIsStatusBarVisible:(id)arg1;
- (void)webViewShow:(id)arg1;
- (id)webViewStatusText:(id)arg1;
- (void)webViewUnfocus:(id)arg1;

// WebDefaultUIDelegate (WebContextMenu)

- (void)appendDefaultItems:(id)arg1 toArray:(id)arg2;
- (id)menuItemWithTag:(int)arg1 target:(id)arg2 representedObject:(id)arg3;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;

@end