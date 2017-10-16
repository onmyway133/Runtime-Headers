/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCGSWindow : NSObject

@property (atomic, readwrite, copy) struct CGSRegionObject { }*activationShape;
@property (atomic, readwrite) double backdropBleedFraction;
@property (atomic, readwrite) BOOL backdropsAreFrozen;
@property (atomic, readonly, retain) NSCGSWindowBackingStore *backingStore;
@property (atomic, readwrite, copy) struct CGSRegionObject { }*buttonShape;
@property (atomic, readwrite, copy) struct CGSRegionObject { }*commandModifierExclusionShape;
@property (atomic, readwrite, copy) NSCGSWindowCornerMask *cornerMask;
@property (atomic, readwrite, copy) struct CGSRegionObject { }*dragShape;
@property (atomic, readwrite, copy) struct CGSRegionObject { }*eventShape;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (atomic, readwrite) BOOL hasBackingStore;
@property (atomic, readwrite) BOOL hasKeyAppearance;
@property (atomic, readwrite) BOOL hasMainAppearance;
@property (atomic, readwrite) int level;
@property (atomic, readwrite, copy) NSArray *movementChildren;
@property (atomic, readwrite) double opacity;
@property (atomic, readwrite, copy) struct CGSRegionObject { }*opaqueShape;
@property (getter=isOrderedIn, atomic, readonly) BOOL orderedIn;
@property (atomic, readwrite, copy) NSDictionary *shadowProperties;
@property (atomic, readwrite, copy) struct CGSRegionObject { }*shape;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } size;
@property (atomic, readwrite) int subLevel;
@property (atomic, readwrite) BOOL useActiveShadow;
@property (atomic, readonly) unsigned int windowID;

- (BOOL)_hasUncommittedSpaceGeometryChanges;

// NSCGSWindow (NCGSWindowMovement)

- (void)addMovementChild:(id)arg1;
- (void)moveByX:(double)arg1 Y:(double)arg2;
- (void)moveGroupByX:(double)arg1 Y:(double)arg2;
- (void)moveToWindow:(id)arg1 offsetX:(double)arg2 Y:(double)arg3;
- (id)movementChildren;
- (void)removeAllMovementChildren;
- (void)removeMovementChild:(id)arg1;
- (void)setMovementChildren:(id)arg1;

// NSCGSWindow (NSCGSSpace)

+ (BOOL)isAnyWindowOnAVisibleSpace:(id)arg1;

- (unsigned long long)bestSpaceContainingWindow;
- (unsigned long long)bestUserSpaceContainingWindow;
- (unsigned long long)bestUserSpaceForWindow;
- (unsigned long long)bestVisibleSpaceContainingWindow;
- (BOOL)isExpectedToBeOnSpace:(unsigned long long)arg1;

// NSCGSWindow (NSCGSWindowActivationBehavior)

- (void)disableActivationOrdering;
- (void)enableActivationOrderingWithInitiallyOrderedIn:(BOOL)arg1;
- (void)orderGroupAboveWindowIfActive:(id)arg1;
- (void)orderGroupBelowWindowIfActive:(id)arg1;
- (void)orderGroupOutIfActive;

// NSCGSWindow (NSCGSWindowApplicationOrdering)

+ (void)orderApplicationWindowsFront;

// NSCGSWindow (NSCGSWindowBackdrop)

- (double)backdropBleedFraction;
- (BOOL)backdropsAreFrozen;
- (id)makeBackdrop;
- (void)setBackdropBleedFraction:(double)arg1;
- (void)setBackdropsAreFrozen:(BOOL)arg1;

// NSCGSWindow (NSCGSWindowBackingStore)

- (id)backingStore;
- (BOOL)hasBackingStore;
- (void)setHasBackingStore:(BOOL)arg1;

// NSCGSWindow (NSCGSWindowCreation)

+ (id)window;
+ (id)windowWithConnectionID:(unsigned int)arg1;
+ (id)windowWithWindowID:(unsigned int)arg1;

// NSCGSWindow (NSCGSWindowDisplayCoordinateSystem)

+ (struct CGPoint { double x1; double x2; })convertPointFromCGCoordinates:(struct CGPoint { double x1; double x2; })arg1;
+ (struct CGPoint { double x1; double x2; })convertPointToCGCoordinates:(struct CGPoint { double x1; double x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromCGCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToCGCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// NSCGSWindow (NSCGSWindowFreezing)

- (void)freezeWithOptions:(id)arg1;
- (void)thaw;

// NSCGSWindow (NSCGSWindowGeometry)

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

// NSCGSWindow (NSCGSWindowLocallyRenderedLayerSurface)

- (id)makeLocallyRenderedLayerSurface;

// NSCGSWindow (NSCGSWindowOrdering)

+ (unsigned long long)onScreenWindowCount;
+ (unsigned long long)onScreenWindowCountForConnectionID:(unsigned int)arg1;
+ (id)onScreenWindows;
+ (id)onScreenWindowsForConnectionID:(unsigned int)arg1;
+ (id)windowsWithOptions:(unsigned int)arg1 onSpaces:(id)arg2 forConnectionID:(unsigned int)arg3;

- (BOOL)_hasUncommittedSpaceAssignmentChanges;
- (void)disassociateFromSpacesIfOrderedOut;
- (BOOL)isOrderedIn;
- (int)level;
- (void)orderAboveWindow:(id)arg1;
- (void)orderBack;
- (void)orderBelowWindow:(id)arg1;
- (void)orderFront;
- (void)orderOut;
- (void)reassociateWithSpacesByGeometry;
- (void)setDesiredSpace:(unsigned long long)arg1;
- (void)setLevel:(int)arg1;
- (void)setSubLevel:(int)arg1;
- (int)subLevel;

// NSCGSWindow (NSCGSWindowOrderingGroup)

- (void)addToOrderingGroupAboveWindow:(id)arg1;
- (void)addToOrderingGroupBelowWindow:(id)arg1;
- (void)clearOrderingGroup;
- (void)orderGroupAboveWindow:(id)arg1;
- (void)orderGroupBack;
- (void)orderGroupBelowWindow:(id)arg1;
- (void)orderGroupFront;
- (void)orderGroupFrontConditionally:(double)arg1;
- (void)orderGroupOut;
- (id)orderingGroup;
- (void)removeFromOrderingGroup;

// NSCGSWindow (NSCGSWindowSurface)

- (id)makeLayerSurface;

// NSCGSWindow (NSCGSWindowSynchronize)

+ (void)coalesceUpdateOnPort:(unsigned int)arg1;
+ (void)disableScreenUpdates;
+ (void)reenableScreenUpdates;
+ (void)synchronize;
+ (void)synchronizeForCarbon;

// NSCGSWindow (NSCGSWindowTransforms)

- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 placement:(int)arg2;

@end
