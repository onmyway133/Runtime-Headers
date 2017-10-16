/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIModTransition : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    NSNumber * inputCompression;
    CIImage * inputImage;
    NSNumber * inputRadius;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

@property (nonatomic, readwrite, retain) NSNumber *inputAngle;
@property (nonatomic, readwrite, retain) CIVector *inputCenter;
@property (nonatomic, readwrite, retain) NSNumber *inputCompression;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputRadius;
@property (nonatomic, readwrite, retain) CIImage *inputTargetImage;
@property (nonatomic, readwrite, retain) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputCompression;
- (id)inputImage;
- (id)inputRadius;
- (id)inputTargetImage;
- (id)inputTime;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputCompression:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;

@end