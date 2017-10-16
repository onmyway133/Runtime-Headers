/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebResponderChainSink : NSResponder {
    NSResponder * _lastResponderInChain;
    BOOL  _receivedUnhandledCommand;
}

- (void)detach;
- (void)doCommandBySelector:(SEL)arg1;
- (id)initWithResponderChain:(id)arg1;
- (void)noResponderFor:(SEL)arg1;
- (BOOL)receivedUnhandledCommand;
- (BOOL)tryToPerform:(SEL)arg1 with:(id)arg2;

@end
