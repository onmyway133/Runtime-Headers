/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavBrowser : NSBrowser {
    unsigned int  _delegate_didClickDisabledRow;
    unsigned int  _delegate_isEnabledRow;
    unsigned int  _delegate_labelColorForRow;
    unsigned int  _reserved;
}

+ (Class)browserTableViewClass;

- (BOOL)_useSnowLeopardBehavior;
- (void)didClickOnDisabledRow:(long long)arg1 column:(long long)arg2;
- (BOOL)isEnabledRow:(long long)arg1 column:(long long)arg2;
- (long long)labelColorIndexForRow:(long long)arg1 column:(long long)arg2;
- (void)setDelegate:(id)arg1;

@end
