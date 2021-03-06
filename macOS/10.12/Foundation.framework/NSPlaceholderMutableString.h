/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSPlaceholderMutableString : NSMutableString

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)autorelease;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; })arg3;
- (id)initWithString:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (unsigned long long)length;
- (oneway void)release;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;

@end
