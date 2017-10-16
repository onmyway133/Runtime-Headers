/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCDRecordMapper : NSObject {
    NSKnownKeysDictionary * __ABEntitiesConverterKeys;
    struct __CFDictionary { } * __ABEntitiesEntityWithValueSelector;
    NSKnownKeysDictionary * __ABEntitiesForKeys;
    NSKnownKeysDictionary * __ABEntitiesMainKeys;
    struct __CFDictionary { } * __ABEntitiesValueWithEntitySelector;
    NSKnownKeysDictionary * __ABKeysForProperties;
    NSKnownKeysDictionary * __ABPropertiesForKeys;
}

+ (id)sharedInstance;

- (id)entityNameForPropertyKey:(id)arg1;
- (id)init;
- (void)initializeDictionaries;
- (void)initializePropertiesForKeys:(id)arg1;
- (id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 entityWithValueSel:(SEL*)arg4 valueWithEntitySel:(SEL*)arg5 converterKeys:(id*)arg6;
- (id)propertyForKey:(id)arg1;

@end
