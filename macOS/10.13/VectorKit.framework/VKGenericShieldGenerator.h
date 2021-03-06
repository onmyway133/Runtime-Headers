/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKGenericShieldGenerator : NSObject <GEOResourceManifestTileGroupObserver> {
    VKPGenericShieldStyleInfo * _defaultStyle;
    NSCache * _defaultStylePacks;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKResourceManager * _resourceManager;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2;
- (id)newArtworkWithScale:(double)arg1 style:(id)arg2 size:(long long)arg3 numberOfLines:(unsigned long long)arg4;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

@end
