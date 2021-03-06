/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCDateFormatter : QCPatch {
    long long  _dateStyle;
    NSString * _format;
    struct __CFDateFormatter { } * _formatter;
    double  _lastTime;
    double  _resolution;
    long long  _timeStyle;
    NSString * _zoneName;
    QCNumberPort * inputTime;
    QCStringPort * outputString;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)timeZoneNames;

- (void)cleanup:(id)arg1;
- (long long)dateStyle;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)formatString;
- (id)initWithIdentifier:(id)arg1;
- (void)setDateStyle:(long long)arg1;
- (void)setFormatString:(id)arg1;
- (BOOL)setState:(id)arg1;
- (void)setTimeStyle:(long long)arg1;
- (void)setTimeZoneName:(id)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;
- (long long)timeStyle;
- (id)timeZoneName;

// QCDateFormatter (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end
