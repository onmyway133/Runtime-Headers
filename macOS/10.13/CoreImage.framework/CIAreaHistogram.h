/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIAreaHistogram : CIFilter {
    CIContext * _context;
    NSNumber * inputCount;
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, readwrite, retain) NSNumber *inputCount;
@property (nonatomic, readwrite, retain) CIVector *inputExtent;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (bool)_inputsAreOK;
- (struct IRect { struct IPoint { long long x_1_1_1; long long x_1_1_2; } x1; struct ISize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })_netExtent;
- (void)dealloc;
- (id)inputCount;
- (id)inputExtent;
- (id)inputImage;
- (id)inputScale;
- (id)outputData;
- (id)outputImage;
- (void)setInputCount:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
