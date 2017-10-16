/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSPersistentHistoryResult : NSPersistentStoreResult {
    id  _aggregatedResult;
    long long  _resultType;
}

@property (atomic, readonly) id result;
@property (atomic, readonly) long long resultType;

- (void)dealloc;
- (id)initWithResultType:(long long)arg1 andResult:(id)arg2;
- (id)initWithSubresults:(id)arg1;
- (id)result;
- (long long)resultType;

@end
