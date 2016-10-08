/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISharpenLuminance : CIFilter {
    CIImage * inputImage;
    NSNumber * inputSharpness;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputSharpness;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputImage;
- (id)inputSharpness;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputSharpness:(id)arg1;

@end
