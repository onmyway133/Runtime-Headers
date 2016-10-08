/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {
    BOOL  _forceShortNameEnabled;
    long long  _shortNameFormat;
    _NSPersonNameComponentsStyleFormatter * _subFormatter;
    _NSPersonNameComponentsStyleFormatterShortVariantGeneral * _variantFormatter;
}

@property (atomic, readwrite) BOOL forceShortNameEnabled;
@property (atomic, readwrite) long long shortNameFormat;
@property (atomic, readwrite, retain) _NSPersonNameComponentsStyleFormatter *subFormatter;
@property (atomic, readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *variantFormatter;

- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)abbreviatedKeys;
- (void)dealloc;
- (id)fallbackStyleFormatter;
- (BOOL)forceShortNameEnabled;
- (id)initWithMasterFormatter:(id)arg1;
- (BOOL)isEnabled;
- (id)keysOfInterest;
- (id)orderedKeysOfInterest;
- (void)setForceShortNameEnabled:(BOOL)arg1;
- (void)setShortNameFormat:(long long)arg1;
- (void)setSubFormatter:(id)arg1;
- (long long)shortNameFormat;
- (id)subFormatter;
- (id)variantFormatter;

@end