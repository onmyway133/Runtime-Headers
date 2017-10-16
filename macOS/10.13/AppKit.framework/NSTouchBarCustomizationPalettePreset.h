/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarCustomizationPalettePreset : NSObject <NSCopying> {
    NSCandidateListTouchBarItem * _collapsedItem;
    NSImage * _presetSnapshot;
    NSTouchBarItemTree * _representedItemTree;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _visualCenterXOffset;
}

@property (atomic, readonly, copy) NSImage *presetSnapshot;
@property (atomic, readonly) NSTouchBarItemTree *representedItemTree;
@property (atomic, readwrite) double visualCenterXOffset;

+ (id)presetForItemTree:(id)arg1 inBarWithSize:(struct CGSize { double x1; double x2; })arg2;

- (void)cleanUpPaletteViewAfterSnapshot:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)makePaletteViewForSnapshot;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (id)presetSnapshot;
- (id)representedItemTree;
- (void)setVisualCenterXOffset:(double)arg1;
- (double)visualCenterXOffset;

@end
