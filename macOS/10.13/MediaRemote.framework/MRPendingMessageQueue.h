/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRPendingMessageQueue : NSObject {
    unsigned long long  _lowPriorityMessagesCount;
    unsigned long long  _maxLowPriorityMessagesAllowed;
    NSMutableArray * _messages;
}

- (void)_purge;
- (void)dealloc;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;
- (id)peek;
- (void)pop;
- (void)push:(id)arg1;

@end
