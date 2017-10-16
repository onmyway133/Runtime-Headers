/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKImage : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collisionRect;
    NSData * _data;
    struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; bool x10; unsigned int x11; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; bool x13; bool x14; unsigned int x15; unsigned int x16; bool x17; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; } * _gglTexture;
    bool  _hasAnchorPoint;
    bool  _hasCollisionRect;
    unsigned char  _imageHash;
    struct CGImage { } * _imageRef;
    struct atomic<bool> { 
        bool __a_; 
    }  _isImageReady;
    bool  _isTextureReady;
    NSString * _name;
    VKResourceManager * _resourceManager;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _usedAsTextureAndImage;
}

- (void)_prepareImage;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collisionRect;
- (int)compareTo:(id)arg1;
- (void)dealloc;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; bool x10; unsigned int x11; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; bool x13; bool x14; unsigned int x15; unsigned int x16; bool x17; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; }*)gglTexture;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 usedAsTextureAndImage:(BOOL)arg3;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2 usedAsTextureAndImage:(BOOL)arg3;
- (id)initWithName:(id)arg1 scale:(double)arg2 resourceManager:(id)arg3;
- (void)prepareTexture;
- (double)scale;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCollisionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end