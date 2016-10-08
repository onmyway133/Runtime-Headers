/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSCoreDataXPCMessage : NSObject <NSSecureCoding> {
    NSData * _messageBody;
    unsigned long long  _messageCode;
    NSString * _token;
}

@property (atomic, readwrite, retain) NSData *messageBody;
@property (atomic, readwrite) unsigned long long messageCode;
@property (atomic, readwrite, retain) NSString *token;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageBody;
- (unsigned long long)messageCode;
- (void)setMessageBody:(id)arg1;
- (void)setMessageCode:(unsigned long long)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end