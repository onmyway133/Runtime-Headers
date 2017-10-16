/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface _CNAggregateTask : CNTask {
    NSArray * _tasks;
}

@property (nonatomic, readonly) NSArray *tasks;

- (void).cxx_destruct;
- (BOOL)cancel;
- (void)cancelSubtasks;
- (id)description;
- (id)initWithName:(id)arg1 tasks:(id)arg2;
- (id)run:(id*)arg1;
- (id)runSubtask:(id)arg1 error:(id*)arg2;
- (id)tasks;

@end
