/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalStoreRemoteManagedAlarm : CalStoreRemoteManagedObject {
    NSDate * _absoluteTrigger;
    NSDate * _acknowledged;
    NSString * _action;
    NSString * _emailAddress;
    int  _order;
    NSString * _relatedTo;
    double  _relativeTrigger;
    NSString * _sound;
    NSURL * _url;
}

@property (nonatomic, readwrite, retain) NSDate *absoluteTrigger;
@property (nonatomic, readwrite, retain) NSDate *acknowledged;
@property (nonatomic, readwrite, retain) NSString *action;
@property (nonatomic, readwrite, retain) NSString *emailAddress;
@property (nonatomic, readwrite) int order;
@property (nonatomic, readwrite, retain) NSString *relatedTo;
@property (nonatomic, readwrite) double relativeTrigger;
@property (nonatomic, readwrite, retain) NSString *sound;
@property (nonatomic, readwrite, retain) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)absoluteTrigger;
- (id)acknowledged;
- (id)action;
- (long long)compareAlarmOrder:(id)arg1;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)order;
- (id)relatedTo;
- (double)relativeTrigger;
- (void)setAbsoluteTrigger:(id)arg1;
- (void)setAcknowledged:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setOrder:(int)arg1;
- (void)setRelatedTo:(id)arg1;
- (void)setRelativeTrigger:(double)arg1;
- (void)setSound:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sound;
- (id)triggerDateRelativeTo:(id)arg1;
- (id)url;

@end
