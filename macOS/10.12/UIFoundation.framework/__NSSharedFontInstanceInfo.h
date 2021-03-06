/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface __NSSharedFontInstanceInfo : NSObject {
    double  _ascenderDelta;
    struct __CFCharacterSet { } * _characterCoverage;
    double  _defaultLineHeight;
    double  _defaultLineHeightForUI;
    struct __CFString { } * _displayName;
    struct __CTFontDescriptor { } * _fontDescriptor;
    char * _glyphAdvancementCache;
    struct CGFont { } * _graphicsFont;
    struct { 
        unsigned int _drawsOutsideBBox : 1; 
        unsigned int _forceAscenderDelta : 1; 
        unsigned int _advanceCacheMode : 2; 
        unsigned int _isFixedPitch : 1; 
        unsigned int _isVerticalForm : 1; 
        unsigned int _reserved : 26; 
    }  _iiFlags;
    id  _key;
    NSData * _latin1MappingTable;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _matrix;
    long long  _numberOfGlyphs;
    struct __CTFont { } * _platformFont;
    struct __CFString { } * _postscriptName;
    long long  _retainCount;
    NSAffineTransform * _textTransform;
    __NSFontTypefaceInfo * _typeface;
    double  _typographicLeading;
    NSFont * _variants;
}

+ (void)initialize;

- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (id)_characterCoverage;
- (double)_defaultLineHeight:(BOOL)arg1;
- (id)_displayName;
- (BOOL)_drawsOutsideBBox;
- (id)_fontDescriptor;
- (char *)_glyphAdvancementCache:(long long)arg1 renderingMode:(unsigned long long)arg2;
- (struct CGFont { }*)_graphicsFont;
- (BOOL)_hasNonNominalDescriptor;
- (BOOL)_isDeallocating;
- (BOOL)_isFixedPitch;
- (BOOL)_isVertical;
- (id)_kernOverride;
- (id)_latin1MappingTable;
- (const double*)_matrix;
- (unsigned long long)_numberOfGlyphs;
- (struct __CTFont { }*)_platformFont;
- (id)_postscriptName;
- (id)_textTransform;
- (BOOL)_tryRetain;
- (double)_typographicLeading;
- (void)dealloc;
- (void)finalize;
- (id)fontInstanceForRenderingMode:(unsigned long long)arg1;
- (id)initWithTypefaceInfo:(id)arg1 key:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)verticalFontInstanceForRenderingMode:(unsigned long long)arg1;

@end
