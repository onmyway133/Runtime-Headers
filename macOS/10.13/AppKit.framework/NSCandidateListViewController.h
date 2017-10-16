/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCandidateListViewController : NSViewController {
    NSViewController * _accessoryViewController;
    NSButton * _button;
    NSView<NSTextInputClient> * _client;
    id  _completionHandler;
    unsigned long long  _delayedCollapseCount;
    id  _delegate;
    struct { 
        unsigned int _shouldUsePanel : 1; 
        unsigned int _isTracking : 1; 
        unsigned int _hasCorrection : 1; 
        unsigned int _hasQuotes : 1; 
        unsigned int _collapsed : 1; 
        unsigned int _allowsCollapsing : 1; 
        unsigned int _allowsCandidateVariation : 1; 
        unsigned int _processingUserCollapse : 1; 
        unsigned int _processingCollapse : 1; 
        unsigned int _hasEmoji : 1; 
        unsigned int _reserved : 22; 
    }  _flags;
    id  _formattingBlock;
    double  _lastUpdateTime;
    id  _leftCandidate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    id  _middleCandidate;
    NSPanel * _panel;
    double  _pendingTransitionDuration;
    id  _rightCandidate;
    long long  _sequenceNumber;
    NSArray * _splitRightArray;
    NSTouchBarItem * _touchBarItem;
    unsigned long long  _trackingIndex;
    NSTimer * _updateTimer;
    NSView * _viewForLocation;
}

@property (atomic, readwrite, retain) NSViewController *accessoryViewController;
@property (atomic, readwrite) BOOL allowsCollapsing;
@property (atomic, readonly, copy) NSArray *candidates;
@property (atomic, readwrite) NSView<NSTextInputClient> *client;
@property (getter=isCollapsed, atomic, readwrite) BOOL collapsed;
@property (atomic, readwrite, copy) id completionHandler;
@property (atomic, readwrite) id delegate;
@property (atomic, readwrite, copy) id formattingBlock;
@property (atomic, readonly) BOOL processingUserExpand;
@property (atomic, readonly) BOOL shouldAnimateNextLayoutPass;
@property (atomic, readwrite) NSTouchBarItem *touchBarItem;

+ (double)standardWidth;

- (id)_compositeCandidateForCandidate:(id)arg1 atIndex:(unsigned long long)arg2 addQuotes:(BOOL)arg3 isCorrection:(BOOL)arg4 isEmoji:(BOOL)arg5;
- (void)_delayedSetCollapsed;
- (BOOL)_prepareDelayedSetCollapsed;
- (id)_replacementStringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 firstCandidateString:(id)arg3;
- (void)_setCollapsed:(BOOL)arg1;
- (void)_setNonTextCheckingResultCandidates:(id)arg1;
- (void)_setTextCheckingResultCandidates:(id)arg1 forSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inString:(id)arg3 replacedString:(id)arg4;
- (id)_stringForCandidate:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateCollapsingStateConstraint;
- (BOOL)_viewControllerSupports10_10Features;
- (id)accessoryViewController;
- (BOOL)allowsCollapsing;
- (id)candidateForTrackingIndex:(unsigned long long)arg1 candidateIndex:(unsigned long long*)arg2;
- (id)candidates;
- (id)client;
- (id)completionHandler;
- (void)continueTrackingInSegmentType:(long long)arg1 index:(unsigned long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)formattingBlock;
- (id)init;
- (BOOL)isCollapsed;
- (id)leftCandidate;
- (void)loadView;
- (id)middleCandidate;
- (BOOL)processingUserExpand;
- (id)rightCandidate;
- (void)runPositionAnimation;
- (void)setAccessoryViewController:(id)arg1;
- (void)setAllowsCollapsing:(BOOL)arg1;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inString:(id)arg3;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inString:(id)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 view:(id)arg5 completionHandler:(id)arg6;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inString:(id)arg3 replacedString:(id)arg4 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 view:(id)arg6 completionHandler:(id)arg7;
- (void)setClient:(id)arg1;
- (void)setCollapsed:(BOOL)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFormattingBlock:(id)arg1;
- (void)setLeftCandidate:(id)arg1;
- (void)setMiddleCandidate:(id)arg1;
- (void)setRightCandidate:(id)arg1;
- (void)setTouchBarItem:(id)arg1;
- (BOOL)shouldAnimateNextLayoutPass;
- (void)showCandidates:(id)arg1 forString:(id)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 view:(id)arg4 completionHandler:(id)arg5;
- (void)showPanel;
- (void)spellCheckerDidChangeCompletionCollapsed:(id)arg1;
- (void)startTrackingInSegmentType:(long long)arg1 index:(unsigned long long)arg2;
- (void)stopTrackingInSegmentType:(long long)arg1 index:(unsigned long long)arg2;
- (id)touchBarItem;
- (void)updateState;
- (void)updateStateAndTitles:(BOOL)arg1 allowDelay:(BOOL)arg2;
- (void)updateTimerFired:(id)arg1;
- (void)updateTitles;
- (void)updateViewConstraints;
- (void)userSetCollapsed:(BOOL)arg1;

@end
