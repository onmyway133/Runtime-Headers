/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSTouchBarItemTreeBuilder : NSObject {
    long long  _currentResponderBarIndex;
    NSArray * _filteredBars;
    NSMutableDictionary * _itemIdentifiersToParentNodes;
    id  _itemsMap;
    long long  _maxVisitedResponderBarIndex;
    BOOL  _requireUniqueItemIdentifiers;
    NSArray * _touchBars;
}

@property (atomic, readonly) NSTouchBarItemTree *itemTree;
@property (atomic, readwrite, copy) id itemsMap;
@property (atomic, readwrite) BOOL requireUniqueItemIdentifiers;

- (id)_expandBarChildren:(id)arg1 inNode:(id)arg2 centeredNode:(id*)arg3;
- (id)_expandItem:(id)arg1 itemCenteredNode:(id*)arg2;
- (id)_expandNextResponderBarWithCenterNode:(id*)arg1;
- (id)_expandResponderBarAtIndex:(long long)arg1 centerNode:(id*)arg2;
- (void)_performWithResponderBarIndex:(long long)arg1 usingBlock:(id)arg2;
- (void)dealloc;
- (id)initWithTouchBars:(id)arg1;
- (id)itemTree;
- (id)itemsMap;
- (BOOL)requireUniqueItemIdentifiers;
- (void)setItemsMap:(id)arg1;
- (void)setRequireUniqueItemIdentifiers:(BOOL)arg1;

@end
