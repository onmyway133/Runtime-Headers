/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Security.framework/Versions/A/Security
 */

@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol> {
    id  _callback;
}

@property (atomic, readwrite, copy) id callback;

- (void).cxx_destruct;
- (void)callCallback:(bool)arg1 error:(id)arg2;
- (id)callback;
- (id)initWithCallback:(id)arg1;
- (void)setCallback:(id)arg1;

@end
