/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
 */

@interface RMTableCell : NSObject {
    NSString * _contents;
    RMTableCell * _nextCellInColumn;
    RMTableCell * _nextCellInRow;
    RMTable * _table;
    struct CGPDFNode { } * _tableCellNode;
}

@property (atomic, readwrite, retain) RMTableCell *nextCellInColumn;
@property (atomic, readwrite, retain) RMTableCell *nextCellInRow;
@property (atomic, readonly) struct CGPDFPage { }*page;
@property (atomic, readwrite) RMTable *table;
@property (atomic, readwrite) struct CGPDFNode { }*tableCellNode;

- (struct CGColor { }*)backgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (unsigned long long)column;
- (id)contents;
- (void)dealloc;
- (id)nextCellInColumn;
- (id)nextCellInRow;
- (struct CGPDFPage { }*)page;
- (unsigned long long)row;
- (void)setNextCellInColumn:(id)arg1;
- (void)setNextCellInRow:(id)arg1;
- (void)setTable:(id)arg1;
- (void)setTableCellNode:(struct CGPDFNode { }*)arg1;
- (id)table;
- (struct CGPDFNode { }*)tableCellNode;

@end
