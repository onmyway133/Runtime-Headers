/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFAnnotationPrivateVars : NSObject {
    NSMutableDictionary * PDFAnnotationDictionary;
    NSDictionary * PDFAnnotationKeyMapping;
    PDFAccessibilityNode * accessibilityNode;
    PDFAKAnnotationAdaptor * akAnnotationAdaptor;
    <NSCopying> * akAnnotationForCopying;
    struct CGPDFAnnotation { } * cgAnnotation;
    struct CGPath {} ** cgPaths;
    bool  constructingDictionaryRef;
    id  control;
    struct __CFDictionary { } * dictionaryRef;
    struct CGPDFForm { } * downAppearance;
    struct CGPDFForm { } * downOffAppearance;
    BOOL  editingTextWidget;
    bool  export;
    bool  isFullyConstructed;
    bool  isHighlighted;
    bool  isSelected;
    BOOL  isSignature;
    bool  loggingEnabled;
    struct CGPDFForm { } * normalAppearance;
    struct CGPDFForm { } * normalOffAppearance;
    PDFPage * page;
    PDFAnnotation * parent;
    NSLock * pathLock;
    NSString * pdfAnnotationUUID;
    PDFAnnotation * popup;
    struct CGPDFDictionary { } * popupDictionary;
    BOOL  popupDrawCloseWidget;
    BOOL  popupDrawText;
    struct CGPDFForm { } * rolloverAppearance;
    struct CGPDFForm { } * rolloverOffAppearance;
    bool  saveAppearance;
    double  scaleFactor;
    BOOL  shouldBurnIn;
    struct CGPDFDictionary { } * sourceDictionary;
    NSString * widgetOnStateString;
}

- (void).cxx_destruct;

@end
