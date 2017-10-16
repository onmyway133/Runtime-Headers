/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNVirtualSchedulerJob : NSObject {
    id  _block;
    unsigned long long  _time;
}

@property (atomic, readonly, copy) id block;
@property (atomic, readwrite) unsigned long long time;

+ (id)jobWithTime:(unsigned long long)arg1 block:(id)arg2;

- (void).cxx_destruct;
- (id)block;
- (id)description;
- (id)initWithTime:(unsigned long long)arg1 block:(id)arg2;
- (void)setTime:(unsigned long long)arg1;
- (unsigned long long)time;

@end