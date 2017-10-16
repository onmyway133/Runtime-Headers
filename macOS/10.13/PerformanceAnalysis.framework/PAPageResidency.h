/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAPageResidency : NSObject <NSCoding> {
    unsigned int  copiedPages;
    unsigned int  dirtyPages;
    BOOL  isDetailed;
    unsigned int  reclaimablePages;
    unsigned int  residentNonSpecPages;
    unsigned int  residentPages;
    unsigned int  speculativePages;
    unsigned int  swappedPages;
}

@property (atomic, readwrite) unsigned int copiedPages;
@property (atomic, readwrite) unsigned int dirtyPages;
@property (atomic, readwrite) BOOL isDetailed;
@property (atomic, readwrite) unsigned int reclaimablePages;
@property (atomic, readwrite) unsigned int residentNonSpecPages;
@property (atomic, readwrite) unsigned int residentPages;
@property (atomic, readwrite) unsigned int speculativePages;
@property (atomic, readwrite) unsigned int swappedPages;

- (void)addResidency:(id)arg1;
- (unsigned long long)cleanNonSpecBytes;
- (long long)compareClean:(id)arg1;
- (long long)compareDirty:(id)arg1;
- (long long)compareDirtyAndSwapped:(id)arg1;
- (long long)compareNonSpecResident:(id)arg1;
- (long long)compareResident:(id)arg1;
- (long long)compareSpec:(id)arg1;
- (unsigned long long)copiedBytes;
- (unsigned int)copiedPages;
- (unsigned long long)dirtyBytes;
- (unsigned int)dirtyPages;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPageResidency:(id)arg1;
- (BOOL)isDetailed;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSane;
- (unsigned long long)reclaimableBytes;
- (unsigned int)reclaimablePages;
- (id)resBytesString;
- (id)resString;
- (unsigned long long)residentBytes;
- (unsigned long long)residentNonSpecBytes;
- (unsigned int)residentNonSpecPages;
- (unsigned int)residentPages;
- (void)setCopiedPages:(unsigned int)arg1;
- (void)setDirtyPages:(unsigned int)arg1;
- (void)setIsDetailed:(BOOL)arg1;
- (void)setReclaimablePages:(unsigned int)arg1;
- (void)setResidentNonSpecPages:(unsigned int)arg1;
- (void)setResidentPages:(unsigned int)arg1;
- (void)setSpeculativePages:(unsigned int)arg1;
- (void)setSwappedPages:(unsigned int)arg1;
- (unsigned long long)speculativeBytes;
- (unsigned int)speculativePages;
- (void)subtractResidency:(id)arg1;
- (unsigned long long)swappedBytes;
- (unsigned int)swappedPages;

@end