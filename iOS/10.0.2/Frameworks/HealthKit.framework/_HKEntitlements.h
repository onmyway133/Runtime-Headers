/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKEntitlements : NSObject {
    NSString * _applicationIdentifier;
    NSDictionary * _entitlementValues;
}

@property (nonatomic, readonly, copy) NSDictionary *entitlementValues;

+ (id)_allowedEntitlementsSet;
+ (id)_entitlementsWithSecTask:(struct __SecTask { }*)arg1 valueOverrides:(id)arg2 error:(id*)arg3;
+ (void)_setEntitlementsForCurrentTask:(id)arg1;
+ (id)entitlementsForCurrentTaskWithError:(id*)arg1;
+ (id)entitlementsWithApplicationIdentifier:(id)arg1;
+ (id)entitlementsWithConnection:(id)arg1 error:(id*)arg2;
+ (id)entitlementsWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithEntitlementValues:(id)arg1;
- (id)_typesFromIdentifierArray:(id)arg1;
- (id)applicationIdentifier;
- (id)entitlementValues;
- (bool)hasEntitlement:(id)arg1;
- (id)init;
- (id)stringForEntitlement:(id)arg1;
- (id)typesForReadAuthorizationOverride;
- (id)typesForWriteAuthorizationOverride;
- (id)valueForEntitlement:(id)arg1;

@end
