/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFAuthorization : NSObject <NSCoding> {
    struct AuthorizationOpaqueRef { } * _authorization;
    id  _reserved;
}

+ (id)authorization;
+ (id)authorizationWithFlags:(unsigned int)arg1 rights:(const struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg2 environment:(const struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg3;

- (struct AuthorizationOpaqueRef { }*)authorizationRef;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlags:(unsigned int)arg1 rights:(const struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg2 environment:(const struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg3;
- (void)invalidateCredentials;
- (void)invalidateCredentials:(BOOL)arg1;
- (BOOL)obtainWithRight:(char *)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)obtainWithRights:(const struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg1 flags:(unsigned int)arg2 environment:(const struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg3 authorizedRights:(struct { /* ? */ }**)arg4 error:(id*)arg5;
- (int)permitWithRight:(char *)arg1 flags:(unsigned int)arg2;
- (int)permitWithRights:(const struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg1 flags:(unsigned int)arg2 environment:(const struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg3 authorizedRights:(struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg4;
- (id)replacementObjectForPortCoder:(id)arg1;

@end