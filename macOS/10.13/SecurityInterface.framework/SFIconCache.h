/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
 */

@interface SFIconCache : NSObject {
    id  _reserved_SFIconCache;
}

+ (id)sharedIconCache;

- (id)cachedImageForItem:(struct OpaqueSecKeychainItemRef { }*)arg1;
- (id)cachedImageForItemClass:(unsigned int)arg1;
- (id)cachedImageNamed:(id)arg1;
- (void)dealloc;
- (id)init;

@end
