/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextPlaceholder : NSObject {
    BOOL  _committed;
    id  _internal;
    id  _owner;
    id  _text;
}

@property (atomic, readonly) NSAttributedString *attributedStringValue;
@property (atomic, readonly) BOOL committed;
@property (atomic, readwrite) id owner;

- (void)_postCommitNotification;
- (id)attributedStringValue;
- (void)commit;
- (BOOL)committed;
- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 text:(id)arg2 doCommit:(BOOL)arg3;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void)setText:(id)arg1 doCommit:(BOOL)arg2;

@end
