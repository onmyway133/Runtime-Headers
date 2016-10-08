/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIFaceBalance : CIFilter <_CIFilterProperties> {
    CIImage * inputImage;
    NSNumber * inputOrigI;
    NSNumber * inputOrigQ;
    NSNumber * inputStrength;
    NSNumber * inputWarmth;
}

@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputOrigI;
@property (nonatomic, readwrite, retain) NSNumber *inputOrigQ;
@property (nonatomic, readwrite, retain) NSNumber *inputStrength;
@property (nonatomic, readwrite, retain) NSNumber *inputWarmth;

+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)_outputProperties;
- (id)inputImage;
- (id)inputOrigI;
- (id)inputOrigQ;
- (id)inputStrength;
- (id)inputWarmth;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputOrigI:(id)arg1;
- (void)setInputOrigQ:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWarmth:(id)arg1;

@end