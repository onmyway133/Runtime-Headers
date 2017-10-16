/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSControllerConfigurationBinder : NSBinder {
    struct __controllerConfigurationBinderFlags { 
        unsigned int _ignoreChanges : 1; 
        unsigned int _reservedControllerConfigurationBinder : 31; 
    }  _controllerConfigurationBinderFlags;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)arg1;
+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;

- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_init;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (void)_updateFilterPredicate:(id)arg1;
- (void)_updateSelectionIndexPaths:(id)arg1;
- (void)_updateSelectionIndexes:(id)arg1;
- (void)_updateSortDescriptors:(id)arg1;
- (void)controller:(id)arg1 didChangeToFilterPredicate:(id)arg2;
- (void)controller:(id)arg1 didChangeToSelectionIndexPaths:(id)arg2;
- (void)controller:(id)arg1 didChangeToSelectionIndexes:(id)arg2;
- (void)controller:(id)arg1 didChangeToSortDescriptors:(id)arg2;
- (Class)valueClassForBinding:(id)arg1;

@end
