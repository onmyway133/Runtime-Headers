/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
 */

@interface NSRemoteMovePanel : NSRemotePanel {
    NSURL * _directoryURL;
    NSURL * _finalURL;
    NSURL * _initialURL;
    NSString * _movePopupFieldLabel;
}

@property (atomic, readwrite, copy) NSURL *URL;
@property (atomic, readwrite, copy) NSURL *directoryURL;
@property (atomic, readonly) NSURL *finalURL;
@property (atomic, readwrite, copy) NSURL *initialURL;
@property (atomic, readwrite, copy) NSString *movePopupFieldLabel;

+ (id)keyPathsForPanelSettings;

- (id)URL;
- (void)_handleDidChangeToDirectoryURLDelegate:(id)arg1;
- (void)_handleValidateURLDelegate:(id)arg1;
- (unsigned long long)_panelType;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)dealloc;
- (id)directoryURL;
- (id)finalURL;
- (id)initialURL;
- (id)movePopupFieldLabel;
- (void)panelCompletedWithNewDocumentRequest;
- (void)panelCompletedWithRequest:(id)arg1;
- (id)serializeSettings;
- (void)setDirectoryURL:(id)arg1;
- (void)setInitialURL:(id)arg1;
- (void)setMovePopupFieldLabel:(id)arg1;
- (void)setURL:(id)arg1;

@end
