/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPageLayout : NSObject {
    NSMutableArray * _accessoryControllers;
    void * _contextInfo;
    id  _delegate;
    SEL  _didEndSelector;
    NSPrintInfo * _originalPrintInfo;
    NSPrintInfo * _presentedPrintInfo;
    /* Warning: unhandled array encoding: '[4@]' */ id  _reserved;
    NSWindowController * _windowController;
}

@property (atomic, readonly, copy) NSArray *accessoryControllers;
@property (atomic, readonly) NSPrintInfo *printInfo;

+ (id)pageLayout;

- (void)_sheet:(id)arg1 didEndWithResult:(long long)arg2 contextInfo:(void*)arg3;
- (id)accessoryControllers;
- (void)addAccessoryController:(id)arg1;
- (void)beginSheetWithPrintInfo:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)dealloc;
- (id)printInfo;
- (void)removeAccessoryController:(id)arg1;
- (long long)runModal;
- (long long)runModalWithPrintInfo:(id)arg1;

// NSPageLayout (NSDeprecated)

- (id)accessoryView;
- (void)readPrintInfo;
- (void)setAccessoryView:(id)arg1;
- (void)writePrintInfo;

// NSPageLayout (NSDeprecatedLongAgo)

- (void)convertOldFactor:(float*)arg1 newFactor:(float*)arg2;
- (void)pickedButton:(id)arg1;
- (void)pickedOrientation:(id)arg1;
- (void)pickedPaperSize:(id)arg1;
- (void)pickedUnits:(id)arg1;

// NSPageLayout (NSInternalDeprecated_NoWarnings)

- (void)_deprecatedReadPrintInfo;
- (void)_deprecatedWritePrintInfo;

@end
