/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKScanUIController : NSObject {
    BOOL  _createSingleDocumentReChecked;
    long long  _detectSeparateItemsMode;
    ICScannerFunctionalUnit * _functionalUnit;
    unsigned long long  _functionalUnitType;
    long long  _imageCorrectionType;
    unsigned long long  _overviewScanResolution;
    BOOL  _overviewScanWasCanceled;
    BOOL  _scanButtonEnabled;
    NSMutableArray * _scanResults;
    BOOL  _scanUIEnabled;
    IKScannerDeviceViewHandler * _scannerDeviceViewHandler;
    NSString * _statusText;
    NSMutableArray * _statusTextArray;
}

@property (atomic, readwrite) BOOL createSingleDocumentReChecked;
@property (atomic, readwrite) long long detectSeparateItemsMode;
@property (nonatomic, readwrite) ICScannerFunctionalUnit *functionalUnit;
@property (atomic, readwrite) unsigned long long functionalUnitType;
@property (atomic, readonly) BOOL hasFunctionalUnit;
@property (atomic, readwrite) long long imageCorrectionType;
@property (atomic, readwrite) BOOL overviewScanWasCanceled;
@property (atomic, readwrite) BOOL scanButtonEnabled;
@property (atomic, readwrite) BOOL scanUIEnabled;
@property (atomic, readwrite) IKScannerDeviceViewHandler *scannerDeviceViewHandler;
@property (atomic, readwrite, retain) NSString *statusText;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromUnit:(unsigned long long)arg2 toUnit:(unsigned long long)arg3 resolution:(double)arg4;

- (void)addScanResult:(id)arg1;
- (void)cleanup;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromUnit:(unsigned long long)arg2 toUnit:(unsigned long long)arg3 resolution:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertSelectionRectToInchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)createSingleDocumentReChecked;
- (void)dealloc;
- (long long)detectSeparateItemsMode;
- (void)didCompleteScanToURL:(id)arg1;
- (void)didCompleteScansToURLs:(id)arg1;
- (void)didReceiveButtonPress:(id)arg1;
- (void)didScanToURLNotProcessedYet:(id)arg1;
- (void)downloadsDirectoryChanged:(id)arg1;
- (void)finishedScanSelectionAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })flipInchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)functionalUnit;
- (unsigned long long)functionalUnitType;
- (void)functionalUnitWillSwitchAway:(id)arg1;
- (BOOL)hasFunctionalUnit;
- (long long)imageCorrectionType;
- (id)imageFlow:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (BOOL)isExecutableFileAtPath:(id)arg1;
- (unsigned long long)numberOfItemsInImageFlow:(id)arg1;
- (void)overviewImageChanged;
- (BOOL)overviewScanWasCanceled;
- (void)pathControlChanged:(id)arg1;
- (void)pathControlChangedApp:(id)arg1;
- (void)pathControlChangedDir:(id)arg1;
- (void)popStatusText;
- (void)postProcessApplicationChanged:(id)arg1;
- (void)pushStatusText:(id)arg1;
- (BOOL)scanButtonEnabled;
- (void)scanFailed:(id)arg1 error:(id)arg2;
- (id)scanInfoForURL:(id)arg1;
- (BOOL)scanUIEnabled;
- (id)scannerDeviceViewHandler;
- (void)selfTestFailed:(id)arg1;
- (void)sendScanResults:(id)arg1 toApplication:(id)arg2;
- (void)setCreateSingleDocumentReChecked:(BOOL)arg1;
- (void)setDetectSeparateItemsMode:(long long)arg1;
- (void)setFunctionalUnit:(id)arg1;
- (void)setFunctionalUnitType:(unsigned long long)arg1;
- (void)setImageCorrectionType:(long long)arg1;
- (void)setOverviewScanWasCanceled:(BOOL)arg1;
- (void)setScanButtonEnabled:(BOOL)arg1;
- (void)setScanUIEnabled:(BOOL)arg1;
- (void)setScannerDeviceViewHandler:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)setTempStatusText:(id)arg1 duration:(long long)arg2;
- (void)setup;
- (id)statusText;

@end
