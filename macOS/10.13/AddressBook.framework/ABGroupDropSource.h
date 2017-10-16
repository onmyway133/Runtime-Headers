/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABGroupDropSource : NSObject {
    BOOL  _isLocalToWindow;
    ABRecordContext * _recordContext;
}

@property (atomic, readonly) BOOL isLocalToWindow;
@property (atomic, readonly) ABRecordContext *recordContext;

- (void)dealloc;
- (id)description;
- (id)initWithRecordContext:(id)arg1 isLocalToWindow:(BOOL)arg2;
- (BOOL)isLocalToWindow;
- (id)recordContext;

@end