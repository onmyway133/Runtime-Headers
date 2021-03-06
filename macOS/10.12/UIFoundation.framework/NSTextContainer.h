/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider> {
    NSDictionary * _attributesForExtraLineFragment;
    double  _cacheBoundsMaxY;
    double  _cacheBoundsMinY;
    struct CGPath { } * _cachedBoundingPath;
    struct __CFArray { } * _cachedBounds;
    struct __CFArray { } * _cachedClippingAttributes;
    NSArray * _exclusionPaths;
    NSLayoutManager * _layoutManager;
    long long  _layoutOrientation;
    double  _lineFragmentPadding;
    unsigned long long  _maximumLines;
    double  _minimumWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct __tcFlags { 
        unsigned int widthTracksTextView : 1; 
        unsigned int heightTracksTextView : 1; 
        unsigned int observingFrameChanges : 1; 
        unsigned int lineBreakMode : 4; 
        unsigned int oldAPI : 1; 
        unsigned int _reserved : 8; 
    }  _tcFlags;
    NSTextView * _textView;
}

@property (atomic, readwrite, copy) NSArray *exclusionPaths;
@property (atomic, readwrite) BOOL heightTracksTextView;
@property (atomic, readwrite) NSLayoutManager *layoutManager;
@property (atomic, readonly) long long layoutOrientation;
@property (atomic, readwrite) unsigned long long lineBreakMode;
@property (atomic, readwrite) double lineFragmentPadding;
@property (atomic, readwrite) unsigned long long maximumNumberOfLines;
@property (getter=isSimpleRectangularTextContainer, atomic, readonly) BOOL simpleRectangularTextContainer;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } size;
@property (atomic, readwrite) NSTextView *textView;
@property (atomic, readwrite) BOOL widthTracksTextView;

+ (void)initialize;

- (void)_commonInit;
- (id)attributesForExtraLineFragment;
- (struct CGSize { double x1; double x2; })containerSize;
- (BOOL)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exclusionPaths;
- (BOOL)heightTracksTextView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)isSimpleRectangularTextContainer;
- (id)layoutManager;
- (long long)layoutOrientation;
- (unsigned long long)lineBreakMode;
- (double)lineFragmentPadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (unsigned long long)maximumNumberOfLines;
- (void)replaceLayoutManager:(id)arg1;
- (void)setAttributesForExtraLineFragment:(id)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setExclusionPaths:(id)arg1;
- (void)setHeightTracksTextView:(BOOL)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setLineBreakMode:(unsigned long long)arg1;
- (void)setLineFragmentPadding:(double)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextView:(id)arg1;
- (void)setWidthTracksTextView:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;
- (id)textView;
- (BOOL)widthTracksTextView;

// NSTextContainer (API_candidates)

- (double)minimumLineFragmentWidth;
- (void)setMinimumLineFragmentWidth:(double)arg1;

// NSTextContainer (NSPrivate)

- (BOOL)_containerObservesTextViewFrameChanges;
- (void)_containerTextViewFrameChanged:(id)arg1;
- (void)_resizeAccordingToTextView:(id)arg1;
- (void)_setContainerObservesTextViewFrameChanges:(BOOL)arg1;

// NSTextContainer (TextLocking)

- (void)coordinateAccess:(id)arg1;

@end
