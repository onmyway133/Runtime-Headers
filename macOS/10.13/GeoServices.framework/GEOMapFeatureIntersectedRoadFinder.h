/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder

- (id)_findRoadsFromJunction:(id)arg1 outboundRoads:(BOOL)arg2 roadToIgnore:(id)arg3 handler:(id)arg4 completionHandler:(id)arg5;
- (void)_tilesAdjacentToTile:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1 atPoint:(struct { float x1; float x2; })arg2 withHandler:(id)arg3;
- (id)findRoadsFromJunction:(id)arg1 handler:(id)arg2 completionHandler:(id)arg3;
- (id)findRoadsFromNextIntersectionOf:(id)arg1 handler:(id)arg2 completionHandler:(id)arg3;
- (id)findRoadsFromPreviousIntersectionOf:(id)arg1 handler:(id)arg2 completionHandler:(id)arg3;
- (id)findRoadsToJunction:(id)arg1 handler:(id)arg2 completionHandler:(id)arg3;
- (id)findRoadsToNextIntersectionOf:(id)arg1 handler:(id)arg2 completionHandler:(id)arg3;
- (id)findRoadsToPreviousIntersectionOf:(id)arg1 handler:(id)arg2 completionHandler:(id)arg3;

@end
