/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebUserMediaPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::UserMediaRequest> { 
        struct UserMediaRequest {} *m_ptr; 
    }  _request;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)cancelUserMediaAccessRequest;
- (void)deny;
- (id)initWithUserMediaRequest:(struct Ref<WebCore::UserMediaRequest> { struct UserMediaRequest {} *x1; }*)arg1;

@end
