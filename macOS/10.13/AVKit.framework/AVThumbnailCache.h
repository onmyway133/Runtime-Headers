/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVThumbnailCache : NSObject {
    NSString * _cacheDirectoryPath;
    unsigned long long  _maximumCacheSize;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)_cacheDirectoryPath;
- (BOOL)_cleanUpCachesDirectory:(id)arg1 excludeAssetCachesDirectoryPath:(id)arg2;
- (id)_createKeyForKeyUUID:(id)arg1;
- (id)_decryptData:(id)arg1 key:(id)arg2;
- (unsigned long long)_directorySize:(id)arg1;
- (id)_encryptData:(id)arg1 key:(id)arg2;
- (BOOL)_ensureDirectoryExistsAtPath:(id)arg1;
- (id)_loadAccessDateFromExtendedFileAttributesOfFileAtPath:(id)arg1;
- (id)_loadCachedThumbnailsFromAssetCachesDirectory:(id)arg1 encryptionKey:(id)arg2 assetModificationDate:(id)arg3;
- (id)_loadEncryptionKeyFromExtendedFileAttribute:(id)arg1 filePath:(id)arg2;
- (id)_loadExtendedFileAttributeOfFileAtPath:(id)arg1 attributeName:(id)arg2 expectedSize:(long long)arg3;
- (id)_loadUUIDFromExtendedFileAttribute:(id)arg1 filePath:(id)arg2;
- (id)_randomDataOfLength:(unsigned long long)arg1;
- (BOOL)_saveThumbnail:(id)arg1 inDirectory:(id)arg2 encryptionKey:(id)arg3;
- (BOOL)_storeDateInExtendedFileAttributeOfFileAtPath:(id)arg1 date:(id)arg2;
- (BOOL)_storeExtendedFileAttributeOfFileAtPath:(id)arg1 data:(id)arg2 attributeName:(id)arg3;
- (BOOL)_storeUUIDInExtendedFileAttribute:(id)arg1 filePath:(id)arg2 UUID:(id)arg3;
- (BOOL)cacheThumbnail:(id)arg1 assetURL:(id)arg2;
- (id)init;
- (id)initWithCacheSize:(unsigned long long)arg1 cacheDirectoryPath:(id)arg2;
- (id)loadCachedThumbnailsForAssetAtURL:(id)arg1;

@end
