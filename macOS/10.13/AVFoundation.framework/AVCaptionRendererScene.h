/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptionRendererScene : NSObject <NSCopying> {
    AVCaptionRendererSceneInternal * _internal;
}

@property (nonatomic, readonly) BOOL hasActiveCaptions;
@property (nonatomic, readonly) BOOL needsPeriodicRefresh;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasActiveCaptions;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 hasActiveCaptions:(BOOL)arg2 needsPeriodicRefresh:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)needsPeriodicRefresh;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
