/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKInterfaceBuilderSharedDatasource : NSObject {
    NSMutableArray * _array;
}

+ (id)sharedInstance;

- (void)addAnImageWithPath:(id)arg1 toArray:(id)arg2;
- (void)addImagesWithPath:(id)arg1 recursive:(BOOL)arg2 toArray:(id)arg3;
- (void)dealloc;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (id)init;
- (int)numberOfItems;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (void)setNumberOfItems:(int)arg1;

@end
