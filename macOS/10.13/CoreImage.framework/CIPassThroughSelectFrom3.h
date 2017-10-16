/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIPassThroughSelectFrom3 : CIFilter {
    CIImage * inputImage;
    CIImage * inputImage1;
    CIImage * inputImage2;
    NSNumber * inputSelected;
}

@property (atomic, readwrite, retain) CIImage *inputImage;
@property (atomic, readwrite, retain) CIImage *inputImage1;
@property (atomic, readwrite, retain) CIImage *inputImage2;
@property (nonatomic, readwrite, copy) NSNumber *inputSelected;

- (id)inputImage;
- (id)inputImage1;
- (id)inputImage2;
- (id)inputSelected;
- (id)outputImage;
- (void)setInputImage1:(id)arg1;
- (void)setInputImage2:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSelected:(id)arg1;

@end
