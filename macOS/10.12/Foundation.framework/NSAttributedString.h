/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSPasteboardReading, NSPasteboardWriting, NSSecureCoding>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, copy) NSString *string;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (void)_setAttributedDictionaryClass:(Class)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacingCharactersInRanges:(const struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)string;

// NSAttributedString (NSAttributedStringPortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// NSAttributedString (NSCFAdditions)

- (unsigned long long)_cfTypeID;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// NSAttributedString (NSScriptingComparisonMethods)

- (BOOL)_attributesAreEqualToAttributesInAttributedString:(id)arg1;
- (BOOL)scriptingBeginsWith:(id)arg1;
- (BOOL)scriptingContains:(id)arg1;
- (BOOL)scriptingEndsWith:(id)arg1;
- (BOOL)scriptingIsEqualTo:(id)arg1;
- (BOOL)scriptingIsGreaterThan:(id)arg1;
- (BOOL)scriptingIsGreaterThanOrEqualTo:(id)arg1;
- (BOOL)scriptingIsLessThan:(id)arg1;
- (BOOL)scriptingIsLessThanOrEqualTo:(id)arg1;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSAttributedString (KitAddition)

+ (id)writableTextFileTypesForDocumentTypes;

- (id)RTFDFileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)docFormatFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;

// NSAttributedString (NSAttributedStringAttachmentConveniences)

+ (id)attributedStringWithAttachment:(id)arg1;

- (id)_attachmentFileWrapperDescription:(BOOL)arg1;

// NSAttributedString (NSAttributedStringDeprecatedKitAdditions)

+ (id)textFileTypes;
+ (id)textPasteboardTypes;
+ (id)textUnfilteredFileTypes;
+ (id)textUnfilteredPasteboardTypes;

- (id)URLAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;

// NSAttributedString (NSAttributedStringPasteboardAdditions)

+ (id)readableTypesForPasteboard:(id)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)textTypes;
+ (id)textUnfilteredTypes;

- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;

// NSAttributedString (NSStringDrawingExtension)

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawCenteredVerticallyInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawCenteredVerticallyInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2 scrollable:(BOOL)arg3 styledTextOptions:(id)arg4 referenceView:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawCenteredVerticallyInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scrollable:(BOOL)arg2 styledTextOptions:(id)arg3;
- (struct CGSize { double x1; double x2; })_sizeWithSize:(struct CGSize { double x1; double x2; })arg1;

// NSAttributedString (NSTextScriptingAdditions)

- (id)attachments;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore

// NSAttributedString (DataDetectorsSupport)

- (id)dd_attributedStringByAppendingAttributedString:(id)arg1;
- (id)dd_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation

// NSAttributedString (NSAttributedStringAttachmentConveniences)

+ (id)attributedStringWithAttachment:(id)arg1;

// NSAttributedString (NSAttributedStringUIFoundationAdditions)

+ (id)_documentTypeForFileType:(id)arg1;

- (id)RTFDFileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (BOOL)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_documentFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4;
- (id)_initWithDOMRange:(id)arg1;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id*)arg3;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (BOOL)_isStringDrawingTextStorage;
- (unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usesAlternativeBreaker:(BOOL)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(BOOL*)arg3;
- (void)_readDocumentFragment:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 documentAttributes:(id)arg3 subresources:(id*)arg4;
- (BOOL)containsAttachments;
- (BOOL)containsAttachmentsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)dataFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)defaultLanguage;
- (id)docFormatFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)fileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)fontAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithPath:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rulerAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// NSAttributedString (NSExtendedStringDrawing)

- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scaledByScaleFactor:(double)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withTrackingAdjustment:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (BOOL)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// NSAttributedString (NSStringDrawing)

- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
