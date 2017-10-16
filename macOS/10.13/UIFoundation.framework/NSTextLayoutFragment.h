/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSTextLayoutFragment : NSObject {
    unsigned long long  _animationType;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _destinationBoundingRect;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _destinationGlyphRange;
    NSLayoutManager * _destinationLayoutManager;
    NSTextStorage * _destinationTextStorage;
    double  _destinationVerticalDelta;
    NSLayoutManager * _layoutManager;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceBoundingRect;
    NSLayoutManager * _sourceLayoutManager;
    long long  _sourceRangeDelta;
    NSTextStorage * _sourceTextStorage;
    double  _sourceVerticalDelta;
}

@property (atomic, readonly) unsigned long long animationType;
@property (atomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } destinationBoundingRect;
@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } destinationGlyphRange;
@property (atomic, readwrite) NSLayoutManager *destinationLayoutManager;
@property (atomic, readwrite, retain) NSTextStorage *destinationTextStorage;
@property (atomic, readwrite) double destinationVerticalDelta;
@property (atomic, readwrite) NSLayoutManager *layoutManager;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceBoundingRect;
@property (atomic, readwrite) NSLayoutManager *sourceLayoutManager;
@property (atomic, readwrite) long long sourceRangeDelta;
@property (atomic, readwrite, retain) NSTextStorage *sourceTextStorage;
@property (atomic, readwrite) double sourceVerticalDelta;

- (void).cxx_destruct;
- (void)_setup;
- (unsigned long long)animationType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })destinationBoundingRect;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })destinationGlyphRange;
- (id)destinationLayoutManager;
- (id)destinationTextStorage;
- (double)destinationVerticalDelta;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 contentType:(unsigned long long)arg2;
- (id)init;
- (id)initWithLayoutManager:(id)arg1 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 animationType:(unsigned long long)arg3 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)layoutManager;
- (void)setDestinationBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDestinationGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDestinationLayoutManager:(id)arg1;
- (void)setDestinationTextStorage:(id)arg1;
- (void)setDestinationVerticalDelta:(double)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setSourceLayoutManager:(id)arg1;
- (void)setSourceRangeDelta:(long long)arg1;
- (void)setSourceTextStorage:(id)arg1;
- (void)setSourceVerticalDelta:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceBoundingRect;
- (id)sourceLayoutManager;
- (long long)sourceRangeDelta;
- (id)sourceTextStorage;
- (double)sourceVerticalDelta;

@end
