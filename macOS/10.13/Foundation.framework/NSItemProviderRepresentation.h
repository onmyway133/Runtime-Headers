/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSItemProviderRepresentation : NSObject {
    id  _loader;
    long long  _preferredRepresentation;
    NSString * _typeIdentifier;
    long long  _visibility;
}

@property (atomic, readwrite) long long preferredRepresentation;
@property (atomic, readonly, copy) NSString *typeIdentifier;
@property (atomic, readwrite) long long visibility;

- (id)_loadWithOptions:(id)arg1 completionBlock:(id)arg2;
- (id)copyWithDoNothingLoaderBlock;
- (void)dealloc;
- (id)initWithType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(id)arg3;
- (id)initWithType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(id)arg3;
- (id)loadDataWithOptions:(id)arg1 completionHandler:(id)arg2;
- (id)loadDataWithOptions_v2:(id)arg1 completionHandler:(id)arg2;
- (id)loadFileCopyWithOptions:(id)arg1 completionHandler:(id)arg2;
- (id)loadFileCopyWithOptions_v2:(id)arg1 completionHandler:(id)arg2;
- (id)loadOpenInPlaceWithOptions:(id)arg1 completionHandler:(id)arg2;
- (id)loadOpenInPlaceWithOptions_v2:(id)arg1 completionHandler:(id)arg2;
- (id)loadWithOptions:(id)arg1 completionHandler:(id)arg2;
- (id)loadWithOptions_v2:(id)arg1 completionHandler:(id)arg2;
- (id)performProgressTrackingWithLoaderBlock:(id)arg1 onCancelCallback:(id)arg2;
- (long long)preferredRepresentation;
- (void)setLoaderBlock:(id)arg1;
- (void)setLoaderBlock_v2:(id)arg1;
- (void)setPreferredRepresentation:(long long)arg1;
- (void)setVisibility:(long long)arg1;
- (id)typeIdentifier;
- (long long)visibility;

@end