/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalStoreRemoteManagedCalendarItem : CalStoreRemoteManagedObject {
    NSSet * _attachments;
    CalStoreRemoteManagedCalendar * _calendar;
    NSDate * _dateStamp;
    NSSet * _derivedAlarms;
    BOOL  _isAllDay;
    NSString * _notes;
    NSString * _occurrenceID;
    NSString * _recurrenceRule;
    NSString * _sharedUID;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readwrite, retain) NSSet *attachments;
@property (nonatomic, readwrite, retain) CalStoreRemoteManagedCalendar *calendar;
@property (nonatomic, readwrite, retain) NSDate *dateStamp;
@property (nonatomic, readwrite, retain) NSSet *derivedAlarms;
@property (nonatomic, readonly) BOOL hasAlarm;
@property (nonatomic, readwrite) BOOL isAllDay;
@property (nonatomic, readwrite, retain) NSString *notes;
@property (nonatomic, readwrite, retain) NSString *occurrenceID;
@property (nonatomic, readwrite, retain) NSString *recurrenceRule;
@property (nonatomic, readwrite, retain) NSString *sharedUID;
@property (nonatomic, readwrite, retain) NSDate *startDate;
@property (nonatomic, readwrite, retain) NSTimeZone *timeZone;
@property (nonatomic, readwrite, retain) NSString *title;
@property (nonatomic, readwrite, retain) NSURL *url;

+ (id)fetchObjectsWithPredicate:(id)arg1;
+ (id)fetchObjectsWithPredicate:(id)arg1 inCalendars:(id)arg2;
+ (id)fetchObjectsWithSharedUID:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)calendar;
- (id)dateStamp;
- (id)derivedAlarms;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAlarm;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAllDay;
- (id)notes;
- (id)occurrenceID;
- (id)recurrenceRule;
- (void)setAttachments:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateStamp:(id)arg1;
- (void)setDerivedAlarms:(id)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (void)setNotes:(id)arg1;
- (void)setOccurrenceID:(id)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setSharedUID:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sharedUID;
- (id)startDate;
- (id)timeZone;
- (id)title;
- (id)url;

@end
