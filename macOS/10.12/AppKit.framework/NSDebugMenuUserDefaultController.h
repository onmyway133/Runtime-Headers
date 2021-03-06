/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDebugMenuUserDefaultController : NSObject <NSUserInterfaceValidations> {
    NSString * _defaultName;
    BOOL  _defaultValue;
    id  _dynamicGetter;
    id  _dynamicSetter;
}

@property (atomic, readonly, copy) NSString *defaultName;

+ (id)controllerForDefaultWithName:(id)arg1 defaultValue:(BOOL)arg2 dynamicGetter:(id)arg3 dynamicSetter:(id)arg4;
+ (id)controllerForDefaultWithName:(id)arg1 dynamicGetter:(id)arg2 dynamicSetter:(id)arg3;

- (void)_toggleDefault:(id)arg1;
- (id)createNewMenuItem;
- (BOOL)currentBoolValue;
- (void)dealloc;
- (id)defaultName;
- (id)initWithName:(id)arg1 defaultValue:(BOOL)arg2 dynamicGetter:(id)arg3 dynamicSetter:(id)arg4;
- (BOOL)validateUserInterfaceItem:(id)arg1;

@end
