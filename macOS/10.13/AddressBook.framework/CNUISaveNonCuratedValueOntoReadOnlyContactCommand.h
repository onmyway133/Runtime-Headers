/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface CNUISaveNonCuratedValueOntoReadOnlyContactCommand : CNUIUndoableCommand {
    CNUIUndoableCommand * _command;
    CNContactStore * _contactStore;
    CNLabeledValue * _labeledValue;
}

@property (nonatomic, readwrite, retain) CNUIUndoableCommand *command;
@property (nonatomic, readwrite, retain) CNContactStore *contactStore;
@property (nonatomic, readwrite, retain) CNLabeledValue *labeledValue;

- (void).cxx_destruct;
- (id)command;
- (id)contactStore;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 nonCuratedValueToSave:(id)arg3 forKey:(id)arg4;
- (id)labeledValue;
- (void)setCommand:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setLabeledValue:(id)arg1;

@end
