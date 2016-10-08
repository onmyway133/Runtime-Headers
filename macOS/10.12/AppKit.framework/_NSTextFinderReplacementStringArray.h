/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSTextFinderReplacementStringArray : NSArray {
    BOOL  hasReplacePattern;
    _NSTextFinderImpl * impl;
    unsigned long long  length;
    BOOL  replacePatternHasBackreferences;
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * replacementRanges;
    NSString * replacementString;
    id  replacementStringCache;
    NSString * string;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithTextFinder:(id)arg1 replacementRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 length:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;

@end