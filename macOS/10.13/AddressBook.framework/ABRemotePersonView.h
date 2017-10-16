/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABRemotePersonView : NSRemoteView <NSRemoteViewDelegate> {
    id  _objectToExport;
}

@property (nonatomic, readwrite) id objectToExport;
@property (atomic, readonly) BOOL shouldRetainExportedObject;

- (void)_commonInit;
- (BOOL)advanceToRunPhaseIfNeeded;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)objectToExport;
- (id)serviceName;
- (id)serviceSubclassName;
- (id)serviceViewControllerInterface;
- (void)setDelegate:(id)arg1;
- (void)setObjectToExport:(id)arg1;
- (BOOL)view:(id)arg1 shouldResize:(struct CGSize { double x1; double x2; })arg2;

@end
