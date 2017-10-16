/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABDAggregateLoggerDecorator : NSObject <ABSuggestionLogging> {
    NSArray * _loggers;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) NSArray *loggers;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)initWithLoggers:(id)arg1;
- (void)logPairs:(id)arg1 withMessage:(id)arg2;
- (id)loggers;
- (void)setLoggers:(id)arg1;

@end
