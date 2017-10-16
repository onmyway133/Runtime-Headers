/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPrintPanel : NSObject {
    NSMutableArray * _accessoryControllers;
    void * _contextInfo;
    NSString * _defaultButtonTitle;
    id  _delegate;
    SEL  _didEndSelector;
    NSString * _helpAnchor;
    NSString * _jobStyleHint;
    long long  _options;
    NSPrintInfo * _originalPrintInfo;
    NSPrintInfo * _presentedPrintInfo;
    id  _previewController;
    /* Warning: unhandled array encoding: '[2@]' */ id  _reserved;
    NSView * _thumbnailView;
    NSWindowController * _windowController;
}

@property (atomic, readonly, copy) NSArray *accessoryControllers;
@property (atomic, readwrite, copy) NSString *helpAnchor;
@property (atomic, readwrite, copy) NSString *jobStyleHint;
@property (atomic, readwrite) unsigned long long options;
@property (atomic, readonly) NSPrintInfo *printInfo;

+ (id)printPanel;

- (unsigned int)_optionsForShowingAsSheet:(BOOL)arg1;
- (void)_sheet:(id)arg1 didEndWithResult:(long long)arg2 contextInfo:(void*)arg3;
- (id)accessoryControllers;
- (void)addAccessoryController:(id)arg1;
- (void)beginSheetWithPrintInfo:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)dealloc;
- (id)defaultButtonTitle;
- (id)helpAnchor;
- (id)init;
- (id)jobStyleHint;
- (unsigned long long)options;
- (id)printInfo;
- (void)removeAccessoryController:(id)arg1;
- (long long)runModal;
- (long long)runModalWithPrintInfo:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setHelpAnchor:(id)arg1;
- (void)setJobStyleHint:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

// NSPrintPanel (NSDeprecated)

- (id)accessoryView;
- (void)finalWritePrintInfo;
- (void)setAccessoryView:(id)arg1;
- (void)updateFromPrintInfo;

// NSPrintPanel (NSDeprecatedLongAgo)

- (void)pickedAllPages:(id)arg1;
- (void)pickedButton:(id)arg1;
- (void)pickedLayoutList:(id)arg1;

// NSPrintPanel (NSInternal)

- (void)_setPreviewController:(id)arg1;

// NSPrintPanel (NSInternalDeprecated_NoWarnings)

- (id)_deprecatedAccessoryView;
- (void)_deprecatedFinalWritePrintInfo;
- (void)_deprecatedSetAccessoryView:(id)arg1;
- (void)_deprecatedUpdateFromPrintInfo;

// NSPrintPanel (NSPrivate)

- (long long)_runModalWithPrintInfo:(id)arg1;
- (void)_setThumbnailView:(id)arg1;
- (id)_thumbnailView;

@end