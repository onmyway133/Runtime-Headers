/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarCustomizationPreviewSectionLayout : NSObject {
    NSString * _accessibilityDescription;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedContainmentRect;
    NSArray * _cachedLayoutAttributes;
    <NSTouchBarCustomizationPreviewSectionLayoutDelegate> * _delegate;
    NSString * _identifier;
    long long  _section;
}

@property (atomic, readwrite, copy) NSString *accessibilityDescription;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedContainmentRect;
@property (atomic, readwrite, copy) NSArray *cachedLayoutAttributes;
@property (atomic, readonly) <NSTouchBarCustomizationPreviewSectionLayoutDelegate> *delegate;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readonly) long long section;

+ (Class)layoutAttributesClass;

- (id)accessibilityDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedContainmentRect;
- (id)cachedLayoutAttributes;
- (BOOL)canInsertItem:(id)arg1 atIndex:(long long)arg2;
- (BOOL)canMoveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)canMoveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 byRemovingItems:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)initWithDelegate:(id)arg1 section:(long long)arg2;
- (void)invalidateLayout;
- (id)layoutAttributesForItemAtIndex:(long long)arg1;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overlappedIndexesForMovingItemAtIndex:(long long)arg1 toIndex:(long long)arg2 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 primaryLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)prepareLayout;
- (long long)section;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setCachedContainmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCachedLayoutAttributes:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
