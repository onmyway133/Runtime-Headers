/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKViewportInfo : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    double  _pitch;
    long long  _tileSize;
    double  _yaw;
    float  _zoomLevel;
}

@property (nonatomic, readwrite) struct { double x1; double x2; } centerCoordinate;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readwrite) double pitch;
@property (nonatomic, readwrite) long long tileSize;
@property (nonatomic, readwrite) double yaw;
@property (nonatomic, readwrite) float zoomLevel;

- (struct { double x1; double x2; })centerCoordinate;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (double)pitch;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPitch:(double)arg1;
- (void)setTileSize:(long long)arg1;
- (void)setYaw:(double)arg1;
- (void)setZoomLevel:(float)arg1;
- (long long)tileSize;
- (double)yaw;
- (float)zoomLevel;

@end
