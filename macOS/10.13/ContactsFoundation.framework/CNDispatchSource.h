/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNDispatchSource : NSObject <CNCancelable> {
    NSObject<OS_dispatch_source> * _source;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)cancel;
- (void)dealloc;
- (void)finalize;
- (id)initWithSource:(id)arg1;
- (id)source;

@end