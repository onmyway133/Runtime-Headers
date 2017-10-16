/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABSearchElementView : NSView <NSMenuDelegate> {
    long long  _comparison;
    ABSearchElementUIController * _controller;
    NSView * _entryView;
    NSString * _property;
    NSPopUpButton * _propertyPopUp;
    long long  _userInterfaceLayoutDirection;
    NSArray * _widgets;
    NSView * withinIntervalView;
    NSPopUpButton * withinPopupButton;
    NSTextField * withinTextField;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (long long)defaultComparisonForProperty:(id)arg1;
+ (id)orderManager;

- (void)addProperty:(id)arg1 withLocalization:(id)arg2 toMenu:(id)arg3;
- (long long)comparison;
- (void)comparisonChanged:(id)arg1;
- (long long)comparisonForProperty:(id)arg1;
- (id)comparisonPopUpForProperty:(id)arg1 withSelection:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })comparisonPopUpFrame;
- (id)conjoinedElementForProperties:(id)arg1 value:(id)arg2 withComparison:(long long)arg3;
- (id)conjoinedElementForProperty:(id)arg1 keys:(id)arg2 value:(id)arg3 withComparison:(long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dateControlFrame;
- (void)dateMatchingTypeChanged:(id)arg1;
- (void)dealloc;
- (id)entryViewForEntry:(id)arg1;
- (void)finalize;
- (void)groupChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 controller:(id)arg2 userInterfaceLayoutDirection:(long long)arg3;
- (long long)junctionForComparison:(long long)arg1 value:(id)arg2;
- (id)property;
- (void)propertyChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })propertyPopUpFrame;
- (BOOL)requiresValue;
- (id)searchElement;
- (void)setComparison:(long long)arg1;
- (void)setGroupOrAccount:(id)arg1 onPopUpButton:(id)arg2;
- (void)setProperty:(id)arg1 comparison:(long long)arg2 value:(id)arg3;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (void)setValue:(id)arg1 withProperty:(id)arg2 comparison:(long long)arg3 entryView:(id)arg4;
- (void)setWidgets:(id)arg1;
- (id)subvalue;
- (void)textFieldChanged:(id)arg1;
- (void)textMatchingChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textMatchingFieldFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textMatchingPopUpFrame;
- (void)updateWithinDateTense;
- (void)updateWithinDateWidgetsWithInterval:(double)arg1;
- (long long)userInterfaceLayoutDirection;
- (BOOL)validateMenuItem:(id)arg1;
- (id)value;

@end
