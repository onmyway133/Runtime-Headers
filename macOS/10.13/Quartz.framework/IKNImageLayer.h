/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKNImageLayer : CALayer {
    IKNCustomLayer * _alphaLayer;
    CALayer * _bottomShadowLayer;
    double  _height;
    IKNImageViewHandler * _imageViewHandler;
    CALayer * _leftShadowLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _noImageSize;
    IKPlaceholderLayer * _placeholderLayer;
    CALayer * _rightShadowLayer;
    double  _rotation;
    IKNCustomLayer * _templateLayer;
    double  _width;
}

@property (atomic, readonly) IKNCustomLayer *alphaLayer;
@property (atomic, readonly) double height;
@property (atomic, readwrite) IKNImageViewHandler *imageViewHandler;
@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } noImageSize;
@property (nonatomic, readwrite) double rotation;
@property (atomic, readonly) IKNCustomLayer *templateLayer;
@property (atomic, readonly) double width;

- (void)adjustToViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)alphaLayer;
- (void)autoResizeToViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)height;
- (id)imageViewHandler;
- (void)installAlphaLayerWithGray:(double)arg1 alpha:(double)arg2;
- (void)installPlaceHolderLayer:(id)arg1;
- (void)installTemplateLayer:(id)arg1;
- (struct CGSize { double x1; double x2; })noImageSize;
- (void)removeAlphaLayer;
- (void)removePlaceHolderLayer;
- (void)removeTemplateLayer;
- (double)rotation;
- (void)setImage:(struct CGImage { }*)arg1 imageProperties:(id)arg2;
- (void)setImageViewHandler:(id)arg1;
- (void)setNoImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRotation:(double)arg1;
- (id)templateLayer;
- (void)updateAlphaLayer;
- (void)updateLayerContents:(struct CGImage { }*)arg1;
- (void)updatePlaceholderLayer;
- (void)updateShadowLayers;
- (void)updateTemplateLayer;
- (double)width;

@end