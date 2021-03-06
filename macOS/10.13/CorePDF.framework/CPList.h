/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
 */

@interface CPList : NSObject <CPDisposable> {
    struct __CFArray { } * items;
    unsigned int  ordinalPrefixLength;
    unsigned int  ordinalSuffixLength;
    CPListItem * parentItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  spacer;
    int  type;
}

@property (nonatomic, readwrite) unsigned int ordinalPrefixLength;
@property (nonatomic, readwrite) unsigned int ordinalSuffixLength;
@property (nonatomic, readwrite, retain) CPListItem *parentItem;
@property (nonatomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } spacer;
@property (nonatomic, readwrite) int type;

- (void)addItem:(id)arg1;
- (BOOL)containsParagraph:(id)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)init;
- (BOOL)isMultilevel;
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (unsigned int)ordinalPrefixLength;
- (unsigned int)ordinalSuffixLength;
- (id)parentItem;
- (void)setOrdinalPrefixLength:(unsigned int)arg1;
- (void)setOrdinalSuffixLength:(unsigned int)arg1;
- (void)setParentItem:(id)arg1;
- (void)setSpacer:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setType:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })spacer;
- (int)type;

@end
