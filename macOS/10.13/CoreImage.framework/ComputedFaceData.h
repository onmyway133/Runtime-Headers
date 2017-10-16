/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface ComputedFaceData : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _adjustmentRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _betweenTheEyes;
    float  _eyeTiltAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _faceCenter;
    int  _faceIndex;
    BOOL  _hasLeftEyePosition;
    BOOL  _hasMouthPosition;
    BOOL  _hasRightEyePosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headRect;
    double  _iOD;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftEye;
    struct CGPoint { double x1; double x2; } * _leftIrisSeedPoints;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftRightVec;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mouthCenter;
    struct CGPoint { double x1; double x2; } * _neckSeedPoints;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightEye;
    struct CGPoint { double x1; double x2; } * _rightIrisSeedPoints;
    Rgon * _skinSampleRgon;
    int  _skinSeedPointCount;
    struct CGPoint { double x1; double x2; } * _skinSeedPoints;
    struct CGPoint { double x1; double x2; } * _teethSeedPoints;
    struct CGPoint { 
        double x; 
        double y; 
    }  leftIrisSeedPointArray;
    struct CGPoint { 
        double x; 
        double y; 
    }  neckSeedPointArray;
    struct CGPoint { 
        double x; 
        double y; 
    }  rightIrisSeedPointArray;
    struct CGPoint { 
        double x; 
        double y; 
    }  skinSeedPointArray;
    struct CGPoint { 
        double x; 
        double y; 
    }  teethSeedPointArray;
}

@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } adjustmentRect;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } betweenTheEyes;
@property (atomic, readwrite) float eyeTiltAngle;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceBounds;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } faceCenter;
@property (atomic, readwrite) int faceIndex;
@property (atomic, readwrite) BOOL hasLeftEyePosition;
@property (atomic, readwrite) BOOL hasMouthPosition;
@property (atomic, readwrite) BOOL hasRightEyePosition;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } headRect;
@property (atomic, readwrite) double iOD;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageRect;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } leftEye;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; }*leftIrisSeedPoints;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } leftRightVec;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } mouthCenter;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; }*neckSeedPoints;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } rightEye;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; }*rightIrisSeedPoints;
@property (nonatomic, readwrite, retain) Rgon *skinSampleRgon;
@property (atomic, readwrite) int skinSeedPointCount;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; }*skinSeedPoints;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; }*teethSeedPoints;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustmentRect;
- (struct CGPoint { double x1; double x2; })betweenTheEyes;
- (void)dealloc;
- (float)eyeTiltAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBounds;
- (struct CGPoint { double x1; double x2; })faceCenter;
- (int)faceIndex;
- (BOOL)hasLeftEyePosition;
- (BOOL)hasMouthPosition;
- (BOOL)hasRightEyePosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headRect;
- (double)iOD;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRect;
- (id)init;
- (struct CGPoint { double x1; double x2; })leftEye;
- (struct CGPoint { double x1; double x2; }*)leftIrisSeedPoints;
- (struct CGPoint { double x1; double x2; })leftRightVec;
- (struct CGPoint { double x1; double x2; })mouthCenter;
- (struct CGPoint { double x1; double x2; }*)neckSeedPoints;
- (struct CGPoint { double x1; double x2; })rightEye;
- (struct CGPoint { double x1; double x2; }*)rightIrisSeedPoints;
- (void)setAdjustmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBetweenTheEyes:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEyeTiltAngle:(float)arg1;
- (void)setFaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFaceCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFaceIndex:(int)arg1;
- (void)setHasLeftEyePosition:(BOOL)arg1;
- (void)setHasMouthPosition:(BOOL)arg1;
- (void)setHasRightEyePosition:(BOOL)arg1;
- (void)setHeadRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIOD:(double)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLeftEye:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLeftIrisSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setLeftRightVec:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMouthCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeckSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setRightEye:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightIrisSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setSkinSampleRgon:(id)arg1;
- (void)setSkinSeedPointCount:(int)arg1;
- (void)setSkinSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setTeethSeedPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (id)skinSampleRgon;
- (int)skinSeedPointCount;
- (struct CGPoint { double x1; double x2; }*)skinSeedPoints;
- (struct CGPoint { double x1; double x2; }*)teethSeedPoints;

@end
