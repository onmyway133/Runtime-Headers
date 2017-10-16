/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
 */

@interface SheetSupport : NSObject <AuthenticationHintsDelegate, LAUIAuthenticationSheetDelegate> {
    long long  _authType;
    id  _laContext;
    NSString * _originalUsername;
    NSString * _pamService;
    NSData * _pamToken;
    NSString * _pamUsername;
    struct { unsigned int x1; struct { /* ? */ } *x2; } * _rights;
    NSMutableDictionary * _scLongNames;
    NSMutableArray * _scUsers;
    SFAuthorization * _sfAuthorization;
    LAUIAuthenticationSheetController * _sheetController;
    int  _sheetResult;
    <AuthenticationHintsProvider> * _smartCardProvider;
    <AuthenticationHintsProvider> * _watchProvider;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (Class)_lauiClassFromString:(id)arg1;
+ (BOOL)_legacySmartcard;
+ (void*)_loadLAUI;
+ (void*)_loadSystemAdministrationFramework;
+ (id)_longNameForUser:(id)arg1;
+ (Class)_saClassFromString:(id)arg1;

- (id)_createProviderWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (void)_finishSheet;
- (void)_freeInternals;
- (int)_processSheetCredentials:(unsigned int)arg1 providedUid:(int)arg2;
- (id)_shortNameForUser:(id)arg1;
- (BOOL)_shouldUseTouchId;
- (void)dealloc;
- (int)doSheetAuthorization:(unsigned int)arg1 forWindow:(id)arg2;
- (void)event:(long long)arg1 eventHints:(id)arg2 reply:(id)arg3;
- (id)init;
- (id)initWithAuthorization:(id)arg1 andRights:(struct { unsigned int x1; struct { /* ? */ } *x2; }*)arg2;
- (BOOL)shouldUseSheet;
- (long long)unverifiedDataEntered:(unsigned int)arg1;

@end
