/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIFilterGeneratorCIFilter : CIFilter {
    NSMutableDictionary * _customAttributes;
    BOOL  _dirty;
    CIFilterGenerator * _generator;
    NSMutableArray * _inputKeys;
    NSMutableArray * _outputKeys;
}

+ (id)filterWithGenerator:(id)arg1;

- (id)_provideFilterCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customAttributes;
- (void)dealloc;
- (id)initWithGenerator:(id)arg1;
- (id)inputKeys;
- (id)outputImage;
- (id)outputKeys;
- (void)propagateConnections;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
