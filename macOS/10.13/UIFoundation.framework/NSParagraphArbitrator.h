/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSParagraphArbitrator : NSObject {
    NSAttributedString * _attributedString;
    double  _hyphenationFactor;
    unsigned long long  _lineBreakStrategy;
    id  _lineWidth;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _paragraphRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _previousLineRange;
    long long  _typesetterBehavior;
    id  _validateLineBreakContext;
}

@property (atomic, readwrite, retain) NSAttributedString *attributedString;
@property (atomic, readwrite) double hyphenationFactor;
@property (atomic, readwrite) unsigned long long lineBreakStrategy;
@property (atomic, readwrite, copy) id lineWidth;
@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } paragraphRange;
@property (atomic, readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } previousLineRange;
@property (atomic, readwrite) long long typesetterBehavior;
@property (atomic, readwrite, copy) id validateLineBreakContext;

+ (id)paragraphArbitratorWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)arg1;
- (id)attributedString;
- (void)dealloc;
- (double)hyphenationFactor;
- (id)init;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; BOOL x3; })lineBreakContextBeforeIndex:(unsigned long long)arg1 lineFragmentWidth:(double)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)lineBreakStrategy;
- (id)lineWidth;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })previousLineRange;
- (void)reset;
- (void)setAttributedString:(id)arg1;
- (void)setHyphenationFactor:(double)arg1;
- (void)setLineBreakStrategy:(unsigned long long)arg1;
- (void)setLineWidth:(id)arg1;
- (void)setParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPreviousLineRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTypesetterBehavior:(long long)arg1;
- (void)setValidateLineBreakContext:(id)arg1;
- (long long)typesetterBehavior;
- (id)validateLineBreakContext;

@end
