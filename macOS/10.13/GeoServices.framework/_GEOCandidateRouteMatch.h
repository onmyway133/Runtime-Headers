/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEOCandidateRouteMatch : NSObject {
    double  _courseDelta;
    double  _courseMatchScore;
    double  _courseWeight;
    double  _distanceFromRoute;
    double  _distanceMatchScore;
    double  _distanceWeight;
    BOOL  _isGoodMatch;
    struct { 
        double latitude; 
        double longitude; 
    }  _locationCoordinate;
    double  _maxCourseDelta;
    double  _maxDistance;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
    double  _score;
    unsigned long long  _stepIndex;
}

@property (nonatomic, readwrite) double courseDelta;
@property (nonatomic, readwrite) double courseMatchScore;
@property (nonatomic, readwrite) double courseWeight;
@property (nonatomic, readwrite) double distanceFromRoute;
@property (nonatomic, readwrite) double distanceMatchScore;
@property (nonatomic, readwrite) double distanceWeight;
@property (nonatomic, readwrite) BOOL isGoodMatch;
@property (nonatomic, readwrite) struct { double x1; double x2; } locationCoordinate;
@property (nonatomic, readwrite) double maxCourseDelta;
@property (nonatomic, readwrite) double maxDistance;
@property (nonatomic, readwrite) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;
@property (nonatomic, readwrite) double score;
@property (nonatomic, readwrite) unsigned long long stepIndex;

- (id).cxx_construct;
- (double)courseDelta;
- (double)courseMatchScore;
- (double)courseWeight;
- (id)description;
- (double)distanceFromRoute;
- (double)distanceMatchScore;
- (double)distanceWeight;
- (id)initWithRoute:(id)arg1;
- (BOOL)isGoodMatch;
- (struct { double x1; double x2; })locationCoordinate;
- (double)maxCourseDelta;
- (double)maxDistance;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (double)score;
- (void)setCourseDelta:(double)arg1;
- (void)setCourseMatchScore:(double)arg1;
- (void)setCourseWeight:(double)arg1;
- (void)setDistanceFromRoute:(double)arg1;
- (void)setDistanceMatchScore:(double)arg1;
- (void)setDistanceWeight:(double)arg1;
- (void)setIsGoodMatch:(BOOL)arg1;
- (void)setLocationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setMaxCourseDelta:(double)arg1;
- (void)setMaxDistance:(double)arg1;
- (void)setRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setScore:(double)arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndex;

@end
