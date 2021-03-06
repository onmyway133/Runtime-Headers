/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNTimestamped : NSObject {
    double  _timestamp;
    id  _value;
}

@property (atomic, readonly) double timestamp;
@property (atomic, readonly) id value;

+ (id)timestampedWithValue:(id)arg1 timestamp:(double)arg2;
+ (id)wrapTransformWithScheduler:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 timestamp:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (double)timestamp;
- (id)value;

@end
