/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSPopoverToolbarPrivateData : NSObject {
    NSString * _boundKeyPathForSelectedIndex;
    NSString * _boundKeyPathForTabViewItems;
    id  _boundObjectForSelectedIndex;
    id  _boundObjectForTabViewItems;
    struct { 
        unsigned int _reserved : 32; 
    }  _flags;
    long long  _selectedIndex;
    long long  _separatorIndex;
    NSArray * _tabViewItems;
    _NSPopoverToolbarView * _toolbarView;
}

@property (atomic, readwrite) long long selectedIndex;
@property (atomic, readwrite) long long separatorIndex;
@property (atomic, readwrite, copy) NSArray *tabViewItems;

- (void)dealloc;
- (long long)selectedIndex;
- (long long)separatorIndex;
- (void)setSelectedIndex:(long long)arg1;
- (void)setSeparatorIndex:(long long)arg1;
- (void)setTabViewItems:(id)arg1;
- (id)tabViewItems;

@end
