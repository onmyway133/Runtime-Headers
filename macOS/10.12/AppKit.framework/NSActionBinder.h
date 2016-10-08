/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSActionBinder : NSEditorBinder {
    struct __actionBinderFlags { 
        unsigned int _allSeparateArrayArgumentsBoundToIdenticalController : 1; 
        unsigned int _reservedActionBinder : 31; 
    }  _actionBinderFlags;
    SEL  _selector;
}

+ (id)_enumeratedArgumentBindings:(unsigned long long)arg1;
+ (id)_enumerationBinding;
+ (id)_pluginProtocol;
+ (id)_targetBinding;
+ (id)bindingCategory;
+ (id)bindingsForObject:(id)arg1;

- (unsigned long long)_argumentBindingCount;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)arg1;
- (void)_executePerformAction;
- (void)_init;
- (void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 forBinding:(id)arg3;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (BOOL)_performActionWithCommitEditing;
- (void)_performActionWithCommitEditing:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(id)arg3;
- (id)_referenceBinding;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (BOOL)_targetAndArgumentsAcceptableForMode:(/* Warning: unhandled struct encoding: '{__NSKeyValueCodingControllerModeType=qQ@}' */ struct __NSKeyValueCodingControllerModeType { long long x1; unsigned long long x2; id x3; })arg1;
- (BOOL)_targetBindingBound;
- (BOOL)allowsNullArgumentWithBinding:(id)arg1;
- (id)availableBindings;
- (BOOL)bindingRunsAlerts:(id)arg1;
- (BOOL)canApplyValueTransformer:(id)arg1 toBinding:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)invokesSeparatelyWithArrayObjectsWithBinding:(id)arg1;
- (BOOL)isBindingReadOnly:(id)arg1;
- (void)performAction:(id)arg1;
- (void)removeBinding:(id)arg1;
- (BOOL)selectionSupportsEnabledState;
- (SEL)selector;
- (void)setAllowsNullArgument:(BOOL)arg1 withBinding:(id)arg2;
- (void)setInvokesSeparatelyWithArrayObjects:(BOOL)arg1 withBinding:(id)arg2;
- (void)setSelector:(SEL)arg1;
- (BOOL)targetAndArgumentsAcceptable;
- (BOOL)targetAndArgumentsAcceptableAtIndex:(unsigned long long)arg1;
- (BOOL)targetAndArgumentsAcceptableAtIndexPath:(id)arg1;
- (void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2;
- (void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2;

@end