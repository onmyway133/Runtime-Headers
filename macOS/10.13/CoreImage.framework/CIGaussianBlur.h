/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIGaussianBlur : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
