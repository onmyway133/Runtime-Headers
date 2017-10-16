/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSInputAlignmentController : NSObject {
    <NSInputAlignmentControllerDelegate> * _delegate;
    id  _reserved0;
    NSMutableArray * _sessions;
}

@property (atomic, readwrite) <NSInputAlignmentControllerDelegate> *delegate;

+ (struct CGPoint { double x1; double x2; })alignmentDeltaFromMatches:(id)arg1;

- (void).cxx_destruct;
- (id)alignItem:(id)arg1 usingFilter:(id)arg2;
- (id)checkAlignmentOfItem:(id)arg1;
- (void)clearAlignmentStateForItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setAlignmentGuides:(id)arg1 affectingItem:(id)arg2;
- (void)setDelegate:(id)arg1;

// NSInputAlignmentController (NSInternal)

- (BOOL)_delegateShouldAlignOnMatch:(id)arg1;
- (id)_sessionForItem:(id)arg1;

@end
