/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSCreateCommand : NSScriptCommand {
    id  _moreVars2;
}

@property (atomic, readonly, retain) NSScriptClassDescription *createClassDescription;
@property (atomic, readonly, copy) NSDictionary *resolvedKeyDictionary;

- (id)_newObjectForContainer:(id)arg1 inValueForKey:(id)arg2 withClassDescription:(id)arg3;
- (id)createClassDescription;
- (void)dealloc;
- (id)description;
- (id)initWithCommandDescription:(id)arg1;
- (id)performDefaultImplementation;
- (id)resolvedKeyDictionary;

// NSCreateCommand (NSInternal)

+ (BOOL)_getArguments:(id)arg1 withParameters:(struct { id x1; id x2; })arg2;

- (BOOL)_allowsAccessForEventParameters:(id)arg1 givenSenderAccessGroups:(id)arg2;
- (BOOL)_setAdditionalThingsFromEvent:(id)arg1;

@end
