/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying> {
    NSSet * _statusCodes;
}

@property (atomic, readwrite, copy) NSSet *statusCodes;

+ (id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(id)arg4;
- (id)initWithStatusCodes:(id)arg1;
- (void)setStatusCodes:(id)arg1;
- (id)statusCodes;

@end
