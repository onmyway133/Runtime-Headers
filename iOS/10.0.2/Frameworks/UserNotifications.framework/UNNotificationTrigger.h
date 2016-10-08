/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding> {
    bool  _repeats;
}

@property (nonatomic, readonly) bool repeats;

+ (bool)supportsSecureCoding;

- (id)_init;
- (id)_initWithRepeats:(bool)arg1;
- (double)_retroactiveTriggerHysteresis;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)nextTriggerDateAfterLastTriggerDate:(id)arg1 withRequestedDate:(id)arg2;
- (bool)repeats;
- (bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;

@end
