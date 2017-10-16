/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIPortraitBlurPreProcess : CIFilter {
    CIImage * inputBlurmapImage;
    CIImage * inputImage;
    NSNumber * inputUseMetal;
}

@property (atomic, readwrite, retain) CIImage *inputBlurmapImage;
@property (atomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, copy) NSNumber *inputUseMetal;

- (id)_kernel;
- (id)_kernelMetal;
- (id)inputBlurmapImage;
- (id)inputImage;
- (id)inputUseMetal;
- (id)outputImage;
- (void)setInputBlurmapImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputUseMetal:(id)arg1;

@end
