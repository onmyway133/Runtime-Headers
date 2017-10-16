/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
 */

@interface MDLBundleAssetResolver : NSObject <MDLAssetResolver> {
    NSBundle * _bundle;
    NSString * _path;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, copy) NSString *path;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canResolveAssetNamed:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)path;
- (id)resolveAssetNamed:(id)arg1;
- (void)setPath:(id)arg1;

@end
