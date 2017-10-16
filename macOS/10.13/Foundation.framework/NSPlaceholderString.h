/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSPlaceholderString : NSString

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)autorelease;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg3;
- (id)initWithString:(id)arg1;
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg4 error:(id*)arg5;
- (unsigned long long)length;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
