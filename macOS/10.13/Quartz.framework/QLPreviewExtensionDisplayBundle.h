/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLPreviewExtensionDisplayBundle : QLDisplayBundle <QLRemoteViewControllerDelegate> {
    NSExtension * _extension;
    QLPreviewHostExtensionContext * _extensionContext;
    id  _extensionRequestId;
    QLPreview * _previewContext;
    QLRemoteViewController * _remoteViewController;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, retain) NSExtension *extension;
@property (atomic, readwrite, retain) QLPreviewHostExtensionContext *extensionContext;
@property (atomic, readwrite, retain) id extensionRequestId;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) QLPreview *previewContext;
@property (atomic, readonly) <QLPreviewExtensionContextProtocol> *remoteExtensionContext;
@property (atomic, readwrite, retain) QLRemoteViewController *remoteViewController;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)_serviceCrashError;
- (void)dealloc;
- (id)extension;
- (id)extensionContext;
- (id)extensionRequestId;
- (id)initWithPreview:(struct __QLPreview { }*)arg1 owner:(id)arg2;
- (int)loadWithHints:(id)arg1;
- (id)previewContext;
- (id)quickLookView;
- (id)remoteExtensionContext;
- (id)remoteViewController;
- (void)setExtension:(id)arg1;
- (void)setExtensionContext:(id)arg1;
- (void)setExtensionRequestId:(id)arg1;
- (void)setPreviewContext:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
