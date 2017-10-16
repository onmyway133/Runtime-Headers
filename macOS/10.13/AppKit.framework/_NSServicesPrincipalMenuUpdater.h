/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSServicesPrincipalMenuUpdater : _NSServicesMenuUpdater

+ (id)_sharedPrincipalUpdater;

- (void)addNonserviceMenuItemsToMenu:(id)arg1;
- (BOOL)contentsNeedsUpdatingForMenu:(id)arg1;
- (void)dealloc;
- (id)menuContext;
- (void)menuDidClose:(id)arg1;
- (BOOL)menuShowsKeyEquivalents;
- (void)menuWillOpen:(id)arg1;
- (id)menus;
- (void)populateMenu:(id)arg1 withServiceEntries:(id)arg2 forDisplay:(BOOL)arg3;
- (void)populateMenuForUnavailableServices:(id)arg1;
- (unsigned long long)serviceEntryKinds;
- (BOOL)updateMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)updateVisibilityOfServicesItemsForMenu:(id)arg1 isForDisplay:(BOOL)arg2;

@end
