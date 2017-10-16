/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAccountStatus : NSObject {
    SEL  _action;
    unsigned long long  _state;
    id  _target;
}

@property (atomic, readonly) SEL action;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameForAccessoryViews;
@property (atomic, readonly) unsigned long long state;
@property (atomic, readonly) id target;

- (SEL)action;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAccessoryViews;
- (id)initWithState:(unsigned long long)arg1;
- (id)makeAccessoryView;
- (unsigned long long)state;
- (id)target;

// ABAccountStatus (Factory)

+ (id)alertStatusWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)authenticationFailedStatusWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)networkActivityStatus;
+ (id)noStatus;
+ (id)offlineStatusWithTarget:(id)arg1 action:(SEL)arg2;

@end
