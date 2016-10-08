/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface __AVPlayerLayerView : UIView {
    AVPictureInPicturePlayerLayerView * _pictureInPicturePlayerLayerView;
    AVPlayerController * _playerController;
}

@property (nonatomic, readonly) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;
@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (getter=isReadyForDisplay, nonatomic, readonly) bool readyForDisplay;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoBounds;
@property (nonatomic) long long videoGravity;
@property (getter=isVideoScaled, nonatomic) bool videoScaled;

+ (id)keyPathsForValuesAffectingPixelBufferAttributes;
+ (id)keyPathsForValuesAffectingPlayerLayer;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingVideoLayerGravity;
+ (id)keyPathsForValuesAffectingVideoScaled;
+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_isPlayingOnSecondScreen;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isReadyForDisplay;
- (bool)isVideoScaled;
- (id)pictureInPicturePlayerLayerView;
- (id)pixelBufferAttributes;
- (id)playerController;
- (id)playerLayer;
- (void)setPixelBufferAttributes:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setVideoGravity:(long long)arg1;
- (void)setVideoScaled:(bool)arg1;
- (void)startRoutingVideoToPictureInPicturePlayerLayerView;
- (void)stopRoutingVideoToPictureInPicturePlayerLayerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;
- (long long)videoGravity;

@end
