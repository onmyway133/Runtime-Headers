/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPasteboard : NSObject {
    long long  _cachedTypeNameChangeCount;
    id  _cachedTypeNames;
    int  _gen;
    id  _owners;
    id  _pasteboardItems;
    id  _pboard;
    NSMutableDictionary * _promiseTypeNamesByIdentifier;
    void * _reserved;
    id  _support;
}

@property (atomic, readonly) long long changeCount;
@property (atomic, readonly, copy) NSString *name;
@property (atomic, readonly, copy) NSArray *pasteboardItems;
@property (atomic, readonly, copy) NSArray *types;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (id)_convertDataToPropertyList:(id)arg1;
+ (id)_convertDataToString:(id)arg1;
+ (id)_convertPropertyListToData:(id)arg1;
+ (id)_convertStringToData:(id)arg1;
+ (BOOL)_isValidPasteboardUTI:(id)arg1 logStringMessage:(id)arg2;
+ (id)_pasteboardWithName:(id)arg1;
+ (id)_propertyListForType:(id)arg1 fromData:(id)arg2;
+ (void)_provideAllPromisedData:(id)arg1;
+ (void)_resetUsesUTIsOnly;
+ (BOOL)_typeIdentifierIskUTTypeFileURL:(id)arg1;
+ (BOOL)_usesUTIsOnly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)generalPasteboard;
+ (void)initialize;
+ (id)pasteboardWithName:(id)arg1;
+ (id)pasteboardWithUniqueName;

- (BOOL)_attachSecurityScopeToURL:(id)arg1 index:(unsigned long long)arg2;
- (id)_availableTypeFromArray:(id)arg1 inExistingTypes:(id)arg2;
- (id)_cachedTypeNameUnion;
- (BOOL)_canRequestDataForType:(id)arg1 index:(unsigned long long)arg2 usesPboardTypes:(BOOL)arg3 combinesItems:(BOOL)arg4;
- (struct __CFPasteboard { }*)_cfPasteboard;
- (void)_clearOutstandingPromises;
- (id)_combinedPasteboardDataForTypeIdentifier:(id)arg1;
- (id)_conformingTypeIdentifiers;
- (BOOL)_contentsOfURL:(id)arg1 conformToTypeIdentifiers:(id)arg2;
- (long long)_currentGeneration;
- (id)_dataForType:(id)arg1 index:(unsigned long long)arg2 usesPboardTypes:(BOOL)arg3 combinesItems:(BOOL)arg4 securityScoped:(BOOL)arg5;
- (id)_dataForType:(id)arg1 securityScoped:(BOOL)arg2;
- (id)_dataWithoutConversionForType:(id)arg1 securityScoped:(BOOL)arg2;
- (id)_dataWithoutConversionForTypeIdentifier:(id)arg1 index:(unsigned long long)arg2 securityScoped:(BOOL)arg3;
- (id)_dataWithoutConversionForTypeIdentifier:(id)arg1 securityScoped:(BOOL)arg2;
- (id)_pasteboardItems;
- (id)_promiseTypeNameForIdentifier:(struct __CFString { }*)arg1;
- (id)_propertyListForType:(id)arg1 securityScoped:(BOOL)arg2;
- (void)_removeFromGlobalTable;
- (BOOL)_setData:(id)arg1 forType:(id)arg2 index:(unsigned long long)arg3 usesPboardTypes:(BOOL)arg4;
- (long long)_setOwner:(id)arg1 forTypes:(id)arg2 atIndex:(unsigned long long)arg3 selector:(SEL)arg4 usesPboardTypes:(BOOL)arg5;
- (id)_typesAtIndex:(unsigned long long)arg1 combinesItems:(BOOL)arg2;
- (void)_updateTypeCacheIfNeeded;
- (long long)addTypes:(id)arg1 owner:(id)arg2;
- (id)availableTypeFromArray:(id)arg1;
- (BOOL)canReadItemWithDataConformingToTypes:(id)arg1;
- (BOOL)canReadObjectForClasses:(id)arg1 options:(id)arg2;
- (long long)changeCount;
- (long long)clearContents;
- (id)dataForType:(id)arg1;
- (void)dealloc;
- (long long)declareTypes:(id)arg1 owner:(id)arg2;
- (unsigned long long)indexOfPasteboardItem:(id)arg1;
- (id)name;
- (id)pasteboardItems;
- (long long)prepareForNewContentsWithOptions:(unsigned long long)arg1;
- (id)propertyListForType:(id)arg1;
- (id)readObjectsForClasses:(id)arg1 options:(id)arg2;
- (oneway void)releaseGlobally;
- (BOOL)setData:(id)arg1 forType:(id)arg2;
- (BOOL)setDataProvider:(id)arg1 forTypes:(id)arg2;
- (BOOL)setPropertyList:(id)arg1 forType:(id)arg2;
- (BOOL)setString:(id)arg1 forType:(id)arg2;
- (id)stringForType:(id)arg1;
- (id)types;
- (BOOL)writeObjects:(id)arg1;

// NSPasteboard (FilterServices)

+ (id)pasteboardByFilteringData:(id)arg1 ofType:(id)arg2;
+ (id)pasteboardByFilteringFile:(id)arg1;
+ (id)pasteboardByFilteringTypesInPasteboard:(id)arg1;
+ (id)typesFilterableTo:(id)arg1;

// NSPasteboard (NSFileContents)

- (BOOL)attemptOverwrite:(id)arg1;
- (id)readFileContentsType:(id)arg1 toFile:(id)arg2;
- (id)readFileWrapper;
- (BOOL)writeFileContents:(id)arg1;
- (BOOL)writeFileWrapper:(id)arg1;

// NSPasteboard (NSTypeConversion)

+ (id)_oldStyleTypeNameForIdentifier:(struct __CFString { }*)arg1;
+ (void)_setConversionFromData:(id)arg1 typeIdentifier:(id)arg2 inPasteboard:(struct __CFPasteboard { }*)arg3 generation:(long long)arg4 item:(void*)arg5;
+ (struct __CFString { }*)_typeIdentifierForName:(id)arg1;
+ (struct __CFString { }*)_typeIdentifierForName:(id)arg1 securityScoped:(BOOL)arg2;
+ (id)_typeIdentifiersIncludingConversionsFromTypeIdentifiers:(id)arg1;
+ (id)_typeIdentifiersIncludingConversionsFromTypeIdentifiers:(id)arg1 usesPboardTypes:(BOOL)arg2;
+ (id)_typesIncludingConversionsFromTypes:(id)arg1;

- (void)_addConversionsFromTypeIdentifiers:(id)arg1 atIndex:(unsigned long long)arg2 usesPboardTypes:(BOOL)arg3;
- (id)_conformingTypes;
- (id)_dataWithConversionForType:(id)arg1 securityScoped:(BOOL)arg2;
- (id)_dataWithConversionForTypeIdentifier:(id)arg1 atIndex:(unsigned long long)arg2 securityScoped:(BOOL)arg3;

// Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy

// NSPasteboard (WebExtras)

+ (id)_web_dragTypesForURL;
+ (int)_web_setFindPasteboardString:(id)arg1 withOwner:(id)arg2;
+ (id)_web_writableTypesForImageIncludingArchive:(BOOL)arg1;
+ (id)_web_writableTypesForURL;

- (id)_web_bestURL;
- (id)_web_declareAndWriteDragImageForElement:(id)arg1 URL:(id)arg2 title:(id)arg3 archive:(id)arg4 source:(id)arg5;
- (void)_web_writeFileWrapperAsRTFDAttachment:(id)arg1;
- (void)_web_writeImage:(id)arg1 element:(id)arg2 URL:(id)arg3 title:(id)arg4 archive:(id)arg5 types:(id)arg6 source:(id)arg7;
- (void)_web_writePromisedRTFDFromArchive:(id)arg1 containsImage:(BOOL)arg2;
- (void)_web_writeURL:(id)arg1 andTitle:(id)arg2 types:(id)arg3;

@end