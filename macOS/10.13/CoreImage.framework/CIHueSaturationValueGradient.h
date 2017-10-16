/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIHueSaturationValueGradient : CIFilter {
    id  inputColorSpace;
    NSNumber * inputDither;
    NSNumber * inputRadius;
    NSNumber * inputSoftness;
    NSNumber * inputValue;
}

@property (nonatomic, readwrite, retain) id inputColorSpace;
@property (nonatomic, readwrite, retain) NSNumber *inputDither;
@property (nonatomic, readwrite, retain) NSNumber *inputRadius;
@property (nonatomic, readwrite, retain) NSNumber *inputSoftness;
@property (nonatomic, readwrite, retain) NSNumber *inputValue;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelD;
- (id)inputColorSpace;
- (id)inputDither;
- (id)inputRadius;
- (id)inputSoftness;
- (id)inputValue;
- (id)outputImage;
- (void)setInputColorSpace:(id)arg1;
- (void)setInputDither:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputSoftness:(id)arg1;
- (void)setInputValue:(id)arg1;

@end
