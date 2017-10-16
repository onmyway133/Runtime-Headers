/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCGSWindowOrderingProperties : NSObject {
    NSMutableSet * _disassociateFromSpacesIfOrderedOut;
    NSMapTable * _levelByWindow;
    NSMapTable * _orderingGroupByWindow;
    NSMutableSet * _reassociateWithSpacesByGeometry;
    NSMapTable * _subLevelByWindow;
}

- (void)addWindow:(id)arg1 toOrderingGroupAboveWindow:(id)arg2;
- (void)addWindow:(id)arg1 toOrderingGroupBelowWindow:(id)arg2;
- (void)clearOrderingGroup:(id)arg1;
- (void)dealloc;
- (void)disassociateFromSpacesIfOrderedOut:(id)arg1;
- (id)init;
- (int)levelForWindow:(id)arg1;
- (id)orderingGroupForWindow:(id)arg1;
- (void)reassociateWithSpacesByGeometry:(id)arg1;
- (void)removeWindowFromOrderingGroup:(id)arg1;
- (void)setDesiredSpace:(unsigned long long)arg1 forWindow:(id)arg2;
- (void)setLevel:(int)arg1 forWindow:(id)arg2;
- (void)setSubLevel:(int)arg1 forWindow:(id)arg2;
- (int)subLevelForWindow:(id)arg1;
- (BOOL)willDisassociateFromSpacesIfOrderedOut:(id)arg1;
- (BOOL)willReassociateWithSpacesByGeometry:(id)arg1;

@end
