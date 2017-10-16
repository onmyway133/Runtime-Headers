/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void * _priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (void)lockForReading;
- (BOOL)lockForReadingBeforeDate:(id)arg1;
- (void)lockForWriting;
- (BOOL)lockForWritingBeforeDate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)tryLockForReading;
- (BOOL)tryLockForWriting;
- (void)unlock;

@end
