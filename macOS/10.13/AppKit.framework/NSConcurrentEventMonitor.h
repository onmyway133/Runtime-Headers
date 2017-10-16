/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSConcurrentEventMonitor : NSObject {
    id  callback;
    unsigned long long  eventMask;
    NSString * identifier;
    BOOL  isProcessing;
    BOOL  isValid;
}

@property (atomic, readwrite, copy) id callback;
@property (atomic, readwrite) unsigned long long eventMask;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readwrite) BOOL isProcessing;
@property (atomic, readwrite) BOOL isValid;

- (id)callback;
- (void)dealloc;
- (unsigned long long)eventMask;
- (id)identifier;
- (BOOL)isProcessing;
- (BOOL)isValid;
- (void)setCallback:(id)arg1;
- (void)setEventMask:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsProcessing:(BOOL)arg1;
- (void)setIsValid:(BOOL)arg1;

@end