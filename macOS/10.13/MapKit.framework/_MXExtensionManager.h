/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MXExtensionManager : NSObject {
    <_MXExtensionManagerDelegate> * _delegate;
    _MXExtensionProvider * _extensionProvider;
    <_MXExtensionLookupPolicy> * _lookupPolicy;
    id  _matchingContext;
}

@property (nonatomic, readwrite) <_MXExtensionManagerDelegate> *delegate;
@property (nonatomic, readwrite, retain) _MXExtensionProvider *extensionProvider;
@property (nonatomic, readonly) <_MXExtensionLookupPolicy> *lookupPolicy;
@property (nonatomic, readwrite, retain) id matchingContext;

+ (id)_extensionsWithLookupPolicy:(id)arg1;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)arg1;
+ (id)_lookupPolicyForIntentsExtensions;
+ (id)_lookupPolicyForNonUIExtension;
+ (id)_lookupPolicyForUIExtension;
+ (id)_lookupPolicyWithBlock:(id)arg1;
+ (id)_lookupPolicyWithExtensionPointNames:(id)arg1;
+ (id)_queue;
+ (id)lookupPolicyForExtensionWithCapabilities:(id)arg1;
+ (id)lookupPolicyForExtensionWithCapability:(id)arg1;
+ (id)managerWithExtensionLookupPolicy:(id)arg1 updateHandler:(id)arg2;
+ (id)managerWithLookupPolicy:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)extensionProvider;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 extensionProvider:(id)arg3;
- (void)invalidate;
- (id)lookupPolicy;
- (id)matchingContext;
- (void)setDelegate:(id)arg1;
- (void)setExtensionProvider:(id)arg1;
- (void)setMatchingContext:(id)arg1;

// _MXExtensionManager (RideSharingLookupPolicy)

+ (id)lookupPolicyForRideSharingExtensions;

@end
