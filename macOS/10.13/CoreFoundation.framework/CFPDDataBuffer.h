/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromCFData:(struct __CFData { }*)arg1;
+ (id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(BOOL)arg2;
+ (id)newBufferFromPropertyList:(void*)arg1;

- (BOOL)beginAccessing;
- (void*)bytes;
- (struct __CFData { }*)copyCFData;
- (void*)copyPropertyListWithMutability:(unsigned long long)arg1;
- (id)copyXPCData;
- (void)endAccessing;
- (unsigned long long)length;
- (BOOL)purgable;
- (BOOL)validatePlist;

@end
