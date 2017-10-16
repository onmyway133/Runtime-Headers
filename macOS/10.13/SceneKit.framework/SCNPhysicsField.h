/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _active;
    unsigned long long  _categoryBitMask;
    struct SCNVector3 { 
        double x; 
        double y; 
        double z; 
    }  _direction;
    BOOL  _exclusive;
    double  _falloffExponent;
    struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; } * _field;
    struct SCNVector3 { 
        double x; 
        double y; 
        double z; 
    }  _halfExtent;
    double  _minimumDistance;
    SCNNode * _node;
    struct SCNVector3 { 
        double x; 
        double y; 
        double z; 
    }  _offset;
    long long  _scope;
    double  _strength;
    BOOL  _usesEllipsoidalExtent;
    SCNPhysicsWorld * _world;
}

@property (getter=isActive, nonatomic, readwrite) BOOL active;
@property (nonatomic, readwrite) unsigned long long categoryBitMask;
@property (nonatomic, readwrite) struct SCNVector3 { double x1; double x2; double x3; } direction;
@property (getter=isExclusive, nonatomic, readwrite) BOOL exclusive;
@property (nonatomic, readwrite) double falloffExponent;
@property (nonatomic, readwrite) struct SCNVector3 { double x1; double x2; double x3; } halfExtent;
@property (nonatomic, readwrite) double minimumDistance;
@property (nonatomic, readwrite) struct SCNVector3 { double x1; double x2; double x3; } offset;
@property (nonatomic, readwrite) long long scope;
@property (nonatomic, readwrite) double strength;
@property (nonatomic, readwrite) BOOL usesEllipsoidalExtent;

+ (double)_displayScaleFactor;
+ (void)_setDisplayScaleFactor:(double)arg1;
+ (id)customFieldWithEvaluationBlock:(id)arg1;
+ (id)dragField;
+ (id)electricField;
+ (id)field;
+ (id)linearGravityField;
+ (id)magneticField;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)radialGravityField;
+ (id)springField;
+ (BOOL)supportsSecureCoding;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)vortexField;

- (void)_commonInit;
- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; }*)_createField;
- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; }*)_handle;
- (id)_owner;
- (void)_removeOwner;
- (void)_setOwner:(id)arg1;
- (void)_setWorld:(id)arg1;
- (void)_setupCommonProperties;
- (void)_willRemoveFromPhysicsWorld;
- (unsigned long long)categoryBitMask;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct SCNVector3 { double x1; double x2; double x3; })direction;
- (void)encodeWithCoder:(id)arg1;
- (struct SCNVector3 { double x1; double x2; double x3; })evalAtLocation:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (BOOL)exclusive;
- (double)falloffExponent;
- (struct SCNVector3 { double x1; double x2; double x3; })halfExtent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isActive;
- (BOOL)isExclusive;
- (double)minimumDistance;
- (struct SCNVector3 { double x1; double x2; double x3; })offset;
- (long long)scope;
- (void)setActive:(BOOL)arg1;
- (void)setCategoryBitMask:(unsigned long long)arg1;
- (void)setDirection:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setExclusive:(BOOL)arg1;
- (void)setFalloffExponent:(double)arg1;
- (void)setHalfExtent:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setMinimumDistance:(double)arg1;
- (void)setOffset:(struct SCNVector3 { double x1; double x2; double x3; })arg1;
- (void)setScope:(long long)arg1;
- (void)setStrength:(double)arg1;
- (void)setUsesEllipsoidalExtent:(BOOL)arg1;
- (double)strength;
- (BOOL)supportsDirection;
- (BOOL)supportsOffset;
- (BOOL)usesEllipsoidalExtent;

// SCNPhysicsField (SCNUIDynamicUI)

+ (id)SCNUID_creationOptions;
+ (id)SCNUID_instanciateWithOption:(id)arg1;

@end
