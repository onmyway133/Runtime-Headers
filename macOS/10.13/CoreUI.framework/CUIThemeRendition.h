/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUIThemeRendition : NSObject {
    long long  _artworkStatus;
    int  _blendMode;
    unsigned long long  _colorSpaceID;
    int  _exifOrientation;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } * _key;
    NSString * _name;
    double  _opacity;
    struct { 
        unsigned int isHeaderFlaggedFPO : 1; 
        unsigned int isExcludedFromContrastFilter : 1; 
        unsigned int isVectorBased : 1; 
        unsigned int isOpaque : 1; 
        unsigned int bitmapEncoding : 4; 
        unsigned int optOutOfThinning : 1; 
        unsigned int isFlippable : 1; 
        unsigned int isTintable : 1; 
        unsigned int preservedVectorRepresentation : 1; 
        unsigned int reserved : 20; 
    }  _renditionFlags;
    unsigned int  _scale;
    NSData * _srcData;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  _stackKey;
    unsigned int  _subtype;
    long long  _templateRenderingMode;
    long long  _type;
    struct CGImage { } * _uncroppedImage;
    NSString * _utiType;
    long long  _validLookGradation;
}

@property (nonatomic, readwrite) int blendMode;
@property (nonatomic, readwrite) int exifOrientation;
@property (nonatomic, readwrite) double opacity;

+ (id)displayNameForRenditionType:(long long)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned int)arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_destinationFrame;
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alphaCroppedRect;
- (long long)artworkStatus;
- (id)assetPackIdentifier;
- (int)bitmapEncoding;
- (int)blendMode;
- (unsigned long long)colorSpaceID;
- (struct CGImage { }*)createImageFromPDFRenditionWithScale:(double)arg1;
- (const struct _csicolor { unsigned int x1; unsigned int x2; unsigned int x3 : 8; unsigned int x4 : 24; unsigned int x5; double x6[0]; }*)csiColor;
- (id)data;
- (void)dealloc;
- (id)description;
- (BOOL)edgesOnly;
- (id)effectPreset;
- (int)exifOrientation;
- (id)externalTags;
- (id)gradient;
- (double)gradientDrawingAngle;
- (unsigned int)gradientStyle;
- (id)imageForSliceIndex:(long long)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (BOOL)isFlippable;
- (BOOL)isHeaderFlaggedFPO;
- (BOOL)isInternalLink;
- (BOOL)isOpaque;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (BOOL)isTintable;
- (BOOL)isValidForLookGradation:(long long)arg1;
- (BOOL)isVectorBased;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)key;
- (id)layerReferences;
- (id)linkingToRendition;
- (id)maskForSliceIndex:(long long)arg1;
- (id)metrics;
- (id)mipLevels;
- (id)name;
- (double)opacity;
- (BOOL)optOutOfThinning;
- (struct CGSize { double x1; double x2; })originalUncroppedSize;
- (id)packedContents;
- (struct CGPDFDocument { }*)pdfDocument;
- (int)pixelFormat;
- (BOOL)preservedVectorRepresentation;
- (id)provideTextureInfo;
- (double)scale;
- (void)setBlendMode:(int)arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setOpacity:(double)arg1;
- (id)sizeIndexes;
- (id)sliceInformation;
- (unsigned long long)sourceRowbytes;
- (unsigned int)subtype;
- (long long)templateRenderingMode;
- (id)textureImages;
- (long long)type;
- (struct CGImage { }*)uncroppedImage;
- (struct CGImage { }*)unslicedImage;
- (struct CGSize { double x1; double x2; })unslicedSize;
- (id)utiType;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;

@end
