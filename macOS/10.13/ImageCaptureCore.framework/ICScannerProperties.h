/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
 */

@interface ICScannerProperties : NSObject {
    BOOL  _available;
    NSArray * _availableFunctionalUnitTypes;
    NSString * _defaultUsername;
    NSArray * _devicePreferredResolutions;
    NSString * _documentName;
    NSString * _documentUTI;
    NSURL * _downloadsDirectory;
    id  _lastSelectedFunctionalUnit;
    unsigned int  _maxMemoryBandSize;
    BOOL  _numOpenSessionRetries;
    BOOL  _requestedToCancelScan;
    BOOL  _scanCanceled;
    NSMutableDictionary * _scanContext;
    BOOL  _scanParamsRetained;
    id  _selectedFunctionalUnit;
    BOOL  _supportsICARawFileFormat;
    unsigned long long  _transferMode;
}

@property (atomic, readwrite) BOOL available;
@property (atomic, readwrite, retain) NSArray *availableFunctionalUnitTypes;
@property (atomic, readwrite, copy) NSString *defaultUsername;
@property (atomic, readwrite, retain) NSArray *devicePreferredResolutions;
@property (atomic, readwrite, copy) NSString *documentName;
@property (atomic, readwrite, copy) NSString *documentUTI;
@property (atomic, readwrite, retain) NSURL *downloadsDirectory;
@property (atomic, readwrite, retain) id lastSelectedFunctionalUnit;
@property (atomic, readwrite) unsigned int maxMemoryBandSize;
@property (atomic, readwrite) BOOL numOpenSessionRetries;
@property (atomic, readwrite) BOOL requestedToCancelScan;
@property (atomic, readwrite) BOOL scanCanceled;
@property (atomic, readwrite, retain) NSMutableDictionary *scanContext;
@property (atomic, readwrite) BOOL scanParamsRetained;
@property (atomic, readwrite, retain) id selectedFunctionalUnit;
@property (atomic, readwrite) BOOL supportsICARawFileFormat;
@property (atomic, readwrite) unsigned long long transferMode;

- (BOOL)available;
- (id)availableFunctionalUnitTypes;
- (void)dealloc;
- (id)defaultUsername;
- (id)devicePreferredResolutions;
- (id)documentName;
- (id)documentUTI;
- (id)downloadsDirectory;
- (void)finalize;
- (id)lastSelectedFunctionalUnit;
- (unsigned int)maxMemoryBandSize;
- (BOOL)numOpenSessionRetries;
- (BOOL)requestedToCancelScan;
- (BOOL)scanCanceled;
- (id)scanContext;
- (BOOL)scanParamsRetained;
- (id)selectedFunctionalUnit;
- (void)setAvailable:(BOOL)arg1;
- (void)setAvailableFunctionalUnitTypes:(id)arg1;
- (void)setDefaultUsername:(id)arg1;
- (void)setDevicePreferredResolutions:(id)arg1;
- (void)setDocumentName:(id)arg1;
- (void)setDocumentUTI:(id)arg1;
- (void)setDownloadsDirectory:(id)arg1;
- (void)setLastSelectedFunctionalUnit:(id)arg1;
- (void)setMaxMemoryBandSize:(unsigned int)arg1;
- (void)setNumOpenSessionRetries:(BOOL)arg1;
- (void)setRequestedToCancelScan:(BOOL)arg1;
- (void)setScanCanceled:(BOOL)arg1;
- (void)setScanContext:(id)arg1;
- (void)setScanParamsRetained:(BOOL)arg1;
- (void)setSelectedFunctionalUnit:(id)arg1;
- (void)setSupportsICARawFileFormat:(BOOL)arg1;
- (void)setTransferMode:(unsigned long long)arg1;
- (BOOL)supportsICARawFileFormat;
- (unsigned long long)transferMode;

@end