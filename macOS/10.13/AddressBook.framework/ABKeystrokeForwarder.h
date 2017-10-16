/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABKeystrokeForwarder : NSResponder {
    NSMutableArray * _handlers;
}

- (void)addTarget:(id)arg1 action:(SEL)arg2 forEventsPassingTest:(id)arg3;
- (void)dealloc;
- (BOOL)forwardKeystroke:(id)arg1 toHandler:(id)arg2;
- (id)initWithPreviousResponder:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)sampleHandler:(id)arg1;

@end
