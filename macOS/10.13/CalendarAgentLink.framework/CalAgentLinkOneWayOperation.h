/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalAgentLinkOneWayOperation : CalAgentLinkOperation {
    BOOL  _semaphoreDecremented;
}

@property (nonatomic, readwrite) BOOL semaphoreDecremented;

- (id)init;
- (void)prepare;
- (BOOL)semaphoreDecremented;
- (void)setSemaphoreDecremented:(BOOL)arg1;
- (void)willFinish;

@end