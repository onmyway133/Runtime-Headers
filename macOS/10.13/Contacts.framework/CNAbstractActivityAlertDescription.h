/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (Class)valueClass;

// CNAbstractActivityAlertDescription (ContactsPersistence)

- (id)activity;
- (void)setValue:(id)arg1 onCoreDataContact:(id)arg2;
- (id)valueFromCoreDataContact:(id)arg1;

@end