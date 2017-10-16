/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardViewEditPropertyCommand : ABBookUndoableCommand {
    <ABCardViewDataSourceProvider> * _dataSourceProvider;
    <NSObject> * _oldValue;
    NSString * _propertyKey;
    <NSObject> * _updatedValue;
}

@property (nonatomic, readwrite, retain) <ABCardViewDataSourceProvider> *dataSourceProvider;
@property (nonatomic, readwrite, retain) <NSObject> *oldValue;
@property (nonatomic, readwrite, copy) NSString *propertyKey;
@property (nonatomic, readwrite, retain) <NSObject> *updatedValue;

- (id)dataSourceProvider;
- (void)dealloc;
- (void)execute;
- (void)executeUndo;
- (id)initWithDataSourceProvider:(id)arg1 propertyKey:(id)arg2 oldValue:(id)arg3 updatedValue:(id)arg4;
- (id)oldValue;
- (id)propertyKey;
- (void)setDataSourceProvider:(id)arg1;
- (void)setOldValue:(id)arg1;
- (void)setPropertyKey:(id)arg1;
- (void)setUpdatedValue:(id)arg1;
- (id)updatedValue;

@end