/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABActionDispatcher : NSResponder {
    NSMapTable * _actionsBySelector;
}

+ (id)actionNameFromFactoryName:(id)arg1;
+ (void)addActionMethods;
+ (void)initialize;
+ (id)selectorPointerFunctions;

- (void)_internalActionHandler:(id)arg1;
- (id)actionForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;
- (void)registerActionForMethod:(id)arg1;
- (void)registerActions;
- (void)setAction:(id)arg1 forSelector:(SEL)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)willRegisterActions;

@end
