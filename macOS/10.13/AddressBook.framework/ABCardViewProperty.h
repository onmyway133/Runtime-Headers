/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardViewProperty : NSObject <ABCardViewProperty> {
    NSString * _key;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, copy) NSString *key;
@property (atomic, readonly) BOOL shouldReloadViewOnUserEdit;
@property (atomic, readonly) Class superclass;

- (id)actionForGlyphName:(id)arg1;
- (id)actionGlyphNames;
- (id)addressBookProperty;
- (BOOL)allowsCustomLabels;
- (BOOL)canRemove;
- (void)dealloc;
- (id)defaultLabel;
- (id)defaultLabelWithAccountName:(id)arg1;
- (id)description;
- (id)emptyValueForMultiValue:(id)arg1 label:(id)arg2;
- (id)initWithValueKey:(id)arg1;
- (BOOL)isLoadedAsynchronously;
- (BOOL)isMultiValue;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (BOOL)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2;
- (BOOL)isValueEmpty:(id)arg1;
- (id)key;
- (id)multiValueEntryToLabel;
- (BOOL)needsCardViewBorderDrawing;
- (void)setKey:(id)arg1;
- (BOOL)shouldReloadViewOnUserEdit;
- (BOOL)shouldUseAccountNameInLabel;

@end
