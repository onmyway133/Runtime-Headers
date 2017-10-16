/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKRemoteWebInspectorProxyObjCAdapter : NSObject <WKNavigationDelegate> {
    struct RemoteWebInspectorProxy { int (**x1)(); unsigned int x2; struct RemoteWebInspectorProxyClient {} *x3; struct WebPageProxy {} *x4; struct RetainPtr<WKWebInspectorWKWebView> { void *x_5_1_1; } x5; struct RetainPtr<NSWindow> { void *x_6_1_1; } x6; struct RetainPtr<WKRemoteWebInspectorProxyObjCAdapter> { void *x_7_1_1; } x7; struct HashMap<WTF::String, WTF::RetainPtr<NSURL>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<NSURL> > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<NSURL>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<NSURL> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_8_1_1; } x8; } * _inspectorProxy;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id)initWithRemoteWebInspectorProxy:(struct RemoteWebInspectorProxy { int (**x1)(); unsigned int x2; struct RemoteWebInspectorProxyClient {} *x3; struct WebPageProxy {} *x4; struct RetainPtr<WKWebInspectorWKWebView> { void *x_5_1_1; } x5; struct RetainPtr<NSWindow> { void *x_6_1_1; } x6; struct RetainPtr<WKRemoteWebInspectorProxyObjCAdapter> { void *x_7_1_1; } x7; struct HashMap<WTF::String, WTF::RetainPtr<NSURL>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<NSURL> > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<NSURL>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<NSURL> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_8_1_1; } x8; }*)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end