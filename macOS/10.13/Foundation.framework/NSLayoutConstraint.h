/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSLayoutConstraint : NSObject <DebugHierarchyObject, NSISConstraint> {
    float  _coefficient;
    double  _constant;
    id  _container;
    id  _firstAnchor;
    unsigned long long  _layoutConstraintFlags;
    double  _loweredConstant;
    id  _markerAndPositiveExtraVar;
    id  _negativeExtraVar;
    float  _priority;
    id  _secondAnchor;
}

@property (setter=_setAssociatedRuleNode:, atomic, readwrite) _NSConstraintDescriptionLayoutRuleNode *_associatedRuleNode;
@property (setter=_setContainerDeclaredConstraint:, atomic, readwrite) BOOL _containerDeclaredConstraint;
@property (atomic, readonly, copy) NSSet *_referencedLayoutItems;
@property (getter=isActive, atomic, readwrite) BOOL active;
@property (atomic, readwrite) double constant;
@property (atomic, readwrite) id container;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (setter=_setFirstAnchor:, atomic, readwrite, copy) NSLayoutAnchor *firstAnchor;
@property (atomic, readonly) long long firstAttribute;
@property (atomic, readonly) id firstItem;
@property (atomic, readonly) BOOL hasBeenLowered;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *identifier;
@property (getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:, nonatomic, readwrite) BOOL loweredConstantNeedsUpdate;
@property (setter=_setMultiplier:, atomic, readwrite) double multiplier;
@property (atomic, readwrite) float priority;
@property (setter=_setRelation:, atomic, readwrite) long long relation;
@property (setter=_setSecondAnchor:, atomic, readwrite, copy) NSLayoutAnchor *secondAnchor;
@property (atomic, readonly) long long secondAttribute;
@property (atomic, readonly) id secondItem;
@property (atomic, readwrite) BOOL shouldBeArchived;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSString *symbolicConstant;
@property (atomic, readonly) double unsatisfaction;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (void)_addOrRemoveConstraints:(id)arg1 activate:(BOOL)arg2;
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (void)_setLegacyDecodingOnly:(BOOL)arg1;
+ (void)activateConstraints:(id)arg1;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
+ (void)deactivateConstraints:(id)arg1;

- (BOOL)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(double)arg3 lastLoweredConstantWasRounded:(BOOL)arg4 mutuallyExclusiveConstraints:(id*)arg5;
- (void)_addToEngine:(id)arg1;
- (BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (id)_allocationDescription;
- (double)_allowedMagnitudeForIntegralizationAdjustment;
- (double)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(double*)arg1;
- (void)_clearWeakContainerReference;
- (id)_constantDescriptionForDTrace;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (int)_constraintType;
- (id)_constraintValueCopy;
- (unsigned long long)_constraintValueHashIncludingConstant:(BOOL)arg1 includeOtherMutableProperties:(BOOL)arg2;
- (BOOL)_containerDeclaredConstraint;
- (void)_containerGeometryDidChange;
- (id)_deallocSafeDescription;
- (BOOL)_deferDTraceLogging;
- (BOOL)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_descriptionforSymbolicConstant;
- (BOOL)_effectiveConstant:(double*)arg1 error:(id*)arg2;
- (struct CGSize { double x1; double x2; })_engineToContainerScalingCoefficients;
- (void)_ensureValueMaintainsArbitraryLimit:(double*)arg1;
- (BOOL)_existsInEngine:(id)arg1;
- (id)_explainUnsatisfaction;
- (void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2;
- (double)_fudgeIncrement;
- (id)_identifier;
- (BOOL)_isEqualToConstraintValue:(id)arg1 includingConstant:(BOOL)arg2 includeOtherMutableProperties:(BOOL)arg3;
- (BOOL)_isFudgeable;
- (BOOL)_isIBPrototypingLayoutConstraint;
- (id)_layoutEngine;
- (BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2;
- (BOOL)_loweredConstantIsRounded;
- (BOOL)_loweredConstantNeedsUpdate;
- (id)_loweredExpression;
- (void)_makeExtraVars;
- (id)_markerAndPositiveExtraVar;
- (id)_negativeExtraVar;
- (BOOL)_nsib_isRedundant;
- (BOOL)_nsib_isRedundantInEngine:(id)arg1;
- (int)_primitiveConstraintType;
- (id)_priorityDescription;
- (id)_referencedLayoutItems;
- (BOOL)_referencesLayoutItem:(id)arg1;
- (void)_removeFromEngine:(id)arg1;
- (void)_setActive:(BOOL)arg1 mutuallyExclusiveConstraints:(id*)arg2;
- (void)_setContainerDeclaredConstraint:(BOOL)arg1;
- (void)_setDeferDTraceLogging:(BOOL)arg1;
- (void)_setFirstAnchor:(id)arg1;
- (void)_setFirstItem:(id)arg1 attribute:(long long)arg2;
- (void)_setIdentifier:(id)arg1;
- (void)_setLoweredConstantNeedsUpdate:(BOOL)arg1;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (void)_setMultiplier:(double)arg1;
- (void)_setMutablePropertiesFromConstraint:(id)arg1;
- (void)_setNegativeExtraVar:(id)arg1;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (void)_setRelation:(long long)arg1;
- (void)_setSecondAnchor:(id)arg1;
- (void)_setSecondItem:(id)arg1 attribute:(long long)arg2;
- (void)_setSymbolicConstant:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1 constant:(double)arg2;
- (id)_symbolicConstant;
- (void)_tryToActivateMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2;
- (BOOL)_tryToChangeContainerGeometryWithUndoHandler:(id)arg1;
- (id)animations;
- (id)asciiArtDescription;
- (double)constant;
- (id)container;
- (void)dealloc;
- (id)description;
- (id)descriptionAccessory;
- (double)dissatisfaction;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)firstAnchor;
- (long long)firstAttribute;
- (id)firstItem;
- (BOOL)hasBeenLowered;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isActive;
- (double)multiplier;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (float)priority;
- (double)priorityForVariable:(id)arg1;
- (long long)relation;
- (id)secondAnchor;
- (long long)secondAttribute;
- (id)secondItem;
- (void)setActive:(BOOL)arg1;
- (void)setAnimations:(id)arg1;
- (void)setConstant:(double)arg1;
- (void)setContainer:(id)arg1;
- (void)setHasBeenLowered:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setShouldBeArchived:(BOOL)arg1;
- (void)setSymbolicConstant:(id)arg1;
- (BOOL)shouldBeArchived;
- (id)symbolicConstant;
- (double)unsatisfaction;

// NSLayoutConstraint (NSLayoutRuleDebug)

- (id)_ancestorRuleNodes;
- (id)sourceRuleHierarchy;

// NSLayoutConstraint (_NSAssociatedRuleNode)

- (id)_associatedRuleNode;
- (void)_setAssociatedRuleNode:(id)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Debugger/libViewDebuggerSupport.dylib

// NSLayoutConstraint (DebugHierarchyAdditions)

- (id)debugHierarchyPropertyDescriptions;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSLayoutConstraint (NSAnimation)

+ (id)defaultAnimationForKey:(id)arg1;

- (id)animationForKey:(id)arg1;
- (id)animator;

// NSLayoutConstraint (NSConsistentLayoutIntegralization)

- (BOOL)_usingConsistentIntegralization;

// NSLayoutConstraint (NSConstraintSourceDetection)

- (BOOL)_isPrototypingConstraint;

// NSLayoutConstraint (NSLayoutConstraintConveniences)

+ (id)_ns_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 layoutDirection:(long long)arg8 priority:(float)arg9 identifier:(id)arg10;
+ (id)_ns_constraintsWithItem:(id)arg1 attribute:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 constant:(double)arg5 inequalityRelation:(long long)arg6 inequalityIdentifier:(id)arg7 inequalityPriority:(float)arg8 equivalencePriority:(float)arg9 equivalenceIdentifier:(id)arg10 layoutDirection:(long long)arg11;
+ (id)_ns_constraintsWithItem:(id)arg1 attribute:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 inequalityRelation:(long long)arg5 inequalityIdentifier:(id)arg6 inequalityPriority:(float)arg7 inequalityConstant:(double)arg8 equivalencePriority:(float)arg9 equivalenceIdentifier:(id)arg10 equalityConstant:(double)arg11 layoutDirection:(long long)arg12;

// NSLayoutConstraint (NSLayoutConstraintVisualization)

- (long long)_geometricCompare:(id)arg1;
- (int)_orientation;
- (struct CGPoint { double x1; double x2; })_visualCenterInWindowSpace;

// NSLayoutConstraint (NSSymbolicConstantResolution)

- (BOOL)defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3;

// NSLayoutConstraint (NSTabBarExtras)

+ (id)_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8;
+ (id)_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2;
+ (id)_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 edgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 edgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg3 priority:(float)arg4;
+ (id)_minimizingConstraintWithItem:(id)arg1 attribute:(long long)arg2;

- (void)_setConstant:(double)arg1 animated:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit

// NSLayoutConstraint (TKExtensions)

- (void)tk_removeFromContainer;

@end
