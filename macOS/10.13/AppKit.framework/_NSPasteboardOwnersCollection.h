/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSPasteboardOwnersCollection : NSObject {
    NSMapTable * _ownerCounts;
    NSMapTable * _ownersByIndex;
    NSPasteboard * _pasteboard;
}

- (void).cxx_destruct;
- (void)_decrementCountForOwner:(id)arg1;
- (void)_incrementCountForOwner:(id)arg1;
- (void)dealloc;
- (void)handleOwnershipChange;
- (id)initWithPasteboard:(id)arg1;
- (void)removeOwnerForTypeIdentifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setOwner:(id)arg1 forTypeIdentifier:(id)arg2 atIndex:(unsigned long long)arg3;

@end
