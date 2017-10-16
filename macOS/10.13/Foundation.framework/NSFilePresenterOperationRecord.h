/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSFilePresenterOperationRecord : NSObject {
    NSString * operationDescription;
    id  reactor;
    long long  state;
}

@property (atomic, readonly) NSString *operationDescription;
@property (atomic, readwrite) id reactor;
@property (atomic, readonly) long long state;

+ (id)operationRecordWithDescription:(id)arg1;

- (id)_reactorQueue;
- (void)dealloc;
- (id)description;
- (void)didBegin;
- (void)didEnd;
- (id)operationDescription;
- (id)reactor;
- (void)setReactor:(id)arg1;
- (long long)state;
- (void)willEnd;

@end
