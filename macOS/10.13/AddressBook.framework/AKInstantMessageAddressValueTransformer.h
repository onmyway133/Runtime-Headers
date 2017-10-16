/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface AKInstantMessageAddressValueTransformer : NSValueTransformer {
    CNInstantMessageAddress * _lastInstantMessageAddress;
}

@property (nonatomic, readwrite, retain) CNInstantMessageAddress *lastInstantMessageAddress;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)init;
- (id)lastInstantMessageAddress;
- (id)reverseTransformedValue:(id)arg1;
- (void)setLastInstantMessageAddress:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
