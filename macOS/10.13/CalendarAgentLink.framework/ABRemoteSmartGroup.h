/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface ABRemoteSmartGroup : ABRemoteGroup {
    NSData * _searchElement;
}

@property (atomic, readwrite, retain) NSData *searchElement;

// Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)searchElement;
- (void)setSearchElement:(id)arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook

// ABRemoteSmartGroup (AddressBook)

+ (id)abEntityName;

- (void)nts_SetSingleValue:(id)arg1 forProperty:(id)arg2;
- (id)nts_SingleValueForProperty:(id)arg1;

@end