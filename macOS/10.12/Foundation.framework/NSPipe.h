/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSPipe : NSObject

@property (atomic, readonly, retain) NSFileHandle *fileHandleForReading;
@property (atomic, readonly, retain) NSFileHandle *fileHandleForWriting;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pipe;

- (void)_closeOnDealloc;
- (id)fileHandleForReading;
- (id)fileHandleForWriting;
- (id)init;

@end
