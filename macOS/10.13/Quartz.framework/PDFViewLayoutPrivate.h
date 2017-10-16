/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFViewLayoutPrivate : NSObject {
    long long  cachedContinuousSizeDisplayDirection;
    id  delegate;
    BOOL  delegateKnowsDisplayAsBook;
    BOOL  delegateKnowsDisplayBox;
    BOOL  delegateKnowsDisplayMode;
    BOOL  delegateKnowsDisplayRTL;
    BOOL  delegateKnowsDisplaysDirection;
    bool  delegateKnowsHasEnabledSwipeGestures;
    BOOL  delegateKnowsMargins;
    PDFDocument * document;
    unsigned long long  pageCount;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * pageLayoutBounds;
    NSLock * pageLayoutLock;
    struct CGSize { 
        double width; 
        double height; 
    }  singlePageContinuousSize;
    struct CGSize { 
        double width; 
        double height; 
    }  twoUpContinousSize;
}

- (void).cxx_destruct;

@end
