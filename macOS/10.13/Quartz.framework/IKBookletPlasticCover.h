/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKBookletPlasticCover : NSObject {
    double  _currentCurveFactor;
    double  _curveFactor;
    struct { union { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; double x_1_1_2[3]; } x1; } * _faceNormals;
    struct { union { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; double x_1_1_2[3]; } x1; } * _invertedVertexNormals;
    double  _materialOpacity;
    double  _materialShininess;
    double  _materialSpecular;
    long long  _meshResolution;
    float  _plasticBlue;
    float  _plasticGreen;
    float  _plasticRed;
    struct { union { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; double x_1_1_2[3]; } x1; } * _points;
    struct { union { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; double x_1_1_2[3]; } x1; } * _vertexNormals;
}

@property (atomic, readwrite) double curveFactor;

- (double)curveFactor;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (void)finalize;
- (id)init;
- (void)setCurveFactor:(double)arg1;
- (void)updateWithCurveFactor:(double)arg1;

@end
