/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusPromiseRegion : _UIFocusRegion {
    <_UIFocusPromiseRegionDelegate> * _delegate;
}

@property (nonatomic) <_UIFocusPromiseRegionDelegate> *delegate;

- (void).cxx_destruct;
- (id)_delegateFulfillFocusPromiseRegion;
- (id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (unsigned long long)_focusableBoundaries;
- (bool)_shouldCropRegionToSearchArea;
- (bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (id)_visualRepresentationColor;
- (long long)_visualRepresentationPatternType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
