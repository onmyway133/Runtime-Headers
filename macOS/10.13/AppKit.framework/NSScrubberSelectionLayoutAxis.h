/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScrubberSelectionLayoutAxis : NSObject <NSScrubberSelectionLayout> {
    long long  _itemAlignment;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) BOOL floatingSelection;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) long long itemAlignment;
@property (atomic, readonly) Class superclass;

- (BOOL)floatingSelection;
- (long long)itemAlignment;
- (id)selectionLayoutAttributesForItemAtIndex:(long long)arg1 withState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg2 inLayout:(id)arg3 presentationItemAttributes:(id)arg4 inView:(id)arg5;
- (id)selectionLayoutAttributesForState:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; long long x2; long long x3; double x4; long long x5; long long x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; BOOL x8; })arg1 inLayout:(id)arg2 presentationItemAttributes:(id)arg3 inView:(id)arg4;
- (void)setFloatingSelection:(BOOL)arg1;
- (void)setItemAlignment:(long long)arg1;

@end
