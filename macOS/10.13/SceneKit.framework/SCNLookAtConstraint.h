/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNLookAtConstraint : SCNConstraint {
    BOOL  _gimbalLockEnabled;
    struct SCNVector3 { 
        double x; 
        double y; 
        double z; 
    }  _localFront;
    SCNNode * _target;
    struct SCNVector3 { 
        double x; 
        double y; 
        double z; 
    }  _targetOffset;
    struct SCNVector3 { 
        double x; 
        double y; 
        double z; 
    }  _upVector;
}

@property (nonatomic, readwrite) BOOL gimbalLockEnabled;
@property (nonatomic, readwrite) struct SCNVector3 { double x1; double x2; double x3; } localFront;
@property (nonatomic, readwrite, retain) SCNNode *target;
@property (nonatomic, readwrite) struct SCNVector3 { double x1; double x2; double x3; } targetOffset;
@property (nonatomic, readwrite) struct SCNVector3 { double x1; double x2; double x3; } worldUp;

+ (id)lookAtConstraintWithTarget:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)_customDecodingOfSCNLookAtConstraint:(id)arg1;
- (void)_customEncodingOfSCNLookAtConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)gimbalLockEnabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (struct SCNVector3 { double x1; double x2; double x3; })localFront;
- (void)setGimbalLockEnabled:(BOOL)arg1;
- (void)setLocalFront:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setTarget:(id)arg1;
- (void)setTargetOffset:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setUpVector:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setWorldUp:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (id)target;
- (struct SCNVector3 { double x1; double x2; double x3; })targetOffset;
- (struct SCNVector3 { double x1; double x2; double x3; })upVector;
- (struct SCNVector3 { double x1; double x2; double x3; })worldUp;

@end