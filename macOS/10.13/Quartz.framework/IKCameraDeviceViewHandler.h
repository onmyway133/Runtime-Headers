/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKCameraDeviceViewHandler : NSObject <ICCameraDeviceDelegate, NSTableViewDataSource, NSTableViewDelegate> {
    BOOL  _allowSingleSelectionOnly;
    long long  _alreadyDownloaded;
    NSObject<OS_dispatch_source> * _arrangeTimer;
    IKCameraBackgroundView * _backgroundView;
    NSArray * _backgroundViewTLO;
    int  _cameraBusyCounter;
    ICCameraDevice * _cameraDevice;
    BOOL  _cameraDeviceHasOpenSession;
    NSMutableArray * _cameraItems;
    NSArrayController * _cameraItemsController;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _cameraItemsLock;
    BOOL  _cameraSupportsDelete;
    IKCameraDeviceView * _cameraView;
    BOOL  _canDeleteSelectedItems;
    BOOL  _canDownloadAll;
    BOOL  _canDownloadSelectedItems;
    BOOL  _canRotateSelectedItemsLeft;
    BOOL  _canRotateSelectedItemsRight;
    long long  _clickedIconCellIndex;
    NSView * _container;
    NSArray * _containerTLO;
    NSMenu * _contextualMenu;
    id  _delegate;
    NSString * _deleteButtonToolTip;
    BOOL  _didDownloadViaDoubleClick;
    BOOL  _didDownloadViaDragAndDrop;
    BOOL  _didSetupWindowNotifications;
    long long  _displayMode;
    BOOL  _displaysDownloadsDirectoryControl;
    BOOL  _displaysPostProcessApplicationControl;
    NSString * _downloadAllControlLabel;
    NSString * _downloadAllControlLabelDisplay;
    NSMutableArray * _downloadErrors;
    NSString * _downloadSelectedControlLabel;
    NSString * _downloadSelectedControlLabelDisplay;
    NSMutableArray * _downloadedFiles;
    NSURL * _downloadsDirectory;
    NSURL * _dragNDropDestination;
    BOOL  _hasDisplayModeIcon;
    BOOL  _hasDisplayModeSummary;
    BOOL  _hasDisplayModeTable;
    BOOL  _hideModeSelectUI;
    BOOL  _hidePathControl;
    BOOL  _hidePopupUI;
    unsigned long long  _iconSizeIconView;
    unsigned long long  _iconSizeTableView;
    IKCameraIconView * _iconView;
    NSArray * _iconViewTLO;
    BOOL  _isDeletingSelectedItems;
    BOOL  _isDownloadingAll;
    BOOL  _isDownloadingSelected;
    BOOL  _isInInterfaceBuilderApp;
    BOOL  _isInInterfaceBuilderSimulator;
    NSMutableArray * _itemsToDownload;
    long long  _maxIconSize;
    BOOL  _needsReIndex;
    NSString * _noCameraAvailableText;
    long long  _numberOfItemsAlreadyDeleted;
    long long  _numberOfItemsToDelete;
    BOOL  _observingCameraProperties;
    IKPathPopupButton * _pathPopup;
    long long  _pendingDownloads;
    NSMutableIndexSet * _pendingReloadCellIndexSet;
    NSURL * _postProcessApplication;
    BOOL  _postProcessingAppHandlesSidecarFiles;
    BOOL  _preferPostProcessApplication;
    NSString * _prefsPrefix;
    NSProgressIndicator * _progressIndicator;
    IKCameraResourceHandler * _resourceHandler;
    NSArray * _sortDescriptors;
    NSString * _statusText;
    NSArray * _supportedFileTypes;
    BOOL  _supportsSelection;
    IKCameraTableView * _tableView;
    IKNStatusView * _tableViewStatus;
    NSArray * _tableViewTLO;
    long long  _totalSizeToDownload;
    long long  _transferMode;
    BOOL  _usesFilterProc;
    BOOL  _windowIsActive;
}

@property (atomic, readwrite) BOOL allowSingleSelectionOnly;
@property (atomic, readwrite, retain) NSArray *backgroundViewTLO;
@property (nonatomic, readwrite) ICCameraDevice *cameraDevice;
@property (atomic, readwrite) BOOL cameraDeviceHasOpenSession;
@property (atomic, readwrite) NSMutableArray *cameraItems;
@property (atomic, readwrite) NSArrayController *cameraItemsController;
@property (nonatomic, readwrite) BOOL cameraSupportsDelete;
@property (atomic, readwrite) BOOL canDeleteSelectedItems;
@property (atomic, readwrite) BOOL canDownloadAll;
@property (atomic, readwrite) BOOL canDownloadSelectedItems;
@property (atomic, readwrite) BOOL canRotateSelectedItemsLeft;
@property (atomic, readwrite) BOOL canRotateSelectedItemsRight;
@property (atomic, readwrite, retain) NSArray *containerTLO;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) <IKCameraDeviceViewDelegate><ICCameraDeviceDelegate> *delegate;
@property (atomic, readwrite, copy) NSString *deleteButtonToolTip;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) long long displayMode;
@property (nonatomic, readwrite) BOOL displaysDownloadsDirectoryControl;
@property (nonatomic, readwrite) BOOL displaysPostProcessApplicationControl;
@property (nonatomic, readwrite, copy) NSString *downloadAllControlLabel;
@property (atomic, readwrite, copy) NSString *downloadAllControlLabelDisplay;
@property (nonatomic, readwrite, copy) NSString *downloadSelectedControlLabel;
@property (atomic, readwrite, copy) NSString *downloadSelectedControlLabelDisplay;
@property (atomic, readwrite, retain) NSURL *downloadsDirectory;
@property (atomic, readwrite, retain) NSURL *dragNDropDestination;
@property (nonatomic, readwrite) BOOL hasDisplayModeIcon;
@property (nonatomic, readwrite) BOOL hasDisplayModeSummary;
@property (nonatomic, readwrite) BOOL hasDisplayModeTable;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) BOOL hideModeSelectUI;
@property (atomic, readwrite) BOOL hidePathControl;
@property (nonatomic, readwrite) BOOL hidePopupUI;
@property (atomic, readwrite) unsigned long long iconSize;
@property (atomic, readwrite) unsigned long long iconSizeIconView;
@property (atomic, readwrite) unsigned long long iconSizeTableView;
@property (atomic, readwrite, retain) NSArray *iconViewTLO;
@property (atomic, readwrite) BOOL isDeletingSelectedItems;
@property (atomic, readwrite) BOOL isDownloadingAll;
@property (atomic, readwrite) BOOL isDownloadingSelected;
@property (atomic, readwrite) BOOL isInInterfaceBuilderApp;
@property (atomic, readwrite) BOOL isInInterfaceBuilderSimulator;
@property (atomic, readonly) long long itemCount;
@property (atomic, readwrite) long long maxIconSize;
@property (atomic, readwrite, copy) NSString *noCameraAvailableText;
@property (nonatomic, readwrite, retain) NSURL *postProcessApplication;
@property (atomic, readwrite) BOOL preferPostProcessApplication;
@property (atomic, readwrite, copy) NSString *prefsPrefix;
@property (atomic, readwrite) IKCameraResourceHandler *resourceHandler;
@property (atomic, readonly) long long selectionCount;
@property (atomic, readwrite, retain) NSArray *sortDescriptors;
@property (nonatomic, readwrite, copy) NSString *statusText;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, copy) NSArray *supportedFileTypes;
@property (atomic, readwrite) BOOL supportsSelection;
@property (atomic, readwrite, retain) NSArray *tableViewTLO;
@property (atomic, readwrite) long long transferMode;
@property (atomic, readwrite) BOOL usesFilterProc;
@property (atomic, readwrite) BOOL windowIsActive;

- (id)addItemsFromArray:(id)arg1;
- (void)addTroubleShootingInfo:(id)arg1;
- (void)adjustColumnWidth:(id)arg1;
- (BOOL)allowDeleteAfterDownload;
- (BOOL)allowSingleSelectionOnly;
- (void)appWillQuit:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)awakeFromNib;
- (id)backgroundViewTLO;
- (id)cameraDevice;
- (BOOL)cameraDeviceHasOpenSession;
- (void)cameraDeviceWasAssigned;
- (id)cameraItems;
- (id)cameraItemsController;
- (BOOL)cameraSupportsDelete;
- (BOOL)canDeleteSelectedItems;
- (BOOL)canDownloadAll;
- (BOOL)canDownloadSelectedItems;
- (BOOL)canRotateSelectedItemsLeft;
- (BOOL)canRotateSelectedItemsRight;
- (void)cancelDownload;
- (void)checkItemsInDownloadDirectory;
- (void)cleanup;
- (id)containerTLO;
- (void)dealloc;
- (void)delayRearrange;
- (id)delegate;
- (id)deleteButtonToolTip;
- (void)deleteSelectedItems:(id)arg1;
- (void)destinationURLChanged;
- (void)deviceDidChangeName;
- (void)deviceDidChangeSharingState;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
- (void)didReceiveDownloadProgressForFile:(id)arg1 downloadedBytes:(long long)arg2 maxBytes:(long long)arg3;
- (void)didRemoveItems:(id)arg1;
- (void)displayHelp:(id)arg1;
- (long long)displayMode;
- (BOOL)displaysDownloadsDirectoryControl;
- (BOOL)displaysPostProcessApplicationControl;
- (void)doCheckItemsInDownloadDirectory;
- (void)doDownloadAllItems:(id)arg1;
- (void)doDownloadSelectedItems:(id)arg1;
- (id)downloadAllControlLabel;
- (id)downloadAllControlLabelDisplay;
- (void)downloadAllItems:(id)arg1;
- (void)downloadDone;
- (void)downloadItems:(id)arg1 toURL:(id)arg2 isDragOperation:(BOOL)arg3 isDoubleClick:(BOOL)arg4;
- (void)downloadNextItem;
- (id)downloadSelectedControlLabel;
- (id)downloadSelectedControlLabelDisplay;
- (void)downloadSelectedItems:(id)arg1;
- (id)downloadsDirectory;
- (id)dragNDropDestination;
- (id)dragTypes;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint { double x1; double x2; })arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)dumpDownloadErrors;
- (void)fileCheck:(id)arg1 path:(id)arg2;
- (id)fileNamesForDropDestination:(id)arg1;
- (id)finalDownloadsDirectory;
- (void)finalize;
- (void)fireArrange;
- (void)forceItemUpdate:(id)arg1;
- (BOOL)hasDisplayModeIcon;
- (BOOL)hasDisplayModeSummary;
- (BOOL)hasDisplayModeTable;
- (BOOL)hideModeSelectUI;
- (BOOL)hidePathControl;
- (BOOL)hidePopupUI;
- (unsigned long long)iconSize;
- (unsigned long long)iconSizeIconView;
- (unsigned long long)iconSizeTableView;
- (id)iconViewTLO;
- (id)ikCameraItemForICCameraItem:(id)arg1;
- (void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (void)imageBrowser:(id)arg1 cellWasRightClickedAtIndex:(unsigned long long)arg2 withEvent:(id)arg3;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (void)imageBrowserSelectionDidChange:(id)arg1;
- (void)importItems:(id)arg1;
- (long long)indexOfICCameraItem:(id)arg1;
- (long long)indexOfIKCameraItem:(id)arg1;
- (id)initWithIKCameraDeviceView:(id)arg1;
- (void)installBackgroundView;
- (void)installWindowNotifications:(id)arg1;
- (BOOL)isDeletingSelectedItems;
- (BOOL)isDownloadingAll;
- (BOOL)isDownloadingSelected;
- (BOOL)isInInterfaceBuilderApp;
- (BOOL)isInInterfaceBuilderSimulator;
- (long long)itemCount;
- (id)itemCountSelectionString;
- (id)itemCountString;
- (void)loadIconSizeFromPrefs;
- (long long)maxIconSize;
- (id)mediaController;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (long long)mode;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)noAutomaticTask:(id)arg1;
- (id)noCameraAvailableText;
- (void)notifyDelegateAboutAddedItems:(id)arg1;
- (void)numberOfItemsChanged;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pathControlChangedApp:(id)arg1;
- (void)pathControlChangedDir:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (id)placeholderStringForOpenWith;
- (void)postProcess:(id)arg1;
- (id)postProcessApplication;
- (BOOL)preferPostProcessApplication;
- (id)prefsPrefix;
- (void)reloadCellsInIndexSet:(id)arg1;
- (void)reloadData;
- (id)resourceHandler;
- (void)restoreCurrentSettings;
- (void)revealInFinder:(id)arg1;
- (void)rotateLeft:(id)arg1;
- (void)rotateRight:(id)arg1;
- (void)saveCurrentSettings;
- (long long)selectionCount;
- (void)setAllowSingleSelectionOnly:(BOOL)arg1;
- (void)setBackgroundViewTLO:(id)arg1;
- (void)setCameraDevice:(id)arg1;
- (void)setCameraDeviceHasOpenSession:(BOOL)arg1;
- (void)setCameraItems:(id)arg1;
- (void)setCameraItemsController:(id)arg1;
- (void)setCameraSupportsDelete:(BOOL)arg1;
- (void)setCanDeleteSelectedItems:(BOOL)arg1;
- (void)setCanDownloadAll:(BOOL)arg1;
- (void)setCanDownloadSelectedItems:(BOOL)arg1;
- (void)setCanRotateSelectedItemsLeft:(BOOL)arg1;
- (void)setCanRotateSelectedItemsRight:(BOOL)arg1;
- (void)setContainerTLO:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButtonToolTip:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setDisplaysDownloadsDirectoryControl:(BOOL)arg1;
- (void)setDisplaysPostProcessApplicationControl:(BOOL)arg1;
- (void)setDownloadAllControlLabel:(id)arg1;
- (void)setDownloadAllControlLabelDisplay:(id)arg1;
- (void)setDownloadSelectedControlLabel:(id)arg1;
- (void)setDownloadSelectedControlLabelDisplay:(id)arg1;
- (void)setDownloadsDirectory:(id)arg1;
- (void)setDragNDropDestination:(id)arg1;
- (void)setHasDisplayModeIcon:(BOOL)arg1;
- (void)setHasDisplayModeSummary:(BOOL)arg1;
- (void)setHasDisplayModeTable:(BOOL)arg1;
- (void)setHideModeSelectUI:(BOOL)arg1;
- (void)setHidePathControl:(BOOL)arg1;
- (void)setHidePopupUI:(BOOL)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setIconSizeIconView:(unsigned long long)arg1;
- (void)setIconSizeTableView:(unsigned long long)arg1;
- (void)setIconViewTLO:(id)arg1;
- (void)setIsDeletingSelectedItems:(BOOL)arg1;
- (void)setIsDownloadingAll:(BOOL)arg1;
- (void)setIsDownloadingSelected:(BOOL)arg1;
- (void)setIsInInterfaceBuilderApp:(BOOL)arg1;
- (void)setIsInInterfaceBuilderSimulator:(BOOL)arg1;
- (void)setMaxIconSize:(long long)arg1;
- (void)setMode:(long long)arg1;
- (void)setNoCameraAvailableText:(id)arg1;
- (void)setPostProcessApplication:(id)arg1;
- (void)setPreferPostProcessApplication:(BOOL)arg1;
- (void)setPrefsPrefix:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setResourceHandler:(id)arg1;
- (void)setSelectionIndexes:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)setSupportedFileTypes:(id)arg1;
- (void)setSupportsSelection:(BOOL)arg1;
- (void)setTableViewTLO:(id)arg1;
- (void)setTransferMode:(long long)arg1;
- (void)setUsesFilterProc:(BOOL)arg1;
- (void)setWindowIsActive:(BOOL)arg1;
- (void)setup;
- (void)setupIconView;
- (void)setupPathControl:(id)arg1;
- (void)setupTableView;
- (void)setupView;
- (BOOL)shouldDisplayItem:(id)arg1;
- (BOOL)shouldDownloadResource:(id)arg1;
- (id)sortDescriptors;
- (void)startDownloadAllItems;
- (void)startDownloadSelectedItems:(BOOL)arg1 isDoubleClick:(BOOL)arg2;
- (void)startDownloadingAfterUserCheck:(BOOL)arg1 isDoubleClick:(BOOL)arg2;
- (id)statusText;
- (void)subfolderChanged;
- (id)supportedFileTypes;
- (BOOL)supportsSelection;
- (void)tableView:(id)arg1 cellClicked:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewDoubleClicked:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableViewTLO;
- (void)toggleTableColumn:(id)arg1;
- (long long)transferMode;
- (void)uninstallWindowNotifications;
- (void)updateAllItems;
- (void)updateBackingScaleFactor;
- (void)updateHandlesSidecarFile;
- (void)updateHidePathControl;
- (void)updateItemDisplay:(id)arg1;
- (void)updatePrefsPrefix;
- (BOOL)usesFilterProc;
- (void)viewDidMoveToWindow;
- (void)windowBackingPropertiesChanged:(id)arg1;
- (BOOL)windowIsActive;
- (void)windowStateActivate:(id)arg1;
- (void)windowStateDeactivate:(id)arg1;
- (void)windowWillClose:(id)arg1;

// IKCameraDeviceViewHandler (ICCameraDeviceDelegate)

- (void)cameraDevice:(id)arg1 didAddItem:(id)arg2;
- (void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
- (void)cameraDevice:(id)arg1 didCompleteDeleteFilesWithError:(id)arg2;
- (void)cameraDevice:(id)arg1 didReceiveMetadataForItem:(id)arg2;
- (void)cameraDevice:(id)arg1 didReceiveThumbnailForItem:(id)arg2;
- (void)cameraDevice:(id)arg1 didRemoveItem:(id)arg2;
- (void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
- (void)cameraDevice:(id)arg1 didRenameItems:(id)arg2;
- (void)cameraDeviceDidChangeCapability:(id)arg1;
- (void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
- (void)device:(id)arg1 didEncounterError:(id)arg2;
- (void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
- (void)device:(id)arg1 didReceiveNotification:(id)arg2;
- (void)deviceDidBecomeReady:(id)arg1;
- (void)deviceDidChangeName:(id)arg1;
- (void)deviceDidChangeSharingState:(id)arg1;
- (void)deviceWillEjectOrDisconnect:(id)arg1;
- (void)didRemoveDevice:(id)arg1;
- (void)doneWithCamera;
- (void)handleCloseSessionOrDeviceRemovedWhileDownloading:(id)arg1;

@end
