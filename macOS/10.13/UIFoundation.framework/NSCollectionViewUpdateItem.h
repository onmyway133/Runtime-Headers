/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSCollectionViewUpdateItem : NSObject {
    NSIndexPath * _finalIndexPath;
    id  _gap;
    NSIndexPath * _initialIndexPath;
    /* Warning: unhandled array encoding: '[11@]' */ id  _reserved;
    long long  _updateAction;
}

@property (getter=_action, nonatomic, readonly) long long action;
@property (getter=_indexPath, nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSIndexPath *indexPathAfterUpdate;
@property (nonatomic, readonly) NSIndexPath *indexPathBeforeUpdate;
@property (getter=_isSectionOperation, nonatomic, readonly) BOOL isSectionOperation;
@property (getter=_newIndexPath, setter=_setNewIndexPath:, nonatomic, readwrite, retain) NSIndexPath *newIndexPath;
@property (nonatomic, readonly) long long updateAction;

- (void).cxx_destruct;
- (long long)_action;
- (id)_indexPath;
- (BOOL)_isSectionOperation;
- (id)_newIndexPath;
- (void)_setNewIndexPath:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (id)description;
- (id)indexPathAfterUpdate;
- (id)indexPathBeforeUpdate;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)updateAction;

@end
