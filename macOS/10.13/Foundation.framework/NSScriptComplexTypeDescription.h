/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSScriptComplexTypeDescription : NSScriptTypeDescription {
    NSArray * _alternativeTypeDescriptions;
    unsigned int  _appleEventCode;
}

- (id)alternativeTypeDescriptions;
- (unsigned int)appleEventCode;
- (id)classDescription;
- (id)coercedValue:(id)arg1;
- (void)dealloc;
- (id)errorExpectedTypeDescriptor;
- (id)initWithAppleEventCode:(unsigned int)arg1 alernativeTypeDescriptions:(id)arg2;
- (BOOL)matchesAppleEventCode:(unsigned int)arg1;
- (id)name;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;

// NSScriptComplexTypeDescription (NSAETEMaking)

- (void)appendObjectClassDeclarationToAETEData:(id)arg1;

// NSScriptComplexTypeDescription (NSDebugging)

- (id)_descriptionWithTabCount:(unsigned long long)arg1;

@end
