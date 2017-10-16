/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSFileURLHandle : NSURLHandle {
    NSFileHandle * _fh;
    NSString * _path;
    NSDictionary * _properties;
}

+ (id)cachedHandleForURL:(id)arg1;
+ (BOOL)canInitWithURL:(id)arg1;
+ (void)initialize;

- (void)_backgroundFileLoadCompleted:(id)arg1;
- (void)beginLoadInBackground;
- (void)dealloc;
- (void)endLoadInBackground;
- (void)flushCachedData;
- (id)initWithURL:(id)arg1 cached:(BOOL)arg2;
- (id)loadInForeground;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKeyIfAvailable:(id)arg1;
- (BOOL)writeData:(id)arg1;
- (BOOL)writeProperty:(id)arg1 forKey:(id)arg2;

@end
