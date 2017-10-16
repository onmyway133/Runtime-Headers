/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
 */

@interface CUTCheckpoint : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _assertsUseAfterFreeze;
    BOOL  _frozen;
    NSString * _name;
    BOOL  _shouldLogTouches;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readwrite) BOOL assertsUseAfterFreeze;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readwrite) BOOL shouldLogTouches;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)_reportDateFormatter;
+ (id)_whitelistedClasses;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3;
- (BOOL)_assertNotFrozen;
- (void)_freeze;
- (id)_freezeBacktrace;
- (id)_reportEndDate;
- (id)_reportMetadata;
- (id)_reportName;
- (id)_reportStartDate;
- (BOOL)assertsUseAfterFreeze;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFrozen;
- (id)name;
- (id)report;
- (void)setAssertsUseAfterFreeze:(BOOL)arg1;
- (void)setShouldLogTouches:(BOOL)arg1;
- (BOOL)shouldLogTouches;
- (id)uniqueIdentifier;

@end
