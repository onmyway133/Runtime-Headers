/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCache : NSObject {
    bool  _isCommitting;
    NSSet * _layouts;
    CPBitmapStore * _store;
}

+ (bool)enabled;
+ (id)sharedInstance;

- (struct CGImage { }*)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;
- (struct CGImage { }*)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (void)clearNonPersistentCache;
- (void)commitTransaction;
- (void)dealloc;
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;
- (void)displayView:(id)arg1 fromLayout:(id)arg2;
- (void)displayView:(id)arg1 imageWidth:(double)arg2 fromLayout:(id)arg3;
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (id)init;
- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (void)updateCacheForInputModes:(id)arg1;

@end
