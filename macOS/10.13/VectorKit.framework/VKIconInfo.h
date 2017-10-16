/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKIconInfo : NSObject {
    float  _alpha;
    struct CGColor { } * _fillColor;
    struct CGColor { } * _fullBleedColor;
    struct CGColor { } * _glyphColor;
    struct CGColor { } * _haloColor;
    VKImage * _image;
    float  _strokeWeight;
    unsigned char  _style;
}

@property (nonatomic, readwrite) float alpha;
@property (nonatomic, readwrite) struct CGColor { }*fillColor;
@property (nonatomic, readwrite) struct CGColor { }*fullBleedColor;
@property (nonatomic, readwrite) struct CGColor { }*glyphColor;
@property (nonatomic, readwrite) struct CGColor { }*haloColor;
@property (nonatomic, readwrite, retain) VKImage *image;
@property (nonatomic, readwrite) float strokeWeight;
@property (nonatomic, readwrite) unsigned char style;

- (float)alpha;
- (void)dealloc;
- (struct CGColor { }*)fillColor;
- (struct CGColor { }*)fullBleedColor;
- (struct CGColor { }*)glyphColor;
- (struct CGColor { }*)haloColor;
- (id)image;
- (void)setAlpha:(float)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFullBleedColor:(struct CGColor { }*)arg1;
- (void)setGlyphColor:(struct CGColor { }*)arg1;
- (void)setHaloColor:(struct CGColor { }*)arg1;
- (void)setImage:(id)arg1;
- (void)setStrokeWeight:(float)arg1;
- (void)setStyle:(unsigned char)arg1;
- (float)strokeWeight;
- (unsigned char)style;

@end
