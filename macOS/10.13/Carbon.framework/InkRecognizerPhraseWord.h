/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
 */

@interface InkRecognizerPhraseWord : NSObject <NSCoding, NSCopying> {
    NSMutableArray * _charInfoArray;
    BOOL  _firstWordOfPhrase;
    NSMutableArray * _leadingSpacesArray;
    unsigned short  _majorVersion;
    unsigned short  _minorVersion;
    unsigned int  _numStrokes;
    unsigned int  _startStroke;
    NSMutableArray * _text_WordsArray;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)createInkPhraseWordRefWithWordGroup:(struct InkPhraseWordGroup { unsigned short x1; unsigned short x2; struct InkPhraseWord {} **x3; struct InkPhrase {} *x4; }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInkPhraseWord:(struct InkPhraseWord { unsigned short x1; unsigned short x2; struct InkPhraseWordGroup {} *x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned short **x9; unsigned int *x10; char *x11; struct InkCharInfo {} **x12; }*)arg1;

@end
