/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
 */

@interface QuartzFilterInternal : NSObject {
    NSMutableDictionary * mContextDict;
    QuartzFilterOwner * mOwner;
    NSMutableDictionary * mProperties;
    QFilter * mQFilter;
    QuartzFilter * mQuartzFilter;
    NSURL * mURL;
}

+ (id)newWithOutputIntents:(id)arg1 quartzFilter:(id)arg2;
+ (id)newWithProperties:(id)arg1 quartzFilter:(id)arg2;
+ (id)newWithURL:(id)arg1 quartzFilter:(id)arg2;

- (BOOL)applyToContext:(struct CGContext { }*)arg1;
- (id)contextDictionary;
- (void)dealloc;
- (id)description;
- (void)filterNotification:(id)arg1 type:(int)arg2 info:(void*)arg3;
- (void)flushDerivables;
- (id)initWithOutputIntents:(id)arg1 quartzFilter:(id)arg2;
- (id)initWithProperties:(id)arg1 quartzFilter:(id)arg2;
- (id)initWithURL:(id)arg1 quartzFilter:(id)arg2;
- (id)name;
- (id)owner;
- (id)properties;
- (id)qfilter;
- (id)quartzfilter;
- (void)setOwner:(id)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end
