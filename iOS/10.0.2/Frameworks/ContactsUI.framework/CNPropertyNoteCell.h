/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyNoteCell : CNPropertyCell {
    UILabel * _labelLabel;
    UITextView * _textView;
}

@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (double)bottomBaselineConstant;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelLabel;
- (id)labelView;
- (void)performDefaultAction;
- (void)setAllowsEditing:(bool)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (id)textView;
- (void)textViewChanged:(id)arg1;
- (void)textViewEditingDidEnd:(id)arg1;
- (id)valueView;

@end
