/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface __NSCFCharacterSet : NSMutableCharacterSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addCharactersInString:(id)arg1;
- (id)bitmapRepresentation;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (unsigned long long)hash;
- (void)invert;
- (id)invertedSet;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)longCharacterIsMember:(unsigned int)arg1;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeCharactersInString:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;

@end
