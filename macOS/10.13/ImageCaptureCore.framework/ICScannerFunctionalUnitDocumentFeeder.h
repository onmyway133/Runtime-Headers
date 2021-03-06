/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
 */

@interface ICScannerFunctionalUnitDocumentFeeder : ICScannerFunctionalUnit {
    id  _dfProps;
}

@property (atomic, readonly) BOOL canDetectDocument;
@property (atomic, readwrite) BOOL documentLoaded;
@property (atomic, readonly) struct CGSize { double x1; double x2; } documentSize;
@property (atomic, readwrite) unsigned long long documentType;
@property (atomic, readwrite) BOOL duplexScanningEnabled;
@property (atomic, readwrite) unsigned long long evenPageOrientation;
@property (atomic, readonly) unsigned long long justification;
@property (atomic, readwrite) unsigned long long oddPageOrientation;
@property (atomic, readonly) BOOL reverseFeederPageOrder;
@property (atomic, readonly) NSIndexSet *supportedDocumentTypes;
@property (atomic, readonly) BOOL supportsDuplexScanning;

- (BOOL)canDetectDocument;
- (id)colorSyncProfilePath;
- (id)currentSettings;
- (void)dealloc;
- (id)description;
- (BOOL)documentLoaded;
- (struct CGSize { double x1; double x2; })documentSize;
- (unsigned long long)documentType;
- (BOOL)duplexScanningEnabled;
- (unsigned long long)evenPageOrientation;
- (void)finalize;
- (id)initWithDictionary:(id)arg1 andScanner:(id)arg2;
- (unsigned long long)justification;
- (unsigned long long)oddPageOrientation;
- (BOOL)reverseFeederPageOrder;
- (void)setDocumentLoaded:(BOOL)arg1;
- (void)setDocumentType:(unsigned long long)arg1;
- (void)setDuplexScanningEnabled:(BOOL)arg1;
- (void)setDuplexSupportLevel:(id)arg1;
- (void)setEvenPageOrientation:(unsigned long long)arg1;
- (void)setOddPageOrientation:(unsigned long long)arg1;
- (id)supportedDocumentTypes;
- (BOOL)supportsDuplexScanning;
- (id)valueForUndefinedKey:(id)arg1;

@end
