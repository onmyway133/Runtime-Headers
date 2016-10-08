/* Generated by RuntimeBrowser.
 */

@protocol HFTimerTriggerExecutionTime_Private <HFTimerTriggerExecutionTime>

@required

- (NAFuture *)commitCreateTimerTriggerBuilder;
- (NAFuture *)commitUpdateExecutionTime;
- (NSString *)naturalLanguageNameOfType:(unsigned long long)arg1;
- (NAFuture *)performValidation;
- (void)setTimerTriggerBuilder:(HFTimerTriggerBuilder *)arg1;
- (HFTimerTriggerBuilder *)timerTriggerBuilder;

@end
