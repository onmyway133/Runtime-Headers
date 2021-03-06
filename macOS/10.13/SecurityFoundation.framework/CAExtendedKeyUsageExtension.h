/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface CAExtendedKeyUsageExtension : NSObject {
    int  _caCertAuthorityExtendedKUEAny;
    int  _caCertAuthorityExtendedKUEClAuthPKINIT;
    int  _caCertAuthorityExtendedKUECodeSigning;
    int  _caCertAuthorityExtendedKUECodeSigningApple;
    int  _caCertAuthorityExtendedKUECodeSigningDevelopment;
    int  _caCertAuthorityExtendedKUEDotMacEmailEncryption;
    int  _caCertAuthorityExtendedKUEDotMacEmailSigning;
    int  _caCertAuthorityExtendedKUEEmailProtection;
    int  _caCertAuthorityExtendedKUEIsCritical;
    int  _caCertAuthorityExtendedKUEPresent;
    int  _caCertAuthorityExtendedKUESSLClientAuth;
    int  _caCertAuthorityExtendedKUESSLServerAuth;
    int  _caCertAuthorityExtendedKUESrvrAuthPKINIT;
    int  _caCertAuthorityExtendedKUEiChatEncryption;
    int  _caCertAuthorityExtendedKUEiChatSigning;
    BOOL  _caDoneCAExtendedKUExts;
    int  _caExtendedKUEAny;
    int  _caExtendedKUEClAuthPKINIT;
    int  _caExtendedKUECodeSigning;
    int  _caExtendedKUECodeSigningApple;
    int  _caExtendedKUECodeSigningDevelopment;
    int  _caExtendedKUEDotMacEmailEncryption;
    int  _caExtendedKUEDotMacEmailSigning;
    int  _caExtendedKUEEmailProtection;
    int  _caExtendedKUEIsCritical;
    struct cssm_data { 
        unsigned long long Length; 
        char *Data; 
    }  _caExtendedKUEOIDs;
    int  _caExtendedKUEPresent;
    int  _caExtendedKUESSLClientAuth;
    int  _caExtendedKUESSLServerAuth;
    int  _caExtendedKUESrvrAuthPKINIT;
    int  _caExtendedKUEiChatEncryption;
    int  _caExtendedKUEiChatSigning;
    int  _caUserExtendedKUEAny;
    int  _caUserExtendedKUEClAuthPKINIT;
    int  _caUserExtendedKUECodeSigning;
    int  _caUserExtendedKUECodeSigningApple;
    int  _caUserExtendedKUECodeSigningDevelopment;
    int  _caUserExtendedKUEDotMacEmailEncryption;
    int  _caUserExtendedKUEDotMacEmailSigning;
    int  _caUserExtendedKUEEmailProtection;
    int  _caUserExtendedKUEIsCritical;
    int  _caUserExtendedKUEPresent;
    int  _caUserExtendedKUESSLClientAuth;
    int  _caUserExtendedKUESSLServerAuth;
    int  _caUserExtendedKUESrvrAuthPKINIT;
    int  _caUserExtendedKUEiChatEncryption;
    int  _caUserExtendedKUEiChatSigning;
}

- (BOOL)_alreadySpecifiedCertAuthorityValues;
- (BOOL)_anyUsage;
- (BOOL)_codeSigningAppleUsage;
- (BOOL)_codeSigningDevelopmentUsage;
- (BOOL)_codeSigningUsage;
- (BOOL)_dotMacEmailEncryptionUsage;
- (BOOL)_dotMacEmailSigningUsage;
- (BOOL)_emailProtectionUsage;
- (void)_fillInValuesInExtension:(struct __CE_DataAndType { int x1; union { struct __CE_AuthorityKeyID { int x_1_2_1; struct cssm_data { unsigned long long x_2_3_1; char *x_2_3_2; } x_1_2_2; int x_1_2_3; struct __CE_GeneralNames {} *x_1_2_4; int x_1_2_5; struct cssm_data { unsigned long long x_6_3_1; char *x_6_3_2; } x_1_2_6; } x_2_1_1; struct cssm_data { unsigned long long x_2_2_1; char *x_2_2_2; } x_2_1_2; unsigned short x_2_1_3; struct __CE_GeneralNames { unsigned int x_4_2_1; struct __CE_GeneralName {} *x_4_2_2; } x_2_1_4; struct __CE_GeneralNames { unsigned int x_5_2_1; struct __CE_GeneralName {} *x_5_2_2; } x_2_1_5; struct __CE_ExtendedKeyUsage { unsigned int x_6_2_1; struct cssm_data {} *x_6_2_2; } x_2_1_6; struct __CE_BasicConstraints { int x_7_2_1; int x_7_2_2; unsigned int x_7_2_3; } x_2_1_7; struct __CE_CertPolicies { unsigned int x_8_2_1; struct __CE_PolicyInformation {} *x_8_2_2; } x_2_1_8; unsigned short x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; struct __CE_CRLDistPointsSyntax { unsigned int x_13_2_1; struct __CE_CRLDistributionPoint {} *x_13_2_2; } x_2_1_13; } x2; }*)arg1 isCACertBeingCreated:(BOOL)arg2 extensionIsPresent:(BOOL*)arg3;
- (BOOL)_iChatEncryptionUsage;
- (BOOL)_iChatSigningUsage;
- (BOOL)_isCritical;
- (BOOL)_isPresent;
- (BOOL)_pkinitClientAuthUsage;
- (BOOL)_pkinitServerAuthUsage;
- (void)_saveCertAuthorityPanelValues;
- (void)_saveUserPanelValues;
- (void)_setAlreadySpecifiedCertAuthorityValues:(BOOL)arg1;
- (void)_setAnyUsage:(id)arg1;
- (void)_setCodeSigningUsage:(id)arg1;
- (void)_setDotMacEmailEncryptionUsage:(id)arg1;
- (void)_setEDotMacEmailSigningUsage:(id)arg1;
- (void)_setEmailProtectionUsage:(id)arg1;
- (void)_setExtendedKUECodeSigningApple:(id)arg1;
- (void)_setExtendedKUECodeSigningDevelopment:(id)arg1;
- (void)_setIChatEncryptionUsage:(id)arg1;
- (void)_setIChatSigningUsage:(id)arg1;
- (void)_setIsCritical:(id)arg1;
- (void)_setIsPresent:(id)arg1;
- (void)_setPKINITClientAuthUsage:(id)arg1;
- (void)_setPKINITServerAuthUsage:(id)arg1;
- (void)_setSSLClientAuthUsage:(id)arg1;
- (void)_setSSLServerAuthUsage:(id)arg1;
- (void)_setToCodeSigning;
- (void)_setToDefaults;
- (void)_setToPresentCritical;
- (void)_setToSMIME;
- (void)_setToSSLClient;
- (void)_setToSSLServer;
- (BOOL)_sslClientAuthUsage;
- (BOOL)_sslServerAuthUsage;
- (void)_updatePanelToCertAuthorityValues;
- (void)_updatePanelToUserValues;
- (BOOL)_validate;

@end
