/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface LSApplicationRestrictionsManager : NSObject

@property (getter=isAdTrackingEnabled, atomic, readonly) BOOL adTrackingEnabled;
@property (atomic, readonly) NSSet *blacklistedBundleIDs;
@property (atomic, readonly) NSNumber *maximumRating;
@property (getter=isOpenInRestrictionInEffect, atomic, readonly) BOOL openInRestrictionInEffect;
@property (atomic, readonly) NSSet *restrictedBundleIDs;
@property (getter=isSystemAppDeletionEnabled, atomic, readonly) BOOL systemAppDeletionEnabled;
@property (getter=isWhitelistEnabled, atomic, readonly) BOOL whitelistEnabled;
@property (atomic, readonly) NSSet *whitelistedBundleIDs;

+ (id)activeRestrictionIdentifiers;
+ (id)sharedInstance;

- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3;
- (void)beginListeningForChanges;
- (id)blacklistedBundleIDs;
- (BOOL)cleanRemovedSystemApplicationsList;
- (void)effectiveSettingsChanged;
- (id)identifierForRemovedAppPrompt:(id)arg1;
- (BOOL)isAdTrackingEnabled;
- (BOOL)isAppExtensionRestricted:(id)arg1;
- (BOOL)isApplicationRestricted:(id)arg1;
- (BOOL)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(BOOL)arg2;
- (BOOL)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2;
- (BOOL)isOpenInRestrictionInEffect;
- (BOOL)isRatingAllowed:(id)arg1;
- (BOOL)isSystemAppDeletionEnabled;
- (BOOL)isWhitelistEnabled;
- (id)maximumRating;
- (id)restrictedBundleIDs;
- (BOOL)setApplication:(id)arg1 removed:(BOOL)arg2;
- (id)whitelistedBundleIDs;

@end