/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSToolbarItemPlaceholder : NSObject {
    BOOL  _hasCustomVisibilityPriority;
    NSString * _itemIdentifier;
    id  _propertyListRepresentation;
    NSToolbar * _tb;
    long long  _visibilityPriority;
}

@property (nonatomic, readwrite, retain) id propertyListRepresentation;

- (BOOL)_hasCustomVisibilityPriority;
- (void)_setToolbar:(id)arg1;
- (void)dealloc;
- (id)initWithItemIdentifier:(id)arg1;
- (id)itemIdentifier;
- (id)propertyListRepresentation;
- (void)setPropertyListRepresentation:(id)arg1;
- (void)setVisibilityPriority:(long long)arg1;
- (id)toolbar;
- (long long)visibilityPriority;

@end