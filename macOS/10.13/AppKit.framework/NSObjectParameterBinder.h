/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSObjectParameterBinder : NSBinder {
    NSString * _bindingValueBeingSet;
    struct __objectParameterBinderFlags { 
        unsigned int _needsToRefreshOriginalValues : 1; 
        unsigned int _reservedObjectParameterBinder : 31; 
    }  _objectParameterBinderFlags;
    NSMutableDictionary * _originalValues;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)arg1;
+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;

- (void)_connectionWasEstablished;
- (void)_dealloc;
- (void)_init;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void*)arg4;
- (id)availableBindings;
- (BOOL)canAddBinding:(id)arg1 toController:(id)arg2;
- (BOOL)isBindingReadOnly:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;

@end