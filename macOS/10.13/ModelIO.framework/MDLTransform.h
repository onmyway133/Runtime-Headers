/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
 */

@interface MDLTransform : NSObject <MDLTransformComponent, NSCopying> {
    struct MDLAffineTransform { 
        struct vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__begin_"^{pair<double, float __attribute__((ext_vector_type(3)))> {} _keyedTranslation; 
        struct pair<double, float __attribute__((ext_vector_type(3)))> {} *__end_; 
        struct __compressed_pair<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> *, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__first_"^{pair<double, float __attribute__((ext_vector_type(3)))> {} __end_cap_; 
    }  _transform;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *keyTimes;
@property (nonatomic, readwrite) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } matrix;
@property (nonatomic, readonly) double maximumTime;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic, readwrite) BOOL resetsTransform;
@property (nonatomic, readwrite) void rotation;
@property (nonatomic, readwrite) void scale;
@property (nonatomic, readwrite) void shear;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) CAAnimation *transformAnimation;
@property (nonatomic, readwrite) void translation;

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })globalTransformWithObject:(id)arg1 atTime:(double)arg2;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localTransformWithObject:(id)arg1 atTime:(double)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithIdentity;
- (id)initWithMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)initWithMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 resetsTransform:(BOOL)arg2;
- (id)initWithTransformComponent:(id)arg1;
- (id)initWithTransformComponent:(id)arg1 resetsTransform:(BOOL)arg2;
- (id)keyTimes;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localTransformAtTime:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })matrix;
- (double)maximumTime;
- (double)minimumTime;
- (BOOL)resetsTransform;
- (void)rotation;
- (void)rotationAtTime:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rotationMatrixAtTime:(double)arg1;
- (void)scale;
- (void)scaleAtTime:(double)arg1;
- (void)setIdentity;
- (void)setLocalTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setLocalTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forTime:(double)arg2;
- (void)setMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forTime:(double)arg2;
- (void)setResetsTransform:(BOOL)arg1;
- (void)setRotation;
- (void)setRotation:(void *)arg1 forTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setScale;
- (void)setScale:(void *)arg1 forTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setShear;
- (void)setShear:(void *)arg1 forTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setTranslation;
- (void)setTranslation:(void *)arg1 forTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)shear;
- (void)shearAtTime:(double)arg1;
- (id)transformAnimation;
- (void)translation;
- (void)translationAtTime:(double)arg1;

@end