/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCardCollectionNoteRowView : ABCardCollectionRowView <ABNoteTextViewDelegate, NSTextViewDelegate> {
    NSArray * _noteConstraints;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) unsigned long long noteInsertionPoint;
@property (atomic, readonly) Class superclass;

+ (id)rangeComparator;

- (void).cxx_destruct;
- (void)applyValueTextColor:(id)arg1;
- (void)dealloc;
- (void)generateConstraints;
- (BOOL)hasValue;
- (void)highlightSearchTerms:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (BOOL)isValidRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)maxInsertionPoint;
- (void)mouseDown:(id)arg1;
- (unsigned long long)noteInsertionPoint;
- (id)noteTextView;
- (id)rangesMatchingSearchTerms:(id)arg1;
- (void)setNoteInsertionPoint:(unsigned long long)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedRanges:(id)arg1;
- (void)setValueEditable:(BOOL)arg1;
- (void)setValueSelectable:(BOOL)arg1;
- (void)setValueView:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textViewDidBecomeFirstResponder:(id)arg1;
- (void)textViewDidResignFirstResponder:(id)arg1;
- (id)unionedRangeValues:(id)arg1;
- (void)updateValueFontWithFont:(id)arg1;
- (id)valueTextView;
- (void)viewWillMoveToWindow:(id)arg1;

@end
