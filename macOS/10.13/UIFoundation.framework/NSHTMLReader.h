/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSHTMLReader : NSObject {
    NSMutableAttributedString * _attrStr;
    NSMutableDictionary * _attributesForElements;
    NSURL * _baseURL;
    NSMutableDictionary * _colorsForNodes;
    NSMutableDictionary * _computedStylesForElements;
    NSData * _data;
    WebDataSource * _dataSource;
    double  _defaultFontSize;
    double  _defaultTabInterval;
    DOMDocument * _document;
    NSMutableDictionary * _documentAttrs;
    DOMRange * _domRange;
    long long  _domRangeStartIndex;
    NSMutableArray * _domStartAncestors;
    NSMutableDictionary * _elementIsBlockLevel;
    long long  _errorCode;
    struct { 
        unsigned int isSoft : 1; 
        unsigned int reachedStart : 1; 
        unsigned int reachedEnd : 1; 
        unsigned int isIndexing : 1; 
        unsigned int isTesting : 1; 
        unsigned int hasTrailingNewline : 1; 
        unsigned int pad : 26; 
    }  _flags;
    NSMutableDictionary * _floatsForNodes;
    NSMutableDictionary * _fontCache;
    long long  _indexingLimit;
    double  _minimumFontSize;
    NSDictionary * _options;
    long long  _quoteLevel;
    NSMutableDictionary * _specifiedStylesForElements;
    NSString * _standardFontFamily;
    NSMutableDictionary * _stringsForNodes;
    NSMutableArray * _textBlocks;
    NSMutableArray * _textLists;
    double  _textSizeMultiplier;
    NSMutableDictionary * _textTableFooters;
    NSMutableArray * _textTablePaddings;
    NSMutableArray * _textTableRowArrays;
    NSMutableArray * _textTableRowBackgroundColors;
    NSMutableArray * _textTableRows;
    NSMutableArray * _textTableSpacings;
    NSMutableArray * _textTables;
    long long  _thumbnailLimit;
    id  _webDelegate;
    WebView * _webView;
    double  _webViewTextSizeMultiplier;
    NSMutableArray * _writingDirectionArray;
}

+ (id)defaultParagraphStyle;
+ (void)initialize;

- (Class)_DOMHTMLTableCellElementClass;
- (BOOL)_addAttachmentForElement:(id)arg1 URL:(id)arg2 needsParagraph:(BOOL)arg3 usePlaceholder:(BOOL)arg4;
- (void)_addMarkersToList:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_addQuoteForElement:(id)arg1 opening:(BOOL)arg2 level:(long long)arg3;
- (void)_addQuoteForLibXML2ElementNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 opening:(BOOL)arg2 level:(long long)arg3;
- (void)_addTableCellForElement:(id)arg1;
- (void)_addTableForElement:(id)arg1;
- (void)_addValue:(id)arg1 forElement:(id)arg2;
- (void)_adjustTrailingNewline;
- (id)_attributesForElement:(id)arg1;
- (id)_blockLevelElementForNode:(id)arg1;
- (id)_childrenForNode:(id)arg1;
- (id)_colorForNode:(id)arg1 property:(id)arg2;
- (id)_computedAttributesForElement:(id)arg1;
- (id)_computedColorForNode:(id)arg1 property:(id)arg2;
- (id)_computedStringForNode:(id)arg1 property:(id)arg2;
- (id)_computedStyleForElement:(id)arg1;
- (id)_createWebArchiveForData:(id)arg1;
- (BOOL)_elementHasOwnBackgroundColor:(id)arg1;
- (BOOL)_elementIsBlockLevel:(id)arg1;
- (BOOL)_enterElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4 embedded:(BOOL)arg5;
- (BOOL)_enterLibXML2ElementNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 tag:(id)arg2;
- (void)_exitElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4 startIndex:(unsigned long long)arg5;
- (void)_exitLibXML2ElementNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 tag:(id)arg2 startIndex:(unsigned long long)arg3;
- (void)_fillInBlock:(id)arg1 forElement:(id)arg2 backgroundColor:(id)arg3 extraMargin:(double)arg4 extraPadding:(double)arg5 isTable:(BOOL)arg6;
- (BOOL)_getComputedFloat:(double*)arg1 forNode:(id)arg2 property:(id)arg3;
- (BOOL)_getFloat:(double*)arg1 forNode:(id)arg2 property:(id)arg3;
- (void)_load;
- (void)_loadFromDOMRange;
- (void)_loadUsingLibXML2;
- (void)_loadUsingWebKit;
- (void)_loadUsingWebKitOnMainThread;
- (void)_newLineForElement:(id)arg1;
- (void)_newLineForLibXML2ElementNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_newParagraphForElement:(id)arg1 tag:(id)arg2 allowEmpty:(BOOL)arg3 suppressTrailingSpace:(BOOL)arg4 isEntering:(BOOL)arg5;
- (void)_newParagraphForLibXML2ElementNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 tag:(id)arg2 allowEmpty:(BOOL)arg3 suppressTrailingSpace:(BOOL)arg4;
- (void)_newTabForElement:(id)arg1;
- (void)_parseLibXML2Node:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_parseNode:(id)arg1;
- (BOOL)_processElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4;
- (void)_processHeadElement:(id)arg1;
- (BOOL)_processLibXML2ElementNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 tag:(id)arg2;
- (void)_processLibXML2HeadElementNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_processLibXML2MetaNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_processLibXML2TextNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 content:(id)arg2;
- (void)_processLibXML2TitleNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)_processMetaElementWithName:(id)arg1 content:(id)arg2;
- (void)_processText:(id)arg1;
- (BOOL)_sanitizeWebArchiveArray:(id)arg1;
- (BOOL)_sanitizeWebArchiveDictionary:(id)arg1;
- (id)_specifiedStyleForElement:(id)arg1;
- (id)_stringForNode:(id)arg1 property:(id)arg2;
- (void)_traverseFooterNode:(id)arg1 depth:(long long)arg2;
- (void)_traverseLibXML2Node:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 depth:(long long)arg2;
- (void)_traverseNode:(id)arg1 depth:(long long)arg2 embedded:(BOOL)arg3;
- (Class)_webArchiveClass;
- (id)_webPreferences;
- (Class)_webViewClass;
- (id)attributedString;
- (void)dealloc;
- (id)documentAttributes;
- (id)initWithDOMRange:(id)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (void)setMutableAttributedString:(id)arg1;

@end
