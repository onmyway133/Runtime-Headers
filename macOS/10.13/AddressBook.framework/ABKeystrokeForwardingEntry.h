/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABKeystrokeForwardingEntry : NSObject {
    SEL  _action;
    id  _target;
    id  _test;
}

@property (atomic, readonly) SEL action;
@property (atomic, readonly) id target;
@property (atomic, readonly) id test;

+ (id)entryWithTarget:(id)arg1 action:(SEL)arg2 test:(id)arg3;

- (SEL)action;
- (void)dealloc;
- (id)target;
- (id)test;

@end
