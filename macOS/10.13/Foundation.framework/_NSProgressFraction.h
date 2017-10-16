/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSProgressFraction : NSObject <NSCopying, NSSecureCoding> {
    long long  _completed;
    BOOL  _overflowed;
    long long  _total;
}

@property (atomic, readwrite) long long completed;
@property (atomic, readonly) BOOL overflowed;
@property (atomic, readwrite) long long total;

+ (id)fractionWithCompleted:(long long)arg1 total:(long long)arg2;
+ (id)fractionWithDouble:(double)arg1;
+ (BOOL)supportsSecureCoding;

- (void)_simplifyFromDouble:(double)arg1;
- (void)addFraction:(id)arg1;
- (long long)completed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)divideByValue:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fractionByAddingFraction:(id)arg1;
- (id)fractionByMultiplyingFraction:(id)arg1;
- (id)fractionBySimplifying;
- (id)fractionBySubtractingFraction:(id)arg1;
- (double)fractionCompleted;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompleted:(long long)arg1 total:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFinished;
- (BOOL)isFractionCompletedEqual:(id)arg1;
- (BOOL)isIndeterminate;
- (BOOL)isNaN;
- (void)multiplyByFraction:(id)arg1;
- (BOOL)overflowed;
- (void)setCompleted:(long long)arg1;
- (void)setTotal:(long long)arg1;
- (void)simplify;
- (void)subtractFraction:(id)arg1;
- (long long)total;

@end
