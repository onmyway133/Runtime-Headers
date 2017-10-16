/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSDocumentRevisionsCache : NSObject {
    NSDocumentRevisionsController * controller;
    NSMapTable * costs;
    NSCountedSet * pinnedRevisions;
    NSMutableOrderedSet * unpinnedRevisions;
    id  vmPressureSourceID;
}

@property (getter=isEvictionEnabled, atomic, readwrite) BOOL evictionEnabled;

- (void)_insertUnpinnedRevision:(id)arg1;
- (BOOL)acquireRevision:(id)arg1;
- (void)addRevision:(id)arg1 cost:(unsigned long long)arg2;
- (BOOL)containsRevision:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRevisionsController:(id)arg1;
- (BOOL)isEvictionEnabled;
- (void)relinquishRevision:(id)arg1;
- (void)removeRevision:(id)arg1;
- (void)setEvictionEnabled:(BOOL)arg1;
- (void)updateCost:(unsigned long long)arg1 forRevision:(id)arg2;

@end
