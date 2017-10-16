/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIColorCurves : CIFilter {
    CIImage * _curvesImage;
    id  inputColorSpace;
    NSData * inputCurvesData;
    CIVector * inputCurvesDomain;
    CIImage * inputImage;
}

@property (nonatomic, readwrite, retain) id inputColorSpace;
@property (nonatomic, readwrite, copy) NSData *inputCurvesData;
@property (nonatomic, readwrite, retain) CIVector *inputCurvesDomain;
@property (nonatomic, readwrite, retain) CIImage *inputImage;

+ (id)customAttributes;

- (BOOL)_checkInputs;
- (id)_kernel;
- (id)curvesImage;
- (void)dealloc;
- (id)inputColorSpace;
- (id)inputCurvesData;
- (id)inputCurvesDomain;
- (id)inputImage;
- (id)outputImage;
- (void)setInputColorSpace:(id)arg1;
- (void)setInputCurvesData:(id)arg1;
- (void)setInputCurvesDomain:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
