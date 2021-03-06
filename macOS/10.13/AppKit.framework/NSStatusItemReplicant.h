/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSStatusItemReplicant : NSStatusItem {
    NSStatusItem * parentItem;
}

@property (atomic, readwrite) NSStatusItem *parentItem;

- (void)_adjustLength;
- (void)_autosavePosition;
- (id)_defaultsKeyForAutosaveProperty:(id)arg1;
- (id)_initInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 visible:(BOOL)arg4 displayID:(id)arg5 parent:(id)arg6;
- (void)_install;
- (BOOL)_isHidden;
- (BOOL)_shouldReplicate;
- (unsigned int)_statusItemFlags;
- (BOOL)isVisible;
- (id)parentItem;
- (id)replicantView;
- (void)setDrawBlock:(id)arg1;
- (void)setParentItem:(id)arg1;

@end
