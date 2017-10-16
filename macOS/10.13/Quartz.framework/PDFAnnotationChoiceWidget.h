/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFAnnotationChoiceWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationChoiceWidgetPrivateVars * _private2;
}

- (void).cxx_destruct;
- (id)alternateFieldName;
- (id)backgroundColor;
- (id)choices;
- (struct __CFDictionary { }*)commonCreateDictionaryRef;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultStringValue;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (id)fieldName;
- (id)font;
- (id)fontColor;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forPage:(id)arg2;
- (BOOL)isListChoice;
- (int)rotation;
- (void)setAlternateFieldName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setChoices:(id)arg1;
- (void)setDefaultStringValue:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontColor:(id)arg1;
- (void)setIsListChoice:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)textForValue:(id)arg1;

@end
