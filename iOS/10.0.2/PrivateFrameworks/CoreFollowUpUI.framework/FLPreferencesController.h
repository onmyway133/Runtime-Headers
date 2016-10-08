/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLPreferencesController : NSObject {
    FLFollowUpController * _controller;
    id /* block */  _itemChangeObserver;
    int  _notifyToken;
}

@property (nonatomic, copy) id /* block */ itemChangeObserver;

- (void).cxx_destruct;
- (unsigned long long)_countOfPendingFollowUpItemsToShowInSettings;
- (id)_pendingFollowUpItemsToShowInSettings;
- (id)_specifiersForFollowUpItem:(id)arg1;
- (void)actionTapped:(id)arg1;
- (void)dealloc;
- (id)followUpItemSpecifiers;
- (id)init;
- (id /* block */)itemChangeObserver;
- (void)setItemChangeObserver:(id /* block */)arg1;
- (id)topLevelSpecifiers;

@end
