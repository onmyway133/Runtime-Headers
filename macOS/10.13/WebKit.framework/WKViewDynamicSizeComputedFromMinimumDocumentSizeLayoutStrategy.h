/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKViewDynamicSizeComputedFromMinimumDocumentSizeLayoutStrategy : WKViewLayoutStrategy

- (id)initWithPage:(struct WebPageProxy { int (**x1)(); id x2; int (*x3)(); int (**x4)(); int (**x5)(); int (**x6)(); int (**x7)(); struct RetainPtr<NSArray> { void *x_8_1_1; } x8; struct PageClient {} *x9; struct Ref<API::PageConfiguration> { struct PageConfiguration {} *x_10_1_1; } x10; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_11_1_1; } x11; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_12_1_1; } x12; struct unique_ptr<API::NavigationClient, std::__1::default_delete<API::NavigationClient> > { struct __compressed_pair<API::NavigationClient *, std::__1::default_delete<API::NavigationClient> > { struct NavigationClient {} *x_1_2_1; } x_13_1_1; } x13; struct unique_ptr<API::HistoryClient, std::__1::default_delete<API::HistoryClient> > { struct __compressed_pair<API::HistoryClient *, std::__1::default_delete<API::HistoryClient> > { struct HistoryClient {} *x_1_2_1; } x_14_1_1; } x14; }*)arg1 view:(id)arg2 viewImpl:(struct WebViewImpl { bool x1; bool x2; bool x3; bool x4; bool x5; struct RetainPtr<NSTouchBar> { void *x_6_1_1; } x6; struct RetainPtr<NSTouchBar> { void *x_7_1_1; } x7; struct RetainPtr<NSTouchBar> { void *x_8_1_1; } x8; struct RetainPtr<NSTouchBar> { void *x_9_1_1; } x9; struct RetainPtr<WKTextTouchBarItemController> { void *x_10_1_1; } x10; struct RetainPtr<NSCandidateListTouchBarItem> { void *x_11_1_1; } x11; struct RetainPtr<NSCandidateListTouchBarItem> { void *x_12_1_1; } x12; struct RetainPtr<NSCandidateListTouchBarItem> { void *x_13_1_1; } x13; struct RetainPtr<WebPlaybackControlsManager> { void *x_14_1_1; } x14; struct RetainPtr<NSCustomTouchBarItem> { void *x_15_1_1; } x15; struct RetainPtr<AVTouchBarPlaybackControlsProvider> { void *x_16_1_1; } x16; struct RetainPtr<AVTouchBarScrubber> { void *x_17_1_1; } x17; id x18; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x19; in int x20; long long x21; void*x22; void*x23; void*x24; void*x25; void*x26; const void*x27; void*x28; void*x29; unsigned int x30/* : ? */; }*)arg3 mode:(unsigned int)arg4;
- (void)updateLayout;
- (void)willChangeLayoutStrategy;

@end
