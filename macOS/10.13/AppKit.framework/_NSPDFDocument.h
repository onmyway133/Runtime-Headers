/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSPDFDocument : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    long long  _currentPage;
    struct CGPDFDocument { } * _document;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (long long)currentPage;
- (void)dealloc;
- (struct CGPDFDocument { }*)documentRef;
- (id)initWithData:(id)arg1;
- (long long)pageCount;
- (void)setCurrentPage:(long long)arg1;

@end