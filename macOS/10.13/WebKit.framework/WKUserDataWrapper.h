/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKUserDataWrapper : NSObject {
    struct RefPtr<API::Object> { 
        struct Object {} *m_ptr; 
    }  _webUserData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithUserData:(/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)arg1;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)userData;

@end
