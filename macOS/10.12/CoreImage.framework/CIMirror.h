/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIMirror : CIFilter {
    NSNumber * inputAngle;
    CIImage * inputImage;
    CIVector * inputPoint;
}

@property (nonatomic, readwrite, retain) NSNumber *inputAngle;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) CIVector *inputPoint;

+ (id)customAttributes;

- (id)_kernel;
- (struct Rectangle { double x1; double x2; double x3; double x4; })computeDOD:(struct vec2 { float x1; float x2; })arg1 tst:(struct vec3 { float x1; float x2; float x3; })arg2 off:(struct vec4 { float x1; float x2; float x3; float x4; })arg3 mtx:(struct vec4 { float x1; float x2; float x3; float x4; })arg4;
- (id)inputAngle;
- (id)inputImage;
- (id)inputPoint;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputPoint:(id)arg1;

@end
