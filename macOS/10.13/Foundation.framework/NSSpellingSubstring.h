/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSSpellingSubstring : NSString {
    NSString * _originalString;
    unsigned long long  _startingOffset;
}

- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOriginalString:(id)arg1 startingOffset:(unsigned long long)arg2;
- (unsigned long long)length;

@end
