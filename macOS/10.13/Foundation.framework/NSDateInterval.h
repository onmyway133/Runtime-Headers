/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>

@property (atomic, readonly) double duration;
@property (atomic, readonly, copy) NSDate *endDate;
@property (atomic, readonly, copy) NSDate *startDate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (BOOL)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)intersectionWithDateInterval:(id)arg1;
- (BOOL)intersectsDateInterval:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDateInterval:(id)arg1;
- (id)startDate;

@end
