/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CISharpenLuminance : CIFilter {
    CIImage * inputImage;
    NSNumber * inputSharpness;
}

@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputSharpness;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputImage;
- (id)inputSharpness;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputSharpness:(id)arg1;

@end
