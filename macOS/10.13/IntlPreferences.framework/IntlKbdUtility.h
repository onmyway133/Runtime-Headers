/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/Versions/A/IntlPreferences
 */

@interface IntlKbdUtility : NSObject

+ (id)arrayOfKeyboards;
+ (id)arrayOfKeyboardsWithAllSources;
+ (id)arrayOfKeyboardsWithAllSourcesMatching:(id)arg1;
+ (void)insertInputModes:(id)arg1;
+ (void)setKeyboard:(id)arg1;

// IntlKbdUtility (IntlKbdUtilityPrivate)

+ (id)buildSourceArray:(BOOL)arg1 matching:(id)arg2;
+ (id)dictionaryOfScriptNames;
+ (BOOL)doesInputSourceMatch:(struct __TSMInputSource { }*)arg1 searchString:(id)arg2;
+ (BOOL)doesInputSourceMatchLanguage:(struct __TSMInputSource { }*)arg1 searchString:(id)arg2;
+ (BOOL)doesInputSourceMatchName:(struct __TSMInputSource { }*)arg1 searchString:(id)arg2;
+ (struct __TSMInputSource { }*)findInputMethodByName:(id)arg1;
+ (struct __TSMInputSource { }*)findKeyboardByID:(id)arg1;
+ (id)getInputTypeName:(short)arg1;
+ (id)imageFromIconRef:(struct OpaqueIconRef { }*)arg1;
+ (BOOL)isCJKScript:(id)arg1;
+ (id)mergeKBArray:(id)arg1 withMethodArray:(id)arg2 andPaletteArray:(id)arg3;
+ (id)scriptNameForScriptID:(id)arg1 dictionary:(id)arg2;
+ (void)setInputSource:(struct __TSMInputSource { }*)arg1 withScript:(short)arg2;

@end
