/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
 */

@interface MSVSystemDialog : NSObject {
    struct __CFRunLoopSource { } * _activeRunLoopSource;
    MSVSystemDialogOptions * _options;
    id  _pendingCompletion;
    struct __CFUserNotification { } * _presentedUserNotification;
    NSMutableArray * _textFields;
}

@property (nonatomic, readwrite) struct __CFRunLoopSource { }*activeRunLoopSource;
@property (nonatomic, readonly) MSVSystemDialogOptions *options;
@property (nonatomic, readwrite, copy) id pendingCompletion;
@property (nonatomic, readwrite) struct __CFUserNotification { }*presentedUserNotification;
@property (nonatomic, readonly) NSArray *textFields;

+ (id)passwordAlertWithOptions:(id)arg1;
+ (id)systemDialogWithOptions:(id)arg1;

- (void).cxx_destruct;
- (struct __CFRunLoopSource { }*)activeRunLoopSource;
- (void)addTextField:(id)arg1;
- (void)addTextFieldWithTitle:(id)arg1 secure:(BOOL)arg2;
- (void)clearTextFields;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (id)pendingCompletion;
- (void)presentWithCompletion:(id)arg1;
- (struct __CFUserNotification { }*)presentedUserNotification;
- (void)setActiveRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setPendingCompletion:(id)arg1;
- (void)setPresentedUserNotification:(struct __CFUserNotification { }*)arg1;
- (id)textFields;

@end
