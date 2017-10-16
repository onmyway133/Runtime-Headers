/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIDepthBlurEffect : CIFilter {
    NSNumber * inputAperture;
    id  inputAuxDataMetadata;
    AVCameraCalibrationData * inputCalibrationData;
    CIVector * inputChinPositions;
    CIImage * inputDisparityImage;
    CIVector * inputFocusRect;
    CIImage * inputImage;
    CIVector * inputLeftEyePositions;
    NSNumber * inputLumaNoiseScale;
    CIVector * inputNosePositions;
    CIVector * inputRightEyePositions;
    NSNumber * inputScaleFactor;
}

@property (nonatomic, readwrite, retain) NSNumber *inputAperture;
@property (nonatomic, readwrite, retain) id inputAuxDataMetadata;
@property (nonatomic, readwrite, copy) AVCameraCalibrationData *inputCalibrationData;
@property (nonatomic, readwrite, retain) CIVector *inputChinPositions;
@property (atomic, readwrite, retain) CIImage *inputDisparityImage;
@property (nonatomic, readwrite, retain) CIVector *inputFocusRect;
@property (atomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) CIVector *inputLeftEyePositions;
@property (nonatomic, readwrite, retain) NSNumber *inputLumaNoiseScale;
@property (nonatomic, readwrite, retain) CIVector *inputNosePositions;
@property (nonatomic, readwrite, retain) CIVector *inputRightEyePositions;
@property (nonatomic, readwrite, retain) NSNumber *inputScaleFactor;

+ (id)customAttributes;

- (id)_getFocusRect:(id)arg1 focusRect:(id)arg2;
- (id)inputAperture;
- (id)inputAuxDataMetadata;
- (id)inputCalibrationData;
- (id)inputChinPositions;
- (id)inputDisparityImage;
- (id)inputFocusRect;
- (id)inputImage;
- (id)inputLeftEyePositions;
- (id)inputLumaNoiseScale;
- (id)inputNosePositions;
- (id)inputRightEyePositions;
- (id)inputScaleFactor;
- (id)outputImage;
- (void)setInputAperture:(id)arg1;
- (void)setInputAuxDataMetadata:(id)arg1;
- (void)setInputCalibrationData:(id)arg1;
- (void)setInputChinPositions:(id)arg1;
- (void)setInputDisparityImage:(id)arg1;
- (void)setInputFocusRect:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLeftEyePositions:(id)arg1;
- (void)setInputLumaNoiseScale:(id)arg1;
- (void)setInputNosePositions:(id)arg1;
- (void)setInputRightEyePositions:(id)arg1;
- (void)setInputScaleFactor:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
