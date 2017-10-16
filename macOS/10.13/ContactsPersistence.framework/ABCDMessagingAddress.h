/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface ABCDMessagingAddress : ABCDOwnedObject

@property (nonatomic, readwrite, retain) NSString *address;
@property (nonatomic, readwrite, retain) NSString *associatedServiceName;
@property (nonatomic, readwrite, copy) NSArray *bundleIdentifiers;
@property (atomic, readwrite, copy) NSString *bundleIdentifiersString;
@property (nonatomic, readwrite, retain) ABCDService *service;
@property (nonatomic, readwrite, copy) NSString *teamIdentifier;
@property (nonatomic, readwrite, retain) NSString *userIdentifier;

+ (id)keyPathsForValuesAffectingBundleIdentifiers;

- (id)associatedServiceName;
- (id)bundleIdentifiers;
- (void)setAssociatedServiceName:(id)arg1;
- (void)setBundleIdentifiers:(id)arg1;

@end
