/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
 */

@interface RMTable : NSObject <NSFastEnumeration> {
    NSMutableArray * _columnFirstElements;
    unsigned long long  _elementCount;
    struct CGPDFLayout { } * _layout;
    NSMutableArray * _matrix;
    NSMutableArray * _rowFirstElements;
    BOOL  _rowOrder;
    struct CGPDFNode { } * _tableRoot;
}

@property (atomic, readonly) struct CGPDFPage { }*page;
@property (atomic, readwrite) BOOL rowOrder;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)columnAtIndex:(unsigned long long)arg1;
- (unsigned long long)columns;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)dump;
- (id)initWithRoot:(struct CGPDFNode { }*)arg1 layout:(struct CGPDFLayout { }*)arg2;
- (struct CGPDFLayout { }*)layout;
- (void)matrixDealloc;
- (struct CGPDFPage { }*)page;
- (id)rowAtIndex:(unsigned long long)arg1;
- (BOOL)rowOrder;
- (unsigned long long)rows;
- (void)setRowOrder:(BOOL)arg1;

@end
