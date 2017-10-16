/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSViewControllerPrivateData : NSObject {
    long long  _appearanceTransitionCount;
    NSMutableArray * _childViewControllers;
    id  _constrainServiceScreenFrameBlock;
    NSDictionary * _externalObjectEntryTableForViewLoading;
    struct { 
        unsigned int preventInsertAndRemoveChildViewControllersFromSendingKVO : 1; 
        unsigned int _sentViewWillAppear : 1; 
        unsigned int _sentViewWillDisappear : 1; 
        unsigned int _sentViewDidLoad : 1; 
        unsigned int _scheduledBridgedServiceLayoutPropertyChange : 1; 
        unsigned int _reserved : 27; 
    }  _flags;
    NSString * _identifier;
    struct _NSModalSession { id x1; struct _NSModalSession {} *x2; int x3; BOOL x4; long long x5; unsigned long long x6; BOOL x7; BOOL x8; BOOL x9; short x10; long long x11; id x12; SEL x13; void *x14; long long x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; id x18; } * _modalSessionForPresentedViewController;
    NSViewController * _parentViewController;
    NSMutableArray * _presentedViewControllers;
    NSDictionary * _segueDestinationOptions;
    NSArray * _segueTemplates;
    NSStoryboard * _storyboard;
    NSArray * _topLevelObjectsToKeepAliveFromStoryboard;
}

@property (atomic, readwrite) long long appearanceTransitionCount;
@property (atomic, readwrite, retain) NSMutableArray *childViewControllers;
@property (atomic, readwrite, copy) id constrainServiceScreenFrameBlock;
@property (atomic, readwrite, retain) NSDictionary *externalObjectEntryTableForViewLoading;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readwrite) struct _NSModalSession { id x1; struct _NSModalSession {} *x2; int x3; BOOL x4; long long x5; unsigned long long x6; BOOL x7; BOOL x8; BOOL x9; short x10; long long x11; id x12; SEL x13; void *x14; long long x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; id x18; }*modalSessionForPresentedViewController;
@property (atomic, readwrite) NSViewController *parentViewController;
@property (atomic, readwrite, retain) NSMutableArray *presentedViewControllers;
@property (atomic, readwrite, retain) NSDictionary *segueDestinationOptions;
@property (atomic, readwrite, retain) NSArray *segueTemplates;
@property (atomic, readwrite, retain) NSStoryboard *storyboard;
@property (atomic, readwrite, retain) NSArray *topLevelObjectsToKeepAliveFromStoryboard;

- (long long)appearanceTransitionCount;
- (id)childViewControllers;
- (id)constrainServiceScreenFrameBlock;
- (void)dealloc;
- (id)externalObjectEntryTableForViewLoading;
- (id)identifier;
- (struct _NSModalSession { id x1; struct _NSModalSession {} *x2; int x3; BOOL x4; long long x5; unsigned long long x6; BOOL x7; BOOL x8; BOOL x9; short x10; long long x11; id x12; SEL x13; void *x14; long long x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; id x18; }*)modalSessionForPresentedViewController;
- (id)parentViewController;
- (id)presentedViewControllers;
- (id)segueDestinationOptions;
- (id)segueTemplates;
- (void)setAppearanceTransitionCount:(long long)arg1;
- (void)setChildViewControllers:(id)arg1;
- (void)setConstrainServiceScreenFrameBlock:(id)arg1;
- (void)setExternalObjectEntryTableForViewLoading:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModalSessionForPresentedViewController:(struct _NSModalSession { id x1; struct _NSModalSession {} *x2; int x3; BOOL x4; long long x5; unsigned long long x6; BOOL x7; BOOL x8; BOOL x9; short x10; long long x11; id x12; SEL x13; void *x14; long long x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; id x18; }*)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setPresentedViewControllers:(id)arg1;
- (void)setSegueDestinationOptions:(id)arg1;
- (void)setSegueTemplates:(id)arg1;
- (void)setStoryboard:(id)arg1;
- (void)setTopLevelObjectsToKeepAliveFromStoryboard:(id)arg1;
- (id)storyboard;
- (id)topLevelObjectsToKeepAliveFromStoryboard;

@end
