/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/Versions/A/SafariServices
 */

@interface SFSafariTab : NSObject <NSSecureCoding> {
    NSExtensionContext * __extensionContext;
    NSUUID * _uuid;
}

@property (nonatomic, readwrite, retain) NSExtensionContext *_extensionContext;
@property (nonatomic, readonly) NSUUID *_uuid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_extensionContext;
- (id)_remoteObjectProxy;
- (void)activateWithCompletionHandler:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getActivePageWithCompletionHandler:(id)arg1;
- (void)getPagesWithCompletionHandler:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)set_extensionContext:(id)arg1;

// SFSafariTab (SFPrivate)

- (id)_initWithUUID:(id)arg1;
- (id)_uuid;

@end
