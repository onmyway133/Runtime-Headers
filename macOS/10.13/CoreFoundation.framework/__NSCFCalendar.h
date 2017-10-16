/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface __NSCFCalendar : NSCalendar

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)calendarWithIdentifier:(id)arg1;

- (id)__bumpSearchingDate:(id)arg1 upToNextHigherUnitInComponents:(id)arg2 goBackwards:(BOOL)arg3 usingMatchDate:(id)arg4;
- (BOOL)__checkDate:(id)arg1 containsMatchingComponents:(id)arg2 mismatchedUnits:(unsigned long long*)arg3;
- (BOOL)__checkIfEra:(long long)arg1 hasYear:(long long)arg2 resultDate:(id*)arg3;
- (BOOL)__checkIfEra:(long long)arg1 hasYearForWeekOfYear:(long long)arg2 resultDate:(id*)arg3 resultInterval:(double*)arg4;
- (id)__ensureThoroughEnumerationByAdjustingComponents:(id)arg1 usingSearchDate:(id)arg2 goBackwards:(BOOL)arg3;
- (unsigned long long)__findHighestSetUnitInDateComponents:(id)arg1;
- (unsigned long long)__findLowestSetUnitInDateComponents:(id)arg1;
- (BOOL)__findMatchingDate:(id*)arg1 afterStartDate:(id)arg2 matchingComponents:(id)arg3 goingBackwards:(BOOL)arg4 findLastMatch:(BOOL)arg5 options:(unsigned long long)arg6;
- (BOOL)__findMatchingDate:(id*)arg1 matchingComponents:(id)arg2 inNextHighestUnitRange:(unsigned long long)arg3 afterStartDate:(id)arg4 goBackwards:(BOOL)arg5 findLastMatch:(BOOL)arg6 options:(unsigned long long)arg7;
- (BOOL)__verifyNSDateComponentsValues:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)calendarIdentifier;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)dateFromComponents:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id)arg4;
- (unsigned long long)firstWeekday;
- (id)gregorianStartDate;
- (unsigned long long)hash;
- (id)initWithCalendarIdentifier:(id)arg1;
- (BOOL)isDateInWeekend:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)locale;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })maximumRangeOfUnit:(unsigned long long)arg1;
- (unsigned long long)minimumDaysInFirstWeek;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })minimumRangeOfUnit:(unsigned long long)arg1;
- (BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setFirstWeekday:(unsigned long long)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end