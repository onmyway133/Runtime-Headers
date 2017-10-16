/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNApplicationProxy : NSObject <NSSecureCoding> {
    NSArray * _activityTypes;
    NSString * _applicationIdentifier;
    NSString * _localizedName;
    NSString * _teamIdentifier;
}

@property (nonatomic, readwrite, copy) NSArray *activityTypes;
@property (nonatomic, readwrite, copy) NSString *applicationIdentifier;
@property (nonatomic, readwrite, copy) NSString *localizedName;
@property (nonatomic, readwrite, copy) NSString *teamIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityTypes;
- (id)applicationIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithApplicationIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithLSApplicationProxy:(id)arg1;
- (id)localizedName;
- (void)setActivityTypes:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (id)teamIdentifier;

@end