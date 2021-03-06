/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarCustomizationControlStripState : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _applicationRect;
    NSDictionary * _cachedConfiguration;
    BOOL  _cachedConfigurationIsValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _escapeKeyRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _expandedControlStripRect;
    NSTouchBar * _expandedTouchBar;
    long long  _functionVariant;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _miniControlStripRect;
    NSTouchBar * _miniTouchBar;
    long long  _primaryMode;
}

@property (atomic, readonly) long long applicationCustomizableState;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } applicationRect;
@property (atomic, readonly) long long controlStripCustomizableState;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } escapeKeyRect;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } expandedControlStripRect;
@property (atomic, readonly) NSTouchBar *expandedTouchBar;
@property (atomic, readonly) long long functionVariant;
@property (atomic, readonly) BOOL miniControlStripCustomizationIsAccessible;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } miniControlStripRect;
@property (atomic, readonly) NSTouchBar *miniTouchBar;
@property (atomic, readonly) long long primaryMode;

+ (id)sharedControlStrip;

- (void)_updateExpandedControlStripTouchBarIfNeededFrom:(id)arg1 to:(id)arg2;
- (void)_updateIfNeeded;
- (void)_updateMiniControlStripTouchBarIfNeededFrom:(id)arg1 to:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationRect;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })escapeKeyRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedControlStripRect;
- (id)expandedTouchBar;
- (long long)functionVariant;
- (void)invalidate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })miniControlStripRect;
- (id)miniTouchBar;
- (long long)primaryMode;

// NSTouchBarCustomizationControlStripState (NSCustomizationConveniences)

- (long long)applicationCustomizableState;
- (long long)controlStripCustomizableState;
- (BOOL)miniControlStripCustomizationIsAccessible;

@end
