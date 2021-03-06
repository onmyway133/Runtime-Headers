/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSOpenDocumentReader : NSObject <NSXMLParserDelegate> {
    NSZipFileArchive * _archive;
    NSMutableAttributedString * _attrStr;
    NSMutableDictionary * _curAttributes;
    NSString * _curDocumentAttribute;
    id  _curLink;
    NSMutableDictionary * _curListStyle;
    NSArray * _curLists;
    NSMutableDictionary * _curParAttributes;
    NSMutableParagraphStyle * _curParStyle;
    NSMutableString * _curString;
    NSString * _curStyleName;
    NSMutableDictionary * _defaultStyles;
    double  _defaultTabInterval;
    NSMutableDictionary * _documentAttrs;
    NSMutableDictionary * _elementValues;
    long long  _errorCode;
    NSMutableDictionary * _fontCache;
    long long  _indexingLimit;
    NSMutableDictionary * _listStyles;
    NSMutableDictionary * _namespaces;
    long long  _parseState;
    NSMutableArray * _qualifiedAttributeNames;
    long long  _recursionLevel;
    NSMutableDictionary * _styles;
    NSMutableArray * _tabStops;
    NSMutableArray * _textBlocks;
    NSMutableArray * _textListLocations;
    NSMutableArray * _textLists;
    NSMutableArray * _textTableRowArrays;
    NSMutableArray * _textTableRows;
    NSMutableArray * _textTables;
    long long  _thumbnailLimit;
    BOOL  seenSect;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)_gregorianCalendar;
+ (id)defaultParagraphStyle;

- (void)_addMarkersToList:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_applyAttributes:(id)arg1;
- (void)_changeNamespace:(long long)arg1 fromPrefix:(id)arg2 toPrefix:(id)arg3;
- (id)_dateForString:(id)arg1;
- (void)_parse;
- (void)_parseCharacterAttributesFromElement:(long long)arg1 attributes:(id)arg2;
- (BOOL)_parseData:(id)arg1;
- (void)_parseParagraphAttributesFromElement:(long long)arg1 attributes:(id)arg2;
- (id)attributedString;
- (void)dealloc;
- (id)documentAttributes;
- (id)initWithArchive:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)setMutableAttributedString:(id)arg1;

@end
