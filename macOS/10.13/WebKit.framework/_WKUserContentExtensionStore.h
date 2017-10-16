/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface _WKUserContentExtensionStore : NSObject <WKObject> {
    struct RetainPtr<WKContentRuleListStore> { 
        void *m_ptr; 
    }  _contentRuleListStore;
}

@property (atomic, readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)defaultStore;
+ (id)storeWithURL:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)compileContentExtensionForIdentifier:(id)arg1 encodedContentExtension:(id)arg2 completionHandler:(id)arg3;
- (void)lookupContentExtensionForIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(id)arg2;

// _WKUserContentExtensionStore (WKPrivate)

- (id)_initWithWKContentRuleListStore:(id)arg1;
- (void)_invalidateContentExtensionVersionForIdentifier:(id)arg1;
- (void)_removeAllContentExtensions;

@end