/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties> {
    NSString * inputCameraModel;
    NSArray * inputCorrectionInfo;
    CIImage * inputImage;
}

@property (nonatomic, readwrite, copy) NSString *inputCameraModel;
@property (nonatomic, readwrite, copy) NSArray *inputCorrectionInfo;
@property (nonatomic, readwrite, retain) CIImage *inputImage;

- (id)_initFromProperties:(id)arg1;
- (BOOL)_isIdentity;
- (id)_outputProperties;
- (id)inputCameraModel;
- (id)inputCorrectionInfo;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCameraModel:(id)arg1;
- (void)setInputCorrectionInfo:(id)arg1;
- (void)setInputImage:(id)arg1;

@end