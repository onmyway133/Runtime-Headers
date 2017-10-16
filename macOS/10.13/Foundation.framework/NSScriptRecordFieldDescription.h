/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSScriptRecordFieldDescription : NSObject {
    unsigned int  _appleEventCode;
    BOOL  _isHidden;
    NSString * _key;
    NSString * _presentableDescription;
    NSString * _presentableName;
    NSArray * _synonymDescriptions;
    NSObject * _typeNameOrDescription;
}

- (unsigned int)appleEventCode;
- (void)dealloc;
- (id)initWithKey:(id)arg1 type:(id)arg2 appleEventCode:(unsigned int)arg3 isHidden:(BOOL)arg4 presentableDescription:(id)arg5 name:(id)arg6 synonymDescriptions:(id)arg7;
- (id)initWithKey:(id)arg1 typeDescription:(id)arg2 appleEventCode:(unsigned int)arg3 presentableDescription:(id)arg4 name:(id)arg5;
- (BOOL)isHidden;
- (id)key;
- (BOOL)matchesAppleEventCode:(unsigned int)arg1;
- (id)presentableDescription;
- (id)presentableName;
- (void)reconcileToSuiteRegistry:(id)arg1 suiteName:(id)arg2 recordTypeName:(id)arg3;
- (id)synonymDescriptions;
- (id)typeDescription;

// NSScriptRecordFieldDescription (NSAETEMaking)

- (void)appendPropertyDeclarationToAETEData:(id)arg1;

@end
