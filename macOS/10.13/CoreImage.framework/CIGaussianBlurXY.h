/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIGaussianBlurXY : CIFilter {
    CIImage * inputImage;
    NSNumber * inputSigmaX;
    NSNumber * inputSigmaY;
}

@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputSigmaX;
@property (nonatomic, readwrite, retain) NSNumber *inputSigmaY;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)inputImage;
- (id)inputSigmaX;
- (id)inputSigmaY;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputSigmaX:(id)arg1;
- (void)setInputSigmaY:(id)arg1;

@end