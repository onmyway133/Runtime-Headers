/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocumentControllerMoreIVars : NSObject {
    id  appDidBecomeActiveObserver;
    id  appDidResignActiveObserver;
    BOOL  appIsBecomingActiveDuringOpening;
    BOOL  appIsResigningActiveDuringOpening;
    id  appWillBecomeActiveObserver;
    id  appWillResignActiveObserver;
    id  asyncOpeningOrPrintingWaiter;
    NSMutableArray * autoreopenRecordsAlreadyReopenedByTAL;
    NSMutableArray * autoreopenRecordsBeingCollectedDuringTermination;
    NSArray * autoreopenRecordsBeingReopened;
    NSMutableArray * autoreopenRecordsForMissingDocuments;
    BOOL  autoreopenRecordsNeedRewritingDuringTermination;
    double  autosavingDelay;
    NSOperationQueue * backgroundRecentDocumentResolutionQueue;
    BOOL  batchedOpeningTriedToReopen;
    NSArray * batchedOpenings;
    NSMutableDictionary * cachedRecentDocumentInfoPerKey;
    int  cachedUTIUsage;
    NSSharingServicePicker * currentSharingServicePicker;
    NSDocument * documentBeingDuplicated;
    NSOperationQueue * documentCoordinatingQueue;
    NSOperationQueue * documentOpeningQueue;
    NSMutableDictionary * documentOpeningWaitersByURL;
    NSMutableArray * documentsStillPreservingVersions;
    BOOL  dontDisplayDuringReopening;
    BOOL  hasAutoreopened;
    BOOL  isAsyncOpeningOrPrinting;
    unsigned long long  isAutoreopening;
    BOOL  isClosingAfterSavingDuringTermination;
    BOOL  isClosingBeforeSavingDuringTermination;
    NSError * javaLastError;
    struct __CFSet { } * javaVariantMethodsBeingInvoked;
    NSMutableArray * mainThreadBlockingInterrupters;
    NSMutableArray * mainThreadUnblockerStack;
    NSObject<OS_dispatch_queue> * mainThreadUnblockingQueue;
    NSTouchBar * newDocumentTouchBar;
    NSMutableSet * openRecentDocumentIDs;
    NSOperationQueue * openRecentDocumentUpdatingQueue;
    NSMutableDictionary * orderedPendingRecentDocumentURLsPerKey;
    NSObject<OS_dispatch_queue> * pendingRecentsQueue;
    NSOperationQueue * recentDocumentAccessQueue;
    BOOL  requestingSecurityScopedURLsFromOpenPanel;
    NSMutableSet * reservedAutosavingContentsPaths;
    NSDocumentControllerPersistentRestoration * restorationInfo;
    NSMenuItem * selectedSharingServiceMenuItem;
    BOOL  shouldCreateUI;
    BOOL  shouldInvertImplicitTabbingBehavior;
    BOOL  showNewDocumentTouchBar;
    NSDocumentControllerSubMenuDelegate * subMenuDelegate;
    BOOL  tabPlusButtonWasClicked;
    NSString * untitledTypeToCreate;
    id  windowDidBecomeKeyObserver;
    id  windowDidResignKeyObserver;
    NSWindow * windowThatBecameKeyDuringOpening;
}

@end
