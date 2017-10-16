/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIDisparitySmoothingProcessor : CIImageProcessorKernel

+ (int)formatForInputAtIndex:(int)arg1;
+ (int)outputFormat;
+ (bool)outputIsOpaque;
+ (BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (bool)synchronizeInputs;

@end
