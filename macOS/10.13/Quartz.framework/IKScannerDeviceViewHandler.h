/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKScannerDeviceViewHandler : NSObject <ICDeviceDelegate> {
    BOOL  _addAutoDetectionToScanSizeControl;
    IKScanUIControllerAdvanced * _advancedController;
    IKScanUIViewAdvanced * _advancedView;
    double  _compressionQuality;
    <ICDeviceDelegate><IKScannerDeviceViewDelegate><IKScannerDeviceViewDelegateExtended> * _delegate;
    ICDeviceBrowser * _deviceBrowser;
    BOOL  _displaysDeviceSelectorControl;
    BOOL  _displaysDocumentNameControl;
    BOOL  _displaysDoneButton;
    BOOL  _displaysDownloadsDirectoryControl;
    BOOL  _displaysFileFormatControl;
    BOOL  _displaysImageCorrectionControl;
    BOOL  _displaysPostProcessApplicationControl;
    BOOL  _displaysScanSizeControl;
    NSString * _documentName;
    NSURL * _downloadsDirectory;
    long long  _errorCondition;
    NSString * _fileFormat;
    BOOL  _finalScanInProgress;
    BOOL  _hasDisplayModeAdvanced;
    BOOL  _hasDisplayModeSimple;
    BOOL  _hideStatusText;
    IKScan * _ikScan;
    BOOL  _isInInterfaceBuilderApp;
    BOOL  _isInInterfaceBuilderSimulator;
    long long  _lastValidMode;
    long long  _mode;
    IKScannerNoDeviceView * _noDeviceView;
    BOOL  _noDeviceViewMode;
    NSString * _noScannerAvailableText;
    NSString * _overviewControlLabel;
    NSString * _overviewControlLabelDisplay;
    BOOL  _overviewScanInProgress;
    long long  _pendingICACall;
    NSURL * _postProcessApplication;
    BOOL  _preferPostProcessApplication;
    BOOL  _reviewSimpleScanResults;
    NSMutableArray * _scanAreas;
    NSString * _scanControlLabel;
    NSString * _scanControlLabelDisplay;
    BOOL  _scanInProgress;
    ICScannerDevice * _scannerDevice;
    ICScannerFunctionalUnit * _scannerFunctionalUnit;
    BOOL  _scannerIsReady;
    NSArray * _scannerNotAvailableTLO;
    IKScannerDeviceView * _scannerView;
    IKScanUIControllerSimple * _simpleController;
    unsigned long long  _simpleScanDocumentType;
    NSString * _simpleScanFileFormat;
    unsigned long long  _simpleScanOverviewResolution;
    IKScanUIViewSimple * _simpleView;
    NSString * _statusText;
    NSMutableArray * _statusTextArray;
    NSArray * _supportedFileFormats;
    BOOL  _switchingToLastUsedFunctionalUnit;
    long long  _transferMode;
    NSURL * _userSelectedURL;
    BOOL  _virtualScannerMode;
    BOOL  _windowNotificationsInstalled;
}

@property (nonatomic, readwrite) BOOL addAutoDetectionToScanSizeControl;
@property (atomic, readwrite) double compressionQuality;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <ICDeviceDelegate><IKScannerDeviceViewDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) ICDeviceBrowser *deviceBrowser;
@property (nonatomic, readwrite) BOOL displaysDeviceSelectorControl;
@property (nonatomic, readwrite) BOOL displaysDocumentNameControl;
@property (nonatomic, readwrite) BOOL displaysDoneButton;
@property (nonatomic, readwrite) BOOL displaysDownloadsDirectoryControl;
@property (nonatomic, readwrite) BOOL displaysFileFormatControl;
@property (nonatomic, readwrite) BOOL displaysImageCorrectionControl;
@property (nonatomic, readwrite) BOOL displaysPostProcessApplicationControl;
@property (nonatomic, readwrite) BOOL displaysScanSizeControl;
@property (nonatomic, readwrite, copy) NSString *documentName;
@property (atomic, readwrite, retain) NSURL *downloadsDirectory;
@property (atomic, readwrite) long long errorCondition;
@property (nonatomic, readwrite, copy) NSString *fileFormat;
@property (atomic, readwrite) BOOL finalScanInProgress;
@property (nonatomic, readwrite) BOOL hasDisplayModeAdvanced;
@property (nonatomic, readwrite) BOOL hasDisplayModeSimple;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) BOOL hideStatusText;
@property (atomic, readwrite, retain) IKScan *ikScan;
@property (atomic, readwrite) BOOL isInInterfaceBuilderApp;
@property (atomic, readwrite) BOOL isInInterfaceBuilderSimulator;
@property (atomic, readwrite) long long lastValidMode;
@property (nonatomic, readwrite) long long mode;
@property (atomic, readwrite, copy) NSString *noScannerAvailableText;
@property (nonatomic, readwrite, copy) NSString *overviewControlLabel;
@property (nonatomic, readwrite, copy) NSString *overviewControlLabelDisplay;
@property (atomic, readwrite) BOOL overviewScanInProgress;
@property (atomic, readwrite) long long pendingICACall;
@property (nonatomic, readwrite, retain) NSURL *postProcessApplication;
@property (atomic, readwrite) BOOL preferPostProcessApplication;
@property (nonatomic, readwrite) BOOL reviewSimpleScanResults;
@property (atomic, readwrite, retain) NSMutableArray *scanAreas;
@property (nonatomic, readwrite, copy) NSString *scanControlLabel;
@property (nonatomic, readwrite, copy) NSString *scanControlLabelDisplay;
@property (atomic, readwrite) BOOL scanInProgress;
@property (nonatomic, readwrite) ICScannerDevice *scannerDevice;
@property (atomic, readwrite) ICScannerFunctionalUnit *scannerFunctionalUnit;
@property (atomic, readwrite) BOOL scannerIsReady;
@property (atomic, readwrite, retain) NSArray *scannerNotAvailableTLO;
@property (atomic, readonly) IKScannerDeviceView *scannerView;
@property (atomic, readwrite) unsigned long long simpleScanDocumentType;
@property (atomic, readwrite, copy) NSString *simpleScanFileFormat;
@property (atomic, readwrite) unsigned long long simpleScanOverviewResolution;
@property (atomic, readwrite, copy) NSString *statusText;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) NSArray *supportedFileFormats;
@property (nonatomic, readwrite) long long transferMode;
@property (atomic, readwrite, retain) NSURL *userSelectedURL;

- (BOOL)addAutoDetectionToScanSizeControl;
- (void)addTroubleShootingInfo:(id)arg1;
- (void)adjustUIToFunctionalUnit;
- (void)adjustUIToScanner;
- (void)appWillQuit:(id)arg1;
- (void)awakeFromNibCalled;
- (BOOL)clientRespondsToDidScanToBandDataWithScannerDevice:(id)arg1;
- (BOOL)clientRespondsToDidScanToURLWithScannerDevice:(id)arg1;
- (void)closeCurrentScannerSession:(id)arg1;
- (double)compressionQuality;
- (void)dealloc;
- (id)delegate;
- (void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
- (void)device:(id)arg1 didEncounterError:(id)arg2;
- (void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
- (void)device:(id)arg1 didReceiveButtonPress:(id)arg2;
- (void)device:(id)arg1 didReceiveStatusInformation:(id)arg2;
- (id)deviceBrowser;
- (void)deviceBrowser:(id)arg1 deviceDidChangeSharingState:(id)arg2;
- (void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(BOOL)arg3;
- (void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(BOOL)arg3;
- (void)deviceBrowser:(id)arg1 requestsSelectDevice:(id)arg2;
- (void)deviceDidBecomeReady:(id)arg1;
- (void)deviceDidChangeName:(id)arg1;
- (void)deviceDidChangeSharingState:(id)arg1;
- (void)deviceWillEjectOrDisconnect:(id)arg1;
- (void)didRemoveDevice:(id)arg1;
- (void)didSelectFunctionalUnitAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3;
- (BOOL)displaysDeviceSelectorControl;
- (BOOL)displaysDocumentNameControl;
- (BOOL)displaysDoneButton;
- (BOOL)displaysDownloadsDirectoryControl;
- (BOOL)displaysFileFormatControl;
- (BOOL)displaysImageCorrectionControl;
- (BOOL)displaysPostProcessApplicationControl;
- (BOOL)displaysScanSizeControl;
- (void)documentLoadedChanged;
- (id)documentName;
- (void)doneWithScanner;
- (id)downloadsDirectory;
- (long long)errorCondition;
- (id)fileFormat;
- (BOOL)finalScanInProgress;
- (void)functionalUnitWillSwitchAway:(id)arg1;
- (void)handleDidMoveToWindow;
- (void)handleUserActionWithNoDeviceConnected;
- (BOOL)hasDisplayModeAdvanced;
- (BOOL)hasDisplayModeSimple;
- (BOOL)hideStatusText;
- (id)ikScan;
- (id)initWithIKScannerDeviceView:(id)arg1;
- (void)installAdvancedUI;
- (void)installNoDeviceUI_ifNeeded:(BOOL)arg1;
- (void)installScannerDeviceBrowser;
- (void)installSimpleUI;
- (void)installWindowNotifications:(id)arg1;
- (BOOL)isInInterfaceBuilderApp;
- (BOOL)isInInterfaceBuilderSimulator;
- (BOOL)isSwitchingFunctionalUnitOnLoad;
- (long long)lastValidMode;
- (BOOL)memoryTransferAndDelegateDoesNotHandlePostprocess;
- (long long)mode;
- (id)noScannerAvailableText;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overviewControlLabel;
- (id)overviewControlLabelDisplay;
- (void)overviewImageChanged;
- (BOOL)overviewScanInProgress;
- (long long)pendingICACall;
- (id)postProcessApplication;
- (BOOL)preferPostProcessApplication;
- (void)progressCancelButtonPressed;
- (void)removeAdvancedUI;
- (void)removeScannerDeviceBrowser;
- (void)removeSimpleUI;
- (int)requestVirtualScannerScan:(id)arg1;
- (int)requestVirtualScannerSetFunctionalUnit:(id)arg1;
- (void)restoreDefaultSettings;
- (BOOL)reviewSimpleScanResults;
- (void)saveDefaultSettings;
- (id)scanAreas;
- (id)scanControlLabel;
- (id)scanControlLabelDisplay;
- (BOOL)scanInProgress;
- (id)scannerDevice;
- (void)scannerDevice:(id)arg1 didCompleteOverviewScanWithError:(id)arg2;
- (void)scannerDevice:(id)arg1 didCompleteScanWithError:(id)arg2;
- (void)scannerDevice:(id)arg1 didScanToBandData:(id)arg2;
- (void)scannerDevice:(id)arg1 didScanToURL:(id)arg2;
- (void)scannerDevice:(id)arg1 didScanToURL:(id)arg2 data:(id)arg3;
- (void)scannerDevice:(id)arg1 didSelectFunctionalUnit:(id)arg2 error:(id)arg3;
- (void)scannerDeviceDidBecomeAvailable:(id)arg1;
- (id)scannerFunctionalUnit;
- (BOOL)scannerIsReady;
- (id)scannerNotAvailableTLO;
- (id)scannerView;
- (void)setAddAutoDetectionToScanSizeControl:(BOOL)arg1;
- (void)setCompressionQuality:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayModeByTag:(id)arg1;
- (void)setDisplaysDeviceSelectorControl:(BOOL)arg1;
- (void)setDisplaysDocumentNameControl:(BOOL)arg1;
- (void)setDisplaysDoneButton:(BOOL)arg1;
- (void)setDisplaysDownloadsDirectoryControl:(BOOL)arg1;
- (void)setDisplaysFileFormatControl:(BOOL)arg1;
- (void)setDisplaysImageCorrectionControl:(BOOL)arg1;
- (void)setDisplaysPostProcessApplicationControl:(BOOL)arg1;
- (void)setDisplaysScanSizeControl:(BOOL)arg1;
- (void)setDocumentName:(id)arg1;
- (void)setDownloadsDirectory:(id)arg1;
- (void)setErrorCondition:(long long)arg1;
- (void)setFileFormat:(id)arg1;
- (void)setFinalScanInProgress:(BOOL)arg1;
- (void)setHasDisplayModeAdvanced:(BOOL)arg1;
- (void)setHasDisplayModeSimple:(BOOL)arg1;
- (void)setHideStatusText:(BOOL)arg1;
- (void)setIkScan:(id)arg1;
- (void)setIsInInterfaceBuilderApp:(BOOL)arg1;
- (void)setIsInInterfaceBuilderSimulator:(BOOL)arg1;
- (void)setLastValidMode:(long long)arg1;
- (void)setMode:(long long)arg1;
- (void)setModeAndAdjust:(long long)arg1;
- (void)setNoScannerAvailableText:(id)arg1;
- (void)setOverviewControlLabel:(id)arg1;
- (void)setOverviewControlLabelDisplay:(id)arg1;
- (void)setOverviewScanInProgress:(BOOL)arg1;
- (void)setPendingICACall:(long long)arg1;
- (void)setPostProcessApplication:(id)arg1;
- (void)setPreferPostProcessApplication:(BOOL)arg1;
- (void)setReviewSimpleScanResults:(BOOL)arg1;
- (void)setScanAreas:(id)arg1;
- (void)setScanControlLabel:(id)arg1;
- (void)setScanControlLabelDisplay:(id)arg1;
- (void)setScanInProgress:(BOOL)arg1;
- (void)setScannerDevice:(id)arg1;
- (void)setScannerFunctionalUnit:(id)arg1;
- (void)setScannerIsReady:(BOOL)arg1;
- (void)setScannerNotAvailableTLO:(id)arg1;
- (void)setSimpleScanDocumentType:(unsigned long long)arg1;
- (void)setSimpleScanFileFormat:(id)arg1;
- (void)setSimpleScanOverviewResolution:(unsigned long long)arg1;
- (void)setStatusText:(id)arg1;
- (void)setSupportedFileFormats:(id)arg1;
- (void)setTransferMode:(long long)arg1;
- (void)setUserSelectedURL:(id)arg1;
- (void)setup;
- (void)setupSetupNewScannerSession:(id)arg1;
- (BOOL)shouldDoOverviewScanAfterFunctionaUnitSwitch;
- (unsigned long long)simpleScanDocumentType;
- (id)simpleScanFileFormat;
- (unsigned long long)simpleScanOverviewResolution;
- (id)statusText;
- (id)supportedFileFormats;
- (void)timeOutOpenSessionRequest:(id)arg1;
- (long long)transferMode;
- (void)uninstallWindowNotifications;
- (void)updateScannerDeviceUI;
- (void)updateSizeUI;
- (void)updateUI;
- (void)userDidSelectDownloadsDirectory:(id)arg1;
- (void)userDidSelectPostProcessApplication:(id)arg1;
- (void)userPressedDoneButton:(id)arg1;
- (void)userRequestsSwitchToFunctionalUnit:(unsigned long long)arg1;
- (id)userSelectedURL;
- (void)viewDidMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWasRemovedFromSuperview;
- (void)windowWillClose:(id)arg1;
- (void)windowWillClose_closeSession:(id)arg1;

@end
