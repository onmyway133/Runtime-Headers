/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABSuggestedValueSnippet : NSObject {
    NSString * _appName;
    NSDate * _dateReceived;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _senderName;
    NSString * _subject;
    NSString * _text;
    NSURL * _url;
}

@property (atomic, readwrite, copy) NSString *appName;
@property (atomic, readwrite, copy) NSDate *dateReceived;
@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (atomic, readwrite, copy) NSString *senderName;
@property (atomic, readwrite, copy) NSString *subject;
@property (atomic, readwrite, copy) NSString *text;
@property (atomic, readwrite, copy) NSURL *url;

- (id)appName;
- (id)dateReceived;
- (void)dealloc;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)senderName;
- (void)setAppName:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSenderName:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)subject;
- (id)text;
- (id)url;

@end
