/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface _WKWebsitePolicies : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    }  _websitePolicies;
}

@property (atomic, readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readwrite) unsigned long long allowedAutoplayQuirks;
@property (nonatomic, readwrite) long long autoplayPolicy;
@property (nonatomic, readwrite) BOOL contentBlockersEnabled;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (unsigned long long)allowedAutoplayQuirks;
- (long long)autoplayPolicy;
- (BOOL)contentBlockersEnabled;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setAllowedAutoplayQuirks:(unsigned long long)arg1;
- (void)setAutoplayPolicy:(long long)arg1;
- (void)setContentBlockersEnabled:(BOOL)arg1;

@end
