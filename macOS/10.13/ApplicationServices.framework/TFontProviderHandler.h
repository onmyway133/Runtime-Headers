/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ATS.framework/Versions/A/Resources/libFontRegistry.dylib
 */

@interface TFontProviderHandler : NSObject <XTFontProviderProtocol> {
    int  fPID;
    TFontProviderClientXPC * fProvider;
    id  fReply;
    NSDictionary * fRequest;
}

@property (nonatomic, readwrite) TFontProviderClientXPC *fProvider;
@property (nonatomic, readwrite, copy) id fReply;
@property (nonatomic, readwrite, retain) NSDictionary *fRequest;

- (void)XTCopyFontsForRequest:(id)arg1 reply:(id)arg2;
- (void)callFontProvider:(id)arg1;
- (void)dealloc;
- (id)fProvider;
- (id)fReply;
- (id)fRequest;
- (id)initWithProvider:(id)arg1 andPID:(int)arg2;
- (void)setFProvider:(id)arg1;
- (void)setFReply:(id)arg1;
- (void)setFRequest:(id)arg1;

@end
