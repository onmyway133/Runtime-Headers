/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSArray : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding>

@property (atomic, readonly) unsigned long long count;

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)array;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(BOOL)arg3;
+ (id)arrayWithObject:(id)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithOrderedSet:(id)arg1;
+ (id)arrayWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(BOOL)arg3;
+ (id)arrayWithSet:(id)arg1;
+ (id)arrayWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (BOOL)supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)_initByAdoptingBuffer:(id*)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (id)allObjects;
- (id)arrayByAddingObject:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)arrayByExcludingObjectsInArray:(id)arg1;
- (id)arrayByExcludingToObjectsInArray:(id)arg1;
- (id)componentsJoinedByString:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (BOOL)containsObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)firstObject;
- (id)firstObjectCommonWithArray:(id)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingComparator:(id)arg4;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObjectPassingTest:(id)arg1;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)indexesOfObject:(id)arg1;
- (id)indexesOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)indexesOfObjectIdenticalTo:(id)arg1;
- (id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectsPassingTest:(id)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (BOOL)isNSArray__;
- (id)lastObject;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (id)objectEnumerator;
- (id)objectPassingTest:(id)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)reverseObjectEnumerator;
- (id)reversedArray;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id)arg3;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id)arg2;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook

// NSArray (ABArrayAdditions)

- (BOOL)_abAll:(id)arg1;
- (BOOL)_abAny:(id)arg1;
- (id)_abDictionaryOfObjectsByKey:(id)arg1;
- (id)_abFilter:(id)arg1;
- (id)_abFirstObjectPassingTest:(id)arg1;
- (id)_abFlatten;
- (id)_abGroupByKey:(id)arg1;
- (id)_abMap:(id)arg1;
- (id)_abMapNoFilter:(id)arg1;
- (id)_abSortedArrayUsingAuxiliaryKey:(id)arg1;
- (id)_ab_arrayByCollectingResults:(id)arg1;
- (BOOL)_ab_containsAnyObjectInArray:(id)arg1;
- (BOOL)_ab_containsAnyObjectInSet:(id)arg1;
- (void)_ab_each:(id)arg1;
- (void)_ab_each_reverse:(id)arg1;
- (void)_ab_enumerateWithStride:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)_ab_mapNoNils:(id)arg1;
- (id)_ab_reduceToDictionary:(id)arg1;
- (id)_ab_safeObjectAtIndex:(unsigned long long)arg1;
- (id)_ab_subarrayFromIndex:(unsigned long long)arg1;
- (id)_ab_tail;
- (id)_ab_uniqueObjects;
- (id)abArrayWithResultsOfBlock:(id)arg1;
- (BOOL)abContainsObjectUsingPointerComparison:(id)arg1;
- (unsigned long long)abCountObjectsPassingTest:(id)arg1;
- (id)abFilteredArrayUsingBlock:(id)arg1;
- (id)abIndicesForObjects:(id)arg1;

// NSArray (ABMetaDataArrayAdditions)

- (id)abPeopleFromUniqueIds;
- (id)abPeopleFromUniqueIdsWithAddressBook:(id)arg1;
- (id)abUniqueIds;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSArray (NSSelectionArray)

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })firstRange;
- (unsigned long long)indexOfFirstRangeContainingOrFollowing:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })maximumRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned long long)arg1;
- (BOOL)rangesContainLocation:(unsigned long long)arg1;

// NSArray (NSSelectionArrayAdditions)

- (BOOL)_getRangeIndex:(unsigned long long*)arg1 atIndex:(unsigned long long)arg2;

// NSArray (_NSBinderKeyValueCodingAdditions)

- (void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ofObjectAtIndex:(unsigned long long)arg4;

// Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox

// NSArray (TextInputSourcesUtils)

- (id)subarrayWithObjectsOfKind:(Class)arg1;

// Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage

// NSArray (CIArrayUtils)

+ (id)CI_arrayWithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)CI_arrayWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CI_affineTransform;
- (id)CI_initWithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)CI_initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CI_rect;

// Image: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices

// NSArray (LSObserverAdditions)

+ (id)arrayByFilteringLaunchProhibitedAppsFrom:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSArray (NSArray)

+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2;

- (id)_stringToWrite;
- (Class)classForCoder;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)sortedArrayHint;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2 hint:(id)arg3;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 error:(id*)arg2;

// NSArray (NSArrayPathExtensions)

- (id)pathsMatchingExtensions:(id)arg1;
- (id)stringsByAppendingPathComponent:(id)arg1;

// NSArray (NSArrayPortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// NSArray (NSDeprecatedKeyValueCoding)

- (void)takeValue:(id)arg1 forKey:(id)arg2;

// NSArray (NSKeyValueCoding)

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_unionOfSetsForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

// NSArray (NSKeyValueCodingPrivate)

- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;

// NSArray (NSKeyValueObserverRegistration)

- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4;

// NSArray (NSKeyValueSorting)

- (id)sortedArrayUsingDescriptors:(id)arg1;

// NSArray (NSPredicateSupport)

- (id)filteredArrayUsingPredicate:(id)arg1;

// NSArray (NSScriptAppleEventConversion)

+ (id)_scriptingArrayOfType:(id)arg1 withDescriptor:(id)arg2;

- (int)_scriptingAlternativeValueRankWithDescriptor:(id)arg1;
- (id)_scriptingDescriptorOfListType:(id)arg1 orReasonWhyNot:(id*)arg2;

// NSArray (NSScriptKeyValueCoding)

- (id)coerceValue:(id)arg1 forKey:(id)arg2;
- (void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3;
- (void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2;
- (void)replaceValueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 withValue:(id)arg3;
- (id)valueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2;

// NSArray (NSScriptingInternal)

- (id)_scriptingArrayOfObjectsForSpecifier:(id)arg1;
- (id)_scriptingObjectForSpecifier:(id)arg1;
- (id)_scriptingSetOfObjectsForSpecifier:(id)arg1;
- (id)_scriptingValueForSpecifier:(id)arg1;

// NSArray (NSScriptingInternalCommandHandling)

- (void)_scriptingAddToReceiversArray:(id)arg1;
- (BOOL)_scriptingCanHandleCommand:(id)arg1;
- (BOOL)_scriptingMightHandleCommand:(id)arg1;

// NSArray (NSScriptingInternalCounting)

- (unsigned long long)_scriptingCount;
- (unsigned long long)_scriptingCountNonrecursively;
- (unsigned long long)_scriptingCountOfValueForKey:(id)arg1;

// NSArray (NSScriptingInternalDeleting)

- (void)_scriptingRemoveValueForSpecifier:(id)arg1;

// NSArray (NSScriptingInternalExisting)

- (BOOL)_scriptingExists;

// NSArray (NSScriptingInternalSetting)

- (id)_scriptingSetValue:(id)arg1 forSpecifier:(id)arg2;

// Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore

// NSArray (ImageCaptureCoreAdditions)

- (id)copyGroupIntoDictionary:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit

// NSArray (MKAdditions)

- (id)_mapkit_arrayByRemovingObject:(id)arg1;
- (id)_mapkit_componentsJoinedInCommaDelimitedList;
- (unsigned long long)_mapkit_indexForObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3;
- (id)_mapkit_joinedAddressComponents;

// NSArray (MKOverlayAdditions)

- (void)_mapkit_orientableAnnotationViewsFixed:(id*)arg1 notFixed:(id*)arg2;

// Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit

// NSArray (NSStringArray_ModernizerExtras)

- (BOOL)containsString:(id)arg1;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit

// NSArray (IKPictureTakerAdditions)

- (id)IKIPArrayByApplyingSelector:(SEL)arg1;
- (id)IKIPArrayByApplyingSelector:(SEL)arg1 withObject:(id)arg2;
- (BOOL)IKIPContainsObjectIdenticalTo:(id)arg1;

// NSArray (Metadata)

- (id)localizedArrayValues;
- (id)localizedVersionString;

// Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit

// NSArray (PDFKitStaticArray)

+ (id)PDFKitAnnotationKeys;
+ (id)PDFKitAnnotationKeysIgnored;
+ (id)PDFKitAppearanceDictionaryArray;
+ (id)PDFKitBorderStyleArray;
+ (id)PDFKitFieldTypeArray;
+ (id)PDFKitHighlightingModeArray;
+ (id)PDFKitSubtypeArray;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

// NSArray (CAAnimatableValue)

- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;

// NSArray (CAMLWriter)

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit

// NSArray (SCNAdditions)

+ (id)SCN_arrayWithSimdMatrix4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SCN_simdMatrix4Value;

// NSArray (SCNDeepCopy)

- (id)SCNMutableDeepCopy;

// Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy

// NSArray (WebPluginExtensions)

- (id)_web_lowercaseStrings;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities

- (id)cutFirstObject;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation

// NSArray (ContactsFoundation)

+ (id)_cn_arrayWithObject:(id)arg1 count:(unsigned long long)arg2;

- (BOOL)_cn_all:(id)arg1;
- (BOOL)_cn_any:(id)arg1;
- (id)_cn_arrayByRotatingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 by:(long long)arg2;
- (id)_cn_distinctObjects;
- (void)_cn_each:(id)arg1;
- (void)_cn_each:(id)arg1 until:(id)arg2;
- (void)_cn_each:(id)arg1 untilCancelled:(id)arg2;
- (void)_cn_each_reverse:(id)arg1;
- (id)_cn_filter:(id)arg1;
- (id)_cn_firstObjectPassingTest:(id)arg1;
- (id)_cn_flatMap:(id)arg1;
- (id)_cn_flatten;
- (id)_cn_groupBy:(id)arg1;
- (id)_cn_indexBy:(id)arg1;
- (unsigned long long)_cn_indexOfFirstObjectPassingTest:(id)arg1;
- (id)_cn_indicesForObjects:(id)arg1;
- (BOOL)_cn_isIdenticalToArray:(id)arg1;
- (BOOL)_cn_isNonEmpty;
- (id)_cn_join:(id)arg1;
- (id)_cn_joinWithBlock:(id)arg1;
- (id)_cn_map:(id)arg1;
- (BOOL)_cn_none:(id)arg1;
- (id)_cn_partition:(id)arg1;
- (id)_cn_reduce:(id)arg1;
- (id)_cn_reduce:(id)arg1 initialValue:(id)arg2;
- (id)_cn_reversed;
- (id)_cn_safeSortedArrayUsingComparator:(id)arg1;
- (id)_cn_skip:(unsigned long long)arg1;
- (id)_cn_skipLast:(unsigned long long)arg1;
- (id)_cn_sortedArrayUsingAuxiliarySortOrder:(id)arg1 transform:(id)arg2;
- (id)_cn_tail;
- (id)_cn_take:(unsigned long long)arg1;
- (id)_cn_zip:(id)arg1;
- (void)_cn_zip:(id)arg1 withBlock:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices

// NSArray (GEOMapItemPhoto)

- (id)_geo_firstPhotoOfAtLeastSize:(struct CGSize { double x1; double x2; })arg1;

// NSArray (GEOPlaceDataExtras)

- (id)_geo_bestLocalizedString;
- (id)_geo_bestLocalizedStringLocaleValue;
- (id)_geo_bestLocalizedStringValue;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation

// NSArray (MNExtras)

- (id)_navigation_firstObjectPassingTest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation

// NSArray (UICollectionAdditions_Performance)

- (id)_initWithObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

// NSArray (UIRemovalAdditions)

- (id)ui_arrayByRemovingLastObjectEqualTo:(id)arg1;

@end
