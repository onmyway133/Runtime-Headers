/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSAccessibilityActionEntry : NSObject {
    NSString * _accessibilityDescription;
    NSString * _action;
    id  _handler;
}

@property (atomic, readonly, copy) NSString *accessibilityDescription;
@property (atomic, readonly, copy) NSString *action;
@property (atomic, readonly, copy) id handler;

+ (id)entryWithName:(id)arg1 description:(id)arg2 handler:(id)arg3;

- (id)accessibilityDescription;
- (id)action;
- (void)dealloc;
- (id)handler;
- (id)initWithName:(id)arg1 description:(id)arg2 handler:(id)arg3;

@end
