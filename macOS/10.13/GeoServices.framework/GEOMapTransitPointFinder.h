/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapTransitPointFinder : GEOMapRequest {
    struct { 
        double x; 
        double y; 
    }  _centerPoint;
    double  _mapRadius;
    unsigned long long  _parentID;
    unsigned long long  _pointID;
    GEOMapTileFinder * _tileFinder;
}

@property (nonatomic, readonly) GEOMapAccess *map;

- (void).cxx_destruct;
- (void)_validatePoint:(struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; short x8; unsigned char x9; struct { /* ? */ } *x10; float x11; float x12; unsigned int x13; unsigned char x14; BOOL x15; BOOL x16; BOOL x17; }*)arg1 rect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 localSearch:(struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })arg3 validPointHandler:(id)arg4;
- (void)cancel;
- (void)findTransitPointsOfType:(unsigned long long)arg1 nodeHandler:(id)arg2 accessPointHandler:(id)arg3;
- (id)initWithMap:(id)arg1 approxLocation:(struct { double x1; double x2; })arg2 parentID:(unsigned long long)arg3;
- (id)initWithMap:(id)arg1 approxLocation:(struct { double x1; double x2; })arg2 pointID:(unsigned long long)arg3;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (id)map;

@end
