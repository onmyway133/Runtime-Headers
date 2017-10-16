/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIPerspectiveCorrection : CIFilter {
    CIVector * inputBottomLeft;
    CIVector * inputBottomRight;
    NSNumber * inputCrop;
    CIImage * inputImage;
    CIVector * inputTopLeft;
    CIVector * inputTopRight;
}

@property (nonatomic, readwrite, retain) CIVector *inputBottomLeft;
@property (nonatomic, readwrite, retain) CIVector *inputBottomRight;
@property (nonatomic, readwrite, retain) NSNumber *inputCrop;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) CIVector *inputTopLeft;
@property (nonatomic, readwrite, retain) CIVector *inputTopRight;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputBottomLeft;
- (id)inputBottomRight;
- (id)inputCrop;
- (id)inputImage;
- (id)inputTopLeft;
- (id)inputTopRight;
- (id)outputImage;
- (void)setInputBottomLeft:(id)arg1;
- (void)setInputBottomRight:(id)arg1;
- (void)setInputCrop:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputTopLeft:(id)arg1;
- (void)setInputTopRight:(id)arg1;

@end
