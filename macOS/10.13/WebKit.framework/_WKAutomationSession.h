/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface _WKAutomationSession : NSObject <WKObject> {
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<_WKAutomationSessionDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<_WKAutomationSessionDelegate> > { 
        id m_weakReference; 
    }  _delegate;
    struct ObjectStorage<WebKit::WebAutomationSession> { 
        struct type { 
            unsigned char __lx[504]; 
        } data; 
    }  _session;
}

@property (atomic, readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <_WKAutomationSessionDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isPaired, nonatomic, readonly) BOOL paired;
@property (nonatomic, readwrite, copy) NSString *sessionIdentifier;
@property (atomic, readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isPaired;
- (void)markEventAsSynthesizedForAutomation:(id)arg1;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (BOOL)wasEventSynthesizedForAutomation:(id)arg1;

@end
