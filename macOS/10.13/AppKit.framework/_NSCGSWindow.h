/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCGSWindow : NSCGSWindow {
    struct CGSRegionObject { } * _activationRegion;
    double  _backdropBleedFraction;
    unsigned int  _backdropsAreFrozen;
    struct CGSRegionObject { } * _buttonRegion;
    NSCGSWindowCornerMask * _cornerMask;
    struct CGSRegionObject { } * _dragRegion;
    struct CGSRegionObject { } * _eventShape;
    unsigned int  _externalWindow;
    unsigned int  _flags;
    unsigned int  _hasKeyAppearance;
    unsigned int  _hasMainAppearance;
    _NSCGSWindowMovementChildren * _movementChildren;
    double  _opacity;
    struct CGSRegionObject { } * _opaqueShape;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    struct CGSize { 
        double width; 
        double height; 
    }  _relativeMoveOffset;
    NSCGSWindow * _relativeMoveParent;
    struct CGSRegionObject { } * _relativeShape;
    NSDictionary * _shadowProperties;
    struct CGSRegionObject { } * _specialCommandRegion;
    NSMapTable * _transforms;
    unsigned int  _useActiveShadow;
    unsigned int  _windowID;
}

- (double)_backdropBleedFraction;
- (BOOL)_backdropsAreFrozen;
- (BOOL)_hasUncommittedSpaceGeometryChanges;
- (void)_setBackdropBleedFraction:(double)arg1;
- (void)_setBackdropsAreFrozen:(BOOL)arg1;
- (struct CGSRegionObject { }*)activationShape;
- (void)addMovementChild:(id)arg1;
- (struct CGSRegionObject { }*)buttonShape;
- (struct CGSRegionObject { }*)commandModifierExclusionShape;
- (id)cornerMask;
- (void)dealloc;
- (id)description;
- (struct CGSRegionObject { }*)dragShape;
- (struct CGSRegionObject { }*)eventShape;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)freezeWithOptions:(id)arg1;
- (BOOL)hasKeyAppearance;
- (BOOL)hasMainAppearance;
- (id)init;
- (id)initWithConnectionID:(unsigned int)arg1;
- (id)initWithWindowID:(unsigned int)arg1;
- (void)moveByX:(double)arg1 Y:(double)arg2;
- (void)moveByX:(double)arg1 Y:(double)arg2 isChildOfGroupMovement:(BOOL)arg3;
- (void)moveGroupByX:(double)arg1 Y:(double)arg2;
- (void)moveGroupByX:(double)arg1 Y:(double)arg2 isChildOfGroupMovement:(BOOL)arg3;
- (void)moveToWindow:(id)arg1 offsetX:(double)arg2 Y:(double)arg3;
- (id)movementChildren;
- (double)opacity;
- (struct CGSRegionObject { }*)opaqueShape;
- (void)removeAllMovementChildren;
- (void)removeMovementChild:(id)arg1;
- (void)setActivationShape:(struct CGSRegionObject { }*)arg1;
- (void)setButtonShape:(struct CGSRegionObject { }*)arg1;
- (void)setCommandModifierExclusionShape:(struct CGSRegionObject { }*)arg1;
- (void)setCornerMask:(id)arg1;
- (void)setDragShape:(struct CGSRegionObject { }*)arg1;
- (void)setEventShape:(struct CGSRegionObject { }*)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasKeyAppearance:(BOOL)arg1;
- (void)setHasMainAppearance:(BOOL)arg1;
- (void)setMovementChildren:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setOpaqueShape:(struct CGSRegionObject { }*)arg1;
- (void)setShadowProperties:(id)arg1;
- (void)setShape:(struct CGSRegionObject { }*)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 placement:(int)arg2;
- (void)setUseActiveShadow:(BOOL)arg1;
- (id)shadowProperties;
- (struct CGSRegionObject { }*)shape;
- (struct CGSize { double x1; double x2; })size;
- (void)thaw;
- (BOOL)useActiveShadow;
- (unsigned int)windowID;

@end
