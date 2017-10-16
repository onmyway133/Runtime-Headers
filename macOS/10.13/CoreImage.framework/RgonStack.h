/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface RgonStack : NSObject <NSCoding> {
    int  binCount;
    int  binOffset;
    double  binSize;
    NSMutableArray * stack;
    double  zMax;
    int  zMaxindex;
    double  zMin;
    int  zMinindex;
}

@property (atomic, readwrite) double binSize;
@property (atomic, readwrite) double zMax;
@property (atomic, readwrite) int zMaxindex;
@property (atomic, readwrite) double zMin;
@property (atomic, readwrite) int zMinindex;

- (void)AdjustForPointX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (void)CalculateEdges;
- (void)CalculateVertices;
- (float)DistToPointX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)PrintConstraints;
- (void)PrintFacets;
- (void)PrintVertices;
- (double)binSize;
- (int)containsPointPlanarConditionalX2:(float)arg1 Y:(float)arg2 Z:(float)arg3 epsilonDark:(float)arg4 epsilonLight:(float)arg5 epsilonMid:(float)arg6 shouldPrint:(bool)arg7;
- (int)containsPointPlanarConditionalX:(float)arg1 Y:(float)arg2 Z:(float)arg3 epsilonDark:(float)arg4 epsilonLight:(float)arg5;
- (int)containsPointPlanarX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (int)containsPointX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)normalVectorForRgon1:(id)arg1 withZ1:(float)arg2 rgon2:(id)arg3 withZ2:(float)arg4 atIndex:(int)arg5 placedInto:(float*)arg6;
- (void)setBinSize:(double)arg1;
- (void)setZMax:(double)arg1;
- (void)setZMaxindex:(int)arg1;
- (void)setZMin:(double)arg1;
- (void)setZMinindex:(int)arg1;
- (void)test0;
- (double)zMax;
- (int)zMaxindex;
- (double)zMin;
- (int)zMinindex;

@end
