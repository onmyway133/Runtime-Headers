/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
 */

@interface CNVCardOptions : NSObject {
    NSArray * _availableEncodings;
    BOOL  _compressPhotos;
    BOOL  _includeNotes;
    BOOL  _includePhotos;
    BOOL  _includePrivateBundleIdentifiers;
    BOOL  _includePrivateFields;
    BOOL  _includeUserSettings;
    unsigned long long  _maximumEncodingLength;
    unsigned long long  _maximumImageEncodingLength;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumImageSize;
    unsigned long long  _outputVersion;
    BOOL  _prefersUncroppedPhotos;
    NSArray * _treatAsUnknownProperties;
    BOOL  _usePhotoReferencesIfAvailable;
}

@property (atomic, readwrite, copy) NSArray *availableEncodings;
@property (atomic, readwrite) BOOL compressPhotos;
@property (atomic, readwrite) BOOL includeNotes;
@property (atomic, readwrite) BOOL includePhotos;
@property (atomic, readwrite) BOOL includePrivateBundleIdentifiers;
@property (atomic, readwrite) BOOL includePrivateFields;
@property (atomic, readwrite) BOOL includeUserSettings;
@property (atomic, readwrite) unsigned long long maximumEncodingLength;
@property (atomic, readwrite) unsigned long long maximumImageEncodingLength;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } maximumImageSize;
@property (atomic, readwrite) unsigned long long outputVersion;
@property (atomic, readwrite) BOOL prefersUncroppedPhotos;
@property (atomic, readwrite, copy) NSArray *treatAsUnknownProperties;
@property (atomic, readwrite) BOOL usePhotoReferencesIfAvailable;

+ (id)optionsFromPreferences;

- (void).cxx_destruct;
- (id)availableEncodings;
- (BOOL)compressPhotos;
- (BOOL)includeNotes;
- (BOOL)includePhotos;
- (BOOL)includePrivateBundleIdentifiers;
- (BOOL)includePrivateFields;
- (BOOL)includeUserSettings;
- (id)init;
- (unsigned long long)maximumEncodingLength;
- (unsigned long long)maximumImageEncodingLength;
- (struct CGSize { double x1; double x2; })maximumImageSize;
- (unsigned long long)outputVersion;
- (BOOL)prefersUncroppedPhotos;
- (void)setAvailableEncodings:(id)arg1;
- (void)setCompressPhotos:(BOOL)arg1;
- (void)setIncludeNotes:(BOOL)arg1;
- (void)setIncludePhotos:(BOOL)arg1;
- (void)setIncludePrivateBundleIdentifiers:(BOOL)arg1;
- (void)setIncludePrivateFields:(BOOL)arg1;
- (void)setIncludeUserSettings:(BOOL)arg1;
- (void)setMaximumEncodingLength:(unsigned long long)arg1;
- (void)setMaximumImageEncodingLength:(unsigned long long)arg1;
- (void)setMaximumImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOutputVersion:(unsigned long long)arg1;
- (void)setPrefersUncroppedPhotos:(BOOL)arg1;
- (void)setTreatAsUnknownProperties:(id)arg1;
- (void)setUsePhotoReferencesIfAvailable:(BOOL)arg1;
- (id)treatAsUnknownProperties;
- (BOOL)usePhotoReferencesIfAvailable;

@end