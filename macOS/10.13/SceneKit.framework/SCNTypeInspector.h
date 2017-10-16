/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNTypeInspector : NSView <NSOutlineViewDataSource, NSOutlineViewDelegate> {
    NSMutableDictionary * _datasource;
    id  _instance;
    NSView * _mainView;
    NSOutlineView * _outlineView;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, retain) id instance;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)instance;
- (id)ivarsOfItem:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)setInstance:(id)arg1;

@end
