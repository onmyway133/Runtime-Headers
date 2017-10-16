/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIClamp : CIFilter {
    CIVector * inputExtent;
    CIImage * inputImage;
}

@property (nonatomic, readwrite, retain) CIVector *inputExtent;
@property (nonatomic, readwrite, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)inputExtent;
- (id)inputImage;
- (id)outputImage;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
