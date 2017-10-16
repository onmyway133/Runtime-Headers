/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPrintOperation : NSObject

@property (atomic, readwrite, retain) NSPDFPanel *PDFPanel;
@property (atomic, readwrite) BOOL canSpawnSeparateThread;
@property (atomic, readonly) NSGraphicsContext *context;
@property (getter=isCopyingOperation, atomic, readonly) BOOL copyingOperation;
@property (atomic, readonly) long long currentPage;
@property (atomic, readwrite, copy) NSString *jobTitle;
@property (atomic, readwrite) long long pageOrder;
@property (atomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } pageRange;
@property (atomic, readonly) long long preferredRenderingQuality;
@property (atomic, readwrite, copy) NSPrintInfo *printInfo;
@property (atomic, readwrite, retain) NSPrintPanel *printPanel;
@property (atomic, readwrite) BOOL showsPrintPanel;
@property (atomic, readwrite) BOOL showsProgressPanel;
@property (atomic, readonly) NSView *view;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)EPSOperationWithView:(id)arg1 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toData:(id)arg3;
+ (id)EPSOperationWithView:(id)arg1 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toData:(id)arg3 printInfo:(id)arg4;
+ (id)EPSOperationWithView:(id)arg1 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toPath:(id)arg3 printInfo:(id)arg4;
+ (id)PDFOperationWithView:(id)arg1 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toData:(id)arg3;
+ (id)PDFOperationWithView:(id)arg1 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toData:(id)arg3 printInfo:(id)arg4;
+ (id)PDFOperationWithView:(id)arg1 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toPath:(id)arg3 printInfo:(id)arg4;
+ (id)currentOperation;
+ (id)printOperationWithView:(id)arg1;
+ (id)printOperationWithView:(id)arg1 printInfo:(id)arg2;
+ (void)setCurrentOperation:(id)arg1;

- (id)PDFPanel;
- (BOOL)canSpawnSeparateThread;
- (void)cleanUpOperation;
- (id)context;
- (id)createContext;
- (long long)currentPage;
- (BOOL)deliverResult;
- (void)destroyContext;
- (BOOL)isCopyingOperation;
- (id)jobTitle;
- (long long)pageOrder;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pageRange;
- (long long)preferredRenderingQuality;
- (id)printInfo;
- (id)printPanel;
- (BOOL)runOperation;
- (void)runOperationModalForWindow:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)setCanSpawnSeparateThread:(BOOL)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setPDFPanel:(id)arg1;
- (void)setPageOrder:(long long)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setPrintPanel:(id)arg1;
- (void)setShowsPrintPanel:(BOOL)arg1;
- (void)setShowsProgressPanel:(BOOL)arg1;
- (BOOL)showsPrintPanel;
- (BOOL)showsProgressPanel;
- (id)view;

// NSPrintOperation (NSDeprecated)

- (id)accessoryView;
- (id)jobStyleHint;
- (void)setAccessoryView:(id)arg1;
- (void)setJobStyleHint:(id)arg1;
- (void)setShowPanels:(BOOL)arg1;
- (BOOL)showPanels;

// NSPrintOperation (NSInternal)

+ (void)_setPrintEventRetrofitInfo:(id)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_currentPageBounds;
- (id)_effectiveJobTitle;
- (long long)_firstJobPageNumber;
- (long long)_firstRenderPageNumber;
- (void)_forceKnowsPageRangeMessage;
- (void)_invalidatePagination;
- (BOOL)_isCancelledAfterHandlingUserEvents;
- (BOOL)_isLockingFocus;
- (BOOL)_isRenderingBorder;
- (BOOL)_isResponsibleForFileCoordination;
- (long long)_lastJobPageNumber;
- (long long)_lastRenderPageNumber;
- (struct _PrivatePrintOperationInfo { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; id x18; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_19_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_19_1_2; } x19; BOOL x20; BOOL x21; BOOL x22; long long x23; double x24; double x25; double x26; double x27; long long x28; long long x29; struct CGPoint { double x_30_1_1; double x_30_1_2; } x30; unsigned int x31; void *x32; long long x33; long long x34; BOOL x35; long long x36; long long x37; long long x38; id x39; id x40; BOOL x41; id x42; long long x43; id x44; double x45; long long x46; double *x47; long long x48; }*)_operationInfo;
- (double)_pageScaling;
- (long long)_pageSet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_renderingBounds;
- (void)_setLockingFocus:(BOOL)arg1;
- (void)_setPreferredRenderingQuality:(long long)arg1;
- (void)_setRenderingBorder:(BOOL)arg1;
- (BOOL)_tryToSetCurrentPageNumber:(long long)arg1;
- (id)baseAffineTransform;
- (BOOL)isEPSOperation;
- (void)setBaseAffineTransform:(id)arg1;

// Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy

// NSPrintOperation (WebKitExtras)

- (float)_web_availablePaperHeight;
- (float)_web_availablePaperWidth;
- (float)_web_pageSetupScaleFactor;

@end
