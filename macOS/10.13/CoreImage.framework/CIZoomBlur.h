/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIZoomBlur : CIFilter {
    NSNumber * inputAmount;
    CIVector * inputCenter;
    CIImage * inputImage;
}

@property (nonatomic, readwrite, retain) NSNumber *inputAmount;
@property (nonatomic, readwrite, retain) CIVector *inputCenter;
@property (nonatomic, readwrite, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)_kernelNew;
- (id)inputAmount;
- (id)inputCenter;
- (id)inputImage;
- (id)outputImage;
- (void)setInputAmount:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
