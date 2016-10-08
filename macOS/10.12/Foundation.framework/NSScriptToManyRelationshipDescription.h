/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSScriptToManyRelationshipDescription : NSScriptPropertyDescription {
    BOOL  _isLocationRequiredToCreate;
    unsigned int  _plistAppleEventCode;
    BOOL  _shouldByDefaultInsertAtBeginning;
}

+ (id)defaultKeyMarker;

- (unsigned int)appleEventCode;
- (id)initWithKey:(id)arg1 type:(id)arg2 access:(unsigned long long)arg3 isHidden:(BOOL)arg4 shouldByDefaultInsertAtBeginning:(BOOL)arg5 accessGroupDescriptions:(id)arg6;
- (id)initWithKey:(id)arg1 type:(id)arg2 isReadOnly:(BOOL)arg3 appleEventCode:(unsigned int)arg4 isLocationRequiredToCreate:(BOOL)arg5;
- (BOOL)isLocationRequiredToCreate;
- (BOOL)matchesAppleEventCode:(unsigned int)arg1;
- (BOOL)matchesPresentableName:(id)arg1;
- (void)reconcileToSuiteRegistry:(id)arg1 suiteName:(id)arg2 className:(id)arg3;
- (BOOL)shouldByDefaultInsertAtBeginning;

// NSScriptToManyRelationshipDescription (NSDebugging)

- (id)_descriptionWithTabCount:(unsigned long long)arg1;

// NSScriptToManyRelationshipDescription (NSLegacyPropertyListParsing)

+ (id)propertyDescriptionFromKey:(id)arg1 implDeclaration:(id)arg2 presoDeclaration:(id)arg3 suiteName:(id)arg4 className:(id)arg5;

@end