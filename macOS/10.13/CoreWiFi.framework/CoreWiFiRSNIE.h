/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiRSNIE : CoreWiFiIE {
    BOOL  allowKeyManagement8021X;
    BOOL  allowKeyManagementPSK;
    BOOL  allowMulticastCipherCCMP;
    BOOL  allowMulticastCipherTKIP;
    BOOL  allowMulticastCipherWEP104;
    BOOL  allowMulticastCipherWEP40;
    BOOL  allowUnicastCipherCCMP;
    BOOL  allowUnicastCipherTKIP;
    BOOL  allowUnicastCipherUseGroup;
    BOOL  hasNoPairwise;
    BOOL  isPeerKeyEnabled;
    NSData * oui;
    NSMutableArray * pmkids;
    unsigned long long  replayCounterGTKSA;
    unsigned long long  replayCounterPTKSA;
    BOOL  supportsPreAuthentication;
    long long  version;
}

@property (nonatomic, readwrite) BOOL allowKeyManagement8021X;
@property (nonatomic, readwrite) BOOL allowKeyManagementPSK;
@property (nonatomic, readwrite) BOOL allowMulticastCipherCCMP;
@property (nonatomic, readwrite) BOOL allowMulticastCipherTKIP;
@property (nonatomic, readwrite) BOOL allowMulticastCipherWEP104;
@property (nonatomic, readwrite) BOOL allowMulticastCipherWEP40;
@property (nonatomic, readwrite) BOOL allowUnicastCipherCCMP;
@property (nonatomic, readwrite) BOOL allowUnicastCipherTKIP;
@property (nonatomic, readwrite) BOOL allowUnicastCipherUseGroup;
@property (nonatomic, readwrite) BOOL hasNoPairwise;
@property (nonatomic, readwrite) BOOL isPeerKeyEnabled;
@property (nonatomic, readwrite, retain) NSData *oui;
@property (nonatomic, readwrite, retain) NSMutableArray *pmkids;
@property (nonatomic, readwrite) unsigned long long replayCounterGTKSA;
@property (nonatomic, readwrite) unsigned long long replayCounterPTKSA;
@property (nonatomic, readwrite) BOOL supportsPreAuthentication;
@property (nonatomic, readonly) long long version;

- (BOOL)allowKeyManagement8021X;
- (BOOL)allowKeyManagementPSK;
- (BOOL)allowMulticastCipherCCMP;
- (BOOL)allowMulticastCipherTKIP;
- (BOOL)allowMulticastCipherWEP104;
- (BOOL)allowMulticastCipherWEP40;
- (BOOL)allowUnicastCipherCCMP;
- (BOOL)allowUnicastCipherTKIP;
- (BOOL)allowUnicastCipherUseGroup;
- (void)appendSuite:(id)arg1 cipher:(unsigned char)arg2;
- (unsigned short)countAKMs;
- (unsigned short)countUnicastCiphers;
- (void)dealloc;
- (id)description;
- (void)generateIE;
- (void)generateMatchingConfig:(id)arg1;
- (BOOL)hasNoPairwise;
- (id)init;
- (id)initWithIE:(id)arg1 withOUI:(id)arg2;
- (BOOL)isPeerKeyEnabled;
- (id)oui;
- (unsigned long long)parseAKM:(char *)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)parseCapabilities:(char *)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)parseGroupCipher:(char *)arg1 withLength:(unsigned long long)arg2;
- (BOOL)parseIE:(id*)arg1;
- (unsigned long long)parsePMKIDs:(char *)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)parsePairwiseCipher:(char *)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)parseVersion:(char *)arg1 withLength:(unsigned long long)arg2;
- (id)pmkids;
- (unsigned long long)replayCounterGTKSA;
- (unsigned long long)replayCounterPTKSA;
- (void)setAKM:(unsigned char)arg1;
- (void)setAllowKeyManagement8021X:(BOOL)arg1;
- (void)setAllowKeyManagementPSK:(BOOL)arg1;
- (void)setAllowMulticastCipherCCMP:(BOOL)arg1;
- (void)setAllowMulticastCipherTKIP:(BOOL)arg1;
- (void)setAllowMulticastCipherWEP104:(BOOL)arg1;
- (void)setAllowMulticastCipherWEP40:(BOOL)arg1;
- (void)setAllowUnicastCipherCCMP:(BOOL)arg1;
- (void)setAllowUnicastCipherTKIP:(BOOL)arg1;
- (void)setAllowUnicastCipherUseGroup:(BOOL)arg1;
- (void)setHasNoPairwise:(BOOL)arg1;
- (void)setIsPeerKeyEnabled:(BOOL)arg1;
- (void)setMulticastCipher:(unsigned char)arg1;
- (void)setOui:(id)arg1;
- (void)setPmkids:(id)arg1;
- (void)setReplayCounterGTKSA:(unsigned long long)arg1;
- (void)setReplayCounterPTKSA:(unsigned long long)arg1;
- (void)setSupportsPreAuthentication:(BOOL)arg1;
- (void)setUnicastCipher:(unsigned char)arg1;
- (BOOL)supportsPreAuthentication;
- (long long)version;

@end
