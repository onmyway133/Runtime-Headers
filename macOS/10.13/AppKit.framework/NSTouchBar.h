/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBar : NSObject <NSAnimatablePropertyContainer, NSCoding, TouchBarsAndItems> {
    id  _configuration;
    <NSTouchBarDelegate> * _delegate;
    id  _fbReserved;
    unsigned int  _isBuildingItems;
    NSCache * _itemCache;
    NSString * _principalItemIdentifier;
    unsigned int  _suppressedByLessFocusedTouchBars;
    unsigned int  _suppressedByMoreFocusedTouchBars;
    unsigned int  _suppressesLessFocusedTouchBars;
    unsigned int  _suppressesMoreFocusedTouchBars;
    NSSet * _templateItems;
    long long  _visibilityCount;
}

@property (atomic, readonly) double animationDuration;
@property (atomic, readonly) CAMediaTimingFunction *animationTimingFunction;
@property (atomic, readwrite, copy) NSDictionary *animations;
@property (atomic, readonly, copy) NSTouchBarCustomizableConfiguration *configuration;
@property (atomic, readwrite, copy) NSArray *customizationAllowedItemIdentifiers;
@property (atomic, readwrite, copy) NSString *customizationIdentifier;
@property (atomic, readwrite, copy) NSArray *customizationPresets;
@property (atomic, readwrite, copy) NSArray *customizationRequiredItemIdentifiers;
@property (atomic, readwrite, copy) NSArray *defaultItemIdentifiers;
@property (atomic, readwrite) <NSTouchBarDelegate> *delegate;
@property (atomic, readwrite, retain) NSTouchBarItem *escapeKeyReplacementItem;
@property (atomic, readwrite, copy) NSString *escapeKeyReplacementItemIdentifier;
@property (atomic, readonly, copy) NSArray *itemIdentifiers;
@property (atomic, readwrite, copy) NSString *principalItemIdentifier;
@property (getter=isSuppressedByLessFocusedTouchBars, atomic, readwrite) BOOL suppressedByLessFocusedTouchBars;
@property (getter=isSuppressedByMoreFocusedTouchBars, atomic, readwrite) BOOL suppressedByMoreFocusedTouchBars;
@property (atomic, readwrite) BOOL suppressesLessFocusedBars;
@property (atomic, readwrite) BOOL suppressesMoreFocusedBars;
@property (atomic, readwrite, copy) NSSet *templateItems;
@property (atomic, readwrite, copy) NSString *viewServiceTouchBarControllerIdentifier;
@property (getter=isVisible, atomic, readonly) BOOL visible;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (BOOL)automaticRTLMirroringSupported;
+ (BOOL)automaticallyNotifiesObserversOfVisible;
+ (id)keyPathsForValuesAffectingItemIdentifiers;
+ (id)keyPathsForValuesAffectingItems;

- (void).cxx_destruct;
- (BOOL)_didItemsReallyChange:(id)arg1;
- (id)configuration;
- (id)customizationAllowedItemIdentifiers;
- (id)customizationIdentifier;
- (id)customizationRequiredItemIdentifiers;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultItemIdentifiers;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)escapeKeyReplacementItemIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isVisible;
- (id)itemForIdentifier:(id)arg1;
- (id)itemIdentifiers;
- (id)items;
- (id)principalItemIdentifier;
- (void)setCustomizationAllowedItemIdentifiers:(id)arg1;
- (void)setCustomizationIdentifier:(id)arg1;
- (void)setCustomizationRequiredItemIdentifiers:(id)arg1;
- (void)setDefaultItemIdentifiers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEscapeKeyReplacementItemIdentifier:(id)arg1;
- (void)setPrincipalItemIdentifier:(id)arg1;
- (void)setTemplateItems:(id)arg1;
- (void)setTouchBarLayoutDirection:(long long)arg1;
- (id)templateItems;
- (long long)touchBarLayoutDirection;

// NSTouchBar (NSCustomizationPresets)

- (id)customizationPresets;
- (void)setCustomizationPresets:(id)arg1;

// NSTouchBar (NSEscapeKeyReplacementOld)

+ (id)keyPathsForValuesAffectingEscapeKeyReplacementItem;

- (id)escapeKeyReplacementItem;
- (void)setEscapeKeyReplacementItem:(id)arg1;

// NSTouchBar (NSOldAPI)

+ (id)keyPathsForValuesAffectingCustomizationDefaultItemIdentifiers;
+ (id)keyPathsForValuesAffectingDefaultItems;

- (id)customizationDefaultItemIdentifiers;
- (id)defaultItems;
- (void)setCustomizationDefaultItemIdentifiers:(id)arg1;
- (void)setDefaultItems:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;

// NSTouchBar (NSSwiftPlaygrounds)

- (id)_playgroundPreviewView;
- (id)_playgroundQuickLookView;

// NSTouchBar (NSSystemModalFunctionBar_Deprecated)

+ (void)dismissSystemModalFunctionBar:(id)arg1;
+ (void)minimizeSystemModalFunctionBar:(id)arg1;
+ (void)presentSystemModalFunctionBar:(id)arg1 placement:(long long)arg2 systemTrayItemIdentifier:(id)arg3;
+ (void)presentSystemModalFunctionBar:(id)arg1 systemTrayItemIdentifier:(id)arg2;

// NSTouchBar (NSSystemModalTouchBar)

+ (void)dismissSystemModalTouchBar:(id)arg1;
+ (void)minimizeSystemModalTouchBar:(id)arg1;
+ (void)presentSystemModalTouchBar:(id)arg1 placement:(long long)arg2 systemTrayItemIdentifier:(id)arg3;
+ (void)presentSystemModalTouchBar:(id)arg1 systemTrayItemIdentifier:(id)arg2;

// NSTouchBar (NSTouchBarAnimation)

+ (id)defaultAnimationForKey:(id)arg1;

- (Class)_animatorClass;
- (id)animationForKey:(id)arg1;
- (id)animations;
- (id)animator;
- (void)setAnimations:(id)arg1;

// NSTouchBar (NSTouchBarConfiguration)

+ (id)touchBarWithDelegate:(id)arg1 customizationIdentifier:(id)arg2 defaultItemIdentifiers:(id)arg3 allowedItemIdentifiers:(id)arg4;
+ (id)touchBarWithDelegate:(id)arg1 itemIdentifiers:(id)arg2;
+ (id)touchBarWithItems:(id)arg1;

// NSTouchBar (NSTouchBarEvents)

+ (BOOL)allowsTouchesDuringTrackingLoops;
+ (void)setAllowsTouchesDuringTrackingLoops:(BOOL)arg1;

// NSTouchBar (NSTouchBarInternal)

- (double)animationDuration;
- (id)animationTimingFunction;

// NSTouchBar (NSTouchBarLayout)

- (double)minWidthGivenVisualCenterX:(double)arg1;

// NSTouchBar (NSTouchBarPersistence)

- (void)_persistWithItemIdentifiers:(id)arg1 toDomain:(id)arg2;
- (void)_resetCustomization;

// NSTouchBar (NSTouchBarSuppression)

+ (BOOL)automaticallyNotifiesObserversOfSuppressedByLessFocusedTouchBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressedByMoreFocusedTouchBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressesLessFocusedBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressesMoreFocusedBars;

- (BOOL)isSuppressedByLessFocusedTouchBars;
- (BOOL)isSuppressedByMoreFocusedTouchBars;
- (void)setSuppressedByLessFocusedTouchBars:(BOOL)arg1;
- (void)setSuppressedByMoreFocusedTouchBars:(BOOL)arg1;
- (void)setSuppressesLessFocusedBars:(BOOL)arg1;
- (void)setSuppressesMoreFocusedBars:(BOOL)arg1;
- (BOOL)suppressesLessFocusedBars;
- (BOOL)suppressesMoreFocusedBars;

// NSTouchBar (NSUserDefinedTouchBar)

+ (id)pathToUserDefinedTouchBar;
+ (void)resetUserDefinedTouchBar;
+ (id)userDefinedTouchBar;

// Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge

// NSTouchBar (ViewBridge)

+ (id)_activeBarsAndItems;
+ (id)touchBarForIdentifier:(id)arg1;

- (void)_annotateWithDescriptionOfProvider:(id)arg1;
- (id)_describeProvider;
- (id)_viewServiceTouchBarControllerIdentifier;
- (void)addViewServiceTouchBarControllerObservers;
- (void)removeViewServiceTouchBarControllerObservers;
- (void)setViewServiceTouchBarControllerIdentifier:(id)arg1;
- (void)swizzledDealloc;
- (id)viewServiceTouchBarControllerDescription;
- (id)viewServiceTouchBarControllerIdentifier;

@end
