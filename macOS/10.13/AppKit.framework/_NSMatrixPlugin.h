/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSMatrixPlugin : _NSSelectionBinderPlugin {
    struct __matrixPluginFlags { 
        unsigned int _allowsEmptySelection : 1; 
        unsigned int _testedAllowsEmptySelection : 1; 
        unsigned int _invertedAllowsEmptySelection : 1; 
        unsigned int _reservedMatrixPlugin : 29; 
    }  _matrixPluginFlags;
}

+ (BOOL)isUsableWithObject:(id)arg1;

- (Class)_valueClass:(id)arg1;
- (unsigned long long)allowedContentBindingMask;
- (unsigned long long)allowedValueBindingMask;
- (void)connectionWasEstablished:(id)arg1;
- (id)initWithBinder:(id)arg1 object:(id)arg2;
- (id)objectMechanismsRequired;
- (void)populateObject:(id)arg1 withContent:(id)arg2 valueKey:(id)arg3 objectKey:(id)arg4 insertsNullPlaceholder:(BOOL)arg5;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (id)shownValueInObject:(id)arg1;
- (Class)valueClass:(id)arg1 forBinding:(id)arg2;

@end
