/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest {
    long long  _estimatedResultCount;
    NSFetchRequest * _fetchRequest;
    id  _requestCompletionBlock;
}

@property (atomic, readonly) id completionBlock;
@property (nonatomic, readwrite) long long estimatedResultCount;
@property (atomic, readonly) NSFetchRequest *fetchRequest;

- (id)completionBlock;
- (void)dealloc;
- (id)description;
- (long long)estimatedResultCount;
- (id)fetchRequest;
- (id)initWithFetchRequest:(id)arg1 completionBlock:(id)arg2;
- (unsigned long long)requestType;
- (void)setEstimatedResultCount:(long long)arg1;

@end
