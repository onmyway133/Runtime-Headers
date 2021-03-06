/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLIOMemoryInfo : NSObject {
    int  _memoryInfoLock;
    MTLIOAccelResource * fResourceListHead;
    void * memlist_key;
}

+ (id)initialize;

- (void*)addDataSource:(id)arg1;
- (void)addResourceToList:(id)arg1;
- (struct __CFArray { }*)annotationList;
- (void)dealloc;
- (id)init;
- (void)removeDataSource:(void*)arg1;
- (void)removeResourceFromList:(id)arg1;
- (void)shutdown;

@end
