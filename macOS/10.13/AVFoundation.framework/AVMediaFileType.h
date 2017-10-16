/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVMediaFileType : NSObject <NSCopying> {
    BOOL  _supportsSampleReferences;
    long long  _supportsSampleReferencesOnce;
    NSString * _uti;
}

@property (nonatomic, readonly) NSString *UTI;
@property (nonatomic, readonly) unsigned int audioFileTypeID;
@property (nonatomic, readonly) NSString *defaultFileExtension;
@property (nonatomic, readonly) NSString *figFormatReaderFileFormat;
@property (nonatomic, readonly) NSSet *supportedMediaTypes;
@property (nonatomic, readonly) BOOL supportsSampleReferences;

+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
+ (id)allFileTypeIdentifiers;
+ (void)initialize;
+ (id)isoFileTypes;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;

- (id)UTI;
- (unsigned int)audioFileTypeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultFileExtension;
- (id)description;
- (id)figFormatReaderFileFormat;
- (id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
- (id)supportedMediaTypes;
- (BOOL)supportsFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (BOOL)supportsOutputSettings:(id)arg1 reason:(id*)arg2;
- (BOOL)supportsSampleReferences;

@end
