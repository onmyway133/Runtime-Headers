/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABSuggestedValueViewController : NSViewController {
    NSButton * _confirmButton;
    NSTextField * _dateField;
    NSDateFormatter * _dateFormatter;
    <ABSuggestedValueViewControllerDelegate> * _delegate;
    CNLabeledValue * _labeledValue;
    <CNCancelable> * _mouseDownObserver;
    NSButton * _rejectButton;
    ABClickableTextView * _relatedTextView;
    NSScrollView * _relatedTextViewScrollView;
    NSView * _senderContainer;
    NSTextField * _senderField;
    BOOL  _showsActionButtons;
    NSTextField * _sourceItemView;
    NSView * _subjectContainer;
    NSTextField * _subjectField;
    NSStackView * _verticalHeaderStackView;
}

@property (atomic, readwrite) NSButton *confirmButton;
@property (atomic, readwrite) NSTextField *dateField;
@property (atomic, readwrite, retain) NSDateFormatter *dateFormatter;
@property (atomic, readwrite) <ABSuggestedValueViewControllerDelegate> *delegate;
@property (atomic, readwrite, retain) CNLabeledValue *labeledValue;
@property (atomic, readwrite, retain) <CNCancelable> *mouseDownObserver;
@property (atomic, readwrite) NSButton *rejectButton;
@property (atomic, readwrite) ABClickableTextView *relatedTextView;
@property (atomic, readwrite) NSScrollView *relatedTextViewScrollView;
@property (atomic, readwrite) NSView *senderContainer;
@property (atomic, readwrite) NSTextField *senderField;
@property (nonatomic, readwrite) BOOL showsActionButtons;
@property (atomic, readwrite) NSTextField *sourceItemView;
@property (atomic, readwrite) NSView *subjectContainer;
@property (atomic, readwrite) NSTextField *subjectField;
@property (atomic, readwrite) NSStackView *verticalHeaderStackView;

- (void)configureView;
- (id)confirmButton;
- (void)confirmSuggestedValue:(id)arg1;
- (id)dateField;
- (id)dateFormatter;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidateMouseDownObserver;
- (id)labeledValue;
- (id)mouseDownObserver;
- (id)rejectButton;
- (void)rejectSuggestedValue:(id)arg1;
- (id)relatedTextView;
- (id)relatedTextViewScrollView;
- (void)removeEmptyFields;
- (id)senderContainer;
- (id)senderField;
- (void)setConfirmButton:(id)arg1;
- (void)setDateField:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFoundInAppName:(id)arg1;
- (void)setLabeledValue:(id)arg1;
- (void)setMouseDownObserver:(id)arg1;
- (void)setOriginURL:(id)arg1;
- (void)setRejectButton:(id)arg1;
- (void)setRelatedTextView:(id)arg1;
- (void)setRelatedTextViewScrollView:(id)arg1;
- (void)setSenderContainer:(id)arg1;
- (void)setSenderField:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)setShowsActionButtons:(BOOL)arg1;
- (void)setSnippet:(id)arg1 highlightRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSourceItemView:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setSubjectContainer:(id)arg1;
- (void)setSubjectField:(id)arg1;
- (void)setUpMouseDownObserverWithURL:(id)arg1;
- (void)setVerticalHeaderStackView:(id)arg1;
- (BOOL)showsActionButtons;
- (id)sourceItemView;
- (id)subjectContainer;
- (id)subjectField;
- (id)verticalHeaderStackView;
- (void)viewDidLoad;

@end
