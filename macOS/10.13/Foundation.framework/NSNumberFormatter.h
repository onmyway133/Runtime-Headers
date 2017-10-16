/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSNumberFormatter : NSFormatter <NSObservable, NSObserver> {
    NSMutableDictionary * _attributes;
    unsigned long long  _behavior;
    long long  _cacheGeneration;
    unsigned long long  _counter;
    struct __CFNumberFormatter { } * _formatter;
    NSRecursiveLock * _lock;
    void * _reserved;
    unsigned long long  _stateBitMask;
}

@property (atomic, readwrite) BOOL allowsFloats;
@property (atomic, readwrite) BOOL alwaysShowsDecimalSeparator;
@property (atomic, readwrite, copy) NSAttributedString *attributedStringForNil;
@property (atomic, readwrite, copy) NSAttributedString *attributedStringForNotANumber;
@property (atomic, readwrite, copy) NSAttributedString *attributedStringForZero;
@property (atomic, readwrite, copy) NSString *currencyCode;
@property (atomic, readwrite, copy) NSString *currencyDecimalSeparator;
@property (atomic, readwrite, copy) NSString *currencyGroupingSeparator;
@property (atomic, readwrite, copy) NSString *currencySymbol;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite, copy) NSString *decimalSeparator;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, copy) NSString *exponentSymbol;
@property (atomic, readwrite, copy) NSString *format;
@property (atomic, readwrite) unsigned long long formatWidth;
@property (atomic, readwrite) unsigned long long formatterBehavior;
@property (atomic, readwrite) long long formattingContext;
@property (atomic, readwrite) BOOL generatesDecimalNumbers;
@property (atomic, readwrite, copy) NSString *groupingSeparator;
@property (atomic, readwrite) unsigned long long groupingSize;
@property (atomic, readwrite) BOOL hasThousandSeparators;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *internationalCurrencySymbol;
@property (getter=isLenient, atomic, readwrite) BOOL lenient;
@property (atomic, readwrite, copy) NSLocale *locale;
@property (atomic, readwrite) BOOL localizesFormat;
@property (atomic, readwrite, copy) NSNumber *maximum;
@property (atomic, readwrite) unsigned long long maximumFractionDigits;
@property (atomic, readwrite) unsigned long long maximumIntegerDigits;
@property (atomic, readwrite) unsigned long long maximumSignificantDigits;
@property (atomic, readwrite, copy) NSNumber *minimum;
@property (atomic, readwrite) unsigned long long minimumFractionDigits;
@property (atomic, readwrite) unsigned long long minimumIntegerDigits;
@property (atomic, readwrite) unsigned long long minimumSignificantDigits;
@property (atomic, readwrite, copy) NSString *minusSign;
@property (atomic, readwrite, copy) NSNumber *multiplier;
@property (atomic, readwrite, copy) NSString *negativeFormat;
@property (atomic, readwrite, copy) NSString *negativeInfinitySymbol;
@property (atomic, readwrite, copy) NSString *negativePrefix;
@property (atomic, readwrite, copy) NSString *negativeSuffix;
@property (atomic, readwrite, copy) NSString *nilSymbol;
@property (atomic, readwrite, copy) NSString *notANumberSymbol;
@property (atomic, readwrite) unsigned long long numberStyle;
@property (atomic, readwrite, copy) NSString *paddingCharacter;
@property (atomic, readwrite) unsigned long long paddingPosition;
@property (getter=isPartialStringValidationEnabled, atomic, readwrite) BOOL partialStringValidationEnabled;
@property (atomic, readwrite, copy) NSString *perMillSymbol;
@property (atomic, readwrite, copy) NSString *percentSymbol;
@property (atomic, readwrite, copy) NSString *plusSign;
@property (atomic, readwrite, copy) NSString *positiveFormat;
@property (atomic, readwrite, copy) NSString *positiveInfinitySymbol;
@property (atomic, readwrite, copy) NSString *positivePrefix;
@property (atomic, readwrite, copy) NSString *positiveSuffix;
@property (atomic, readwrite, copy) NSDecimalNumberHandler *roundingBehavior;
@property (atomic, readwrite, copy) NSNumber *roundingIncrement;
@property (atomic, readwrite) unsigned long long roundingMode;
@property (atomic, readwrite) unsigned long long secondaryGroupingSize;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, copy) NSDictionary *textAttributesForNegativeInfinity;
@property (atomic, readwrite, copy) NSDictionary *textAttributesForNegativeValues;
@property (atomic, readwrite, copy) NSDictionary *textAttributesForNil;
@property (atomic, readwrite, copy) NSDictionary *textAttributesForNotANumber;
@property (atomic, readwrite, copy) NSDictionary *textAttributesForPositiveInfinity;
@property (atomic, readwrite, copy) NSDictionary *textAttributesForPositiveValues;
@property (atomic, readwrite, copy) NSDictionary *textAttributesForZero;
@property (atomic, readwrite, copy) NSString *thousandSeparator;
@property (atomic, readwrite) BOOL usesGroupingSeparator;
@property (atomic, readwrite) BOOL usesSignificantDigits;
@property (atomic, readwrite, copy) NSString *zeroSymbol;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (unsigned long long)defaultFormatterBehavior;
+ (void)initialize;
+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;

- (void*)__Keynote_NOOP;
- (long long)_cacheGenerationCount;
- (void)_clearFormatter;
- (BOOL)_hasSetCurrencyCode;
- (BOOL)_hasSetCurrencySymbol;
- (BOOL)_hasSetInternationalCurrencySymbol;
- (void)_invalidateCache;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (void)_regenerateFormatter;
- (void)_reset;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_tracksCacheGenerationCount;
- (BOOL)_usesCharacterDirection;
- (BOOL)allowsFloats;
- (BOOL)alwaysShowsDecimalSeparator;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)currencyDecimalSeparator;
- (id)currencyGroupingSeparator;
- (id)currencySymbol;
- (void)dealloc;
- (id)decimalSeparator;
- (void)encodeWithCoder:(id)arg1;
- (id)exponentSymbol;
- (unsigned long long)formatWidth;
- (unsigned long long)formatterBehavior;
- (long long)formattingContext;
- (BOOL)generatesDecimalNumbers;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)groupingSeparator;
- (unsigned long long)groupingSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)internationalCurrencySymbol;
- (BOOL)isLenient;
- (BOOL)isPartialStringValidationEnabled;
- (id)locale;
- (id)maximum;
- (unsigned long long)maximumFractionDigits;
- (unsigned long long)maximumIntegerDigits;
- (unsigned long long)maximumSignificantDigits;
- (id)minimum;
- (unsigned long long)minimumFractionDigits;
- (unsigned long long)minimumIntegerDigits;
- (unsigned long long)minimumSignificantDigits;
- (id)minusSign;
- (id)multiplier;
- (id)negativeFormat;
- (id)negativeInfinitySymbol;
- (id)negativePrefix;
- (id)negativeSuffix;
- (id)nilSymbol;
- (id)notANumberSymbol;
- (id)numberFromString:(id)arg1;
- (unsigned long long)numberStyle;
- (id)paddingCharacter;
- (unsigned long long)paddingPosition;
- (id)perMillSymbol;
- (id)percentSymbol;
- (id)plusSign;
- (id)positiveFormat;
- (id)positiveInfinitySymbol;
- (id)positivePrefix;
- (id)positiveSuffix;
- (id)roundingIncrement;
- (unsigned long long)roundingMode;
- (unsigned long long)secondaryGroupingSize;
- (void)setAllowsFloats:(BOOL)arg1;
- (void)setAlwaysShowsDecimalSeparator:(BOOL)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setCurrencyDecimalSeparator:(id)arg1;
- (void)setCurrencyGroupingSeparator:(id)arg1;
- (void)setCurrencySymbol:(id)arg1;
- (void)setDecimalSeparator:(id)arg1;
- (void)setExponentSymbol:(id)arg1;
- (void)setFormatWidth:(unsigned long long)arg1;
- (void)setFormatterBehavior:(unsigned long long)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setGeneratesDecimalNumbers:(BOOL)arg1;
- (void)setGroupingSeparator:(id)arg1;
- (void)setGroupingSize:(unsigned long long)arg1;
- (void)setInternationalCurrencySymbol:(id)arg1;
- (void)setLenient:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximum:(id)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (void)setMaximumIntegerDigits:(unsigned long long)arg1;
- (void)setMaximumSignificantDigits:(unsigned long long)arg1;
- (void)setMinimum:(id)arg1;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (void)setMinimumIntegerDigits:(unsigned long long)arg1;
- (void)setMinimumSignificantDigits:(unsigned long long)arg1;
- (void)setMinusSign:(id)arg1;
- (void)setMultiplier:(id)arg1;
- (void)setNegativeFormat:(id)arg1;
- (void)setNegativeInfinitySymbol:(id)arg1;
- (void)setNegativePrefix:(id)arg1;
- (void)setNegativeSuffix:(id)arg1;
- (void)setNilSymbol:(id)arg1;
- (void)setNotANumberSymbol:(id)arg1;
- (void)setNumberStyle:(unsigned long long)arg1;
- (void)setPaddingCharacter:(id)arg1;
- (void)setPaddingPosition:(unsigned long long)arg1;
- (void)setPartialStringValidationEnabled:(BOOL)arg1;
- (void)setPerMillSymbol:(id)arg1;
- (void)setPercentSymbol:(id)arg1;
- (void)setPlusSign:(id)arg1;
- (void)setPositiveFormat:(id)arg1;
- (void)setPositiveInfinitySymbol:(id)arg1;
- (void)setPositivePrefix:(id)arg1;
- (void)setPositiveSuffix:(id)arg1;
- (void)setRoundingIncrement:(id)arg1;
- (void)setRoundingMode:(unsigned long long)arg1;
- (void)setSecondaryGroupingSize:(unsigned long long)arg1;
- (void)setTextAttributesForNegativeInfinity:(id)arg1;
- (void)setTextAttributesForNegativeValues:(id)arg1;
- (void)setTextAttributesForNil:(id)arg1;
- (void)setTextAttributesForNotANumber:(id)arg1;
- (void)setTextAttributesForPositiveInfinity:(id)arg1;
- (void)setTextAttributesForPositiveValues:(id)arg1;
- (void)setTextAttributesForZero:(id)arg1;
- (void)setUsesGroupingSeparator:(BOOL)arg1;
- (void)setUsesSignificantDigits:(BOOL)arg1;
- (void)setZeroSymbol:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (id)textAttributesForNegativeInfinity;
- (id)textAttributesForNegativeValues;
- (id)textAttributesForNil;
- (id)textAttributesForNotANumber;
- (id)textAttributesForPositiveInfinity;
- (id)textAttributesForPositiveValues;
- (id)textAttributesForZero;
- (BOOL)usesGroupingSeparator;
- (BOOL)usesSignificantDigits;
- (id)zeroSymbol;

// NSNumberFormatter (NSNumberFormatterCompatibility)

+ (void)_setDefaultRedColor:(id)arg1;

- (void)_addInternalRedToTextAttributesOfNegativeValues;
- (BOOL)_containsColorForTextAttributesOfNegativeValues;
- (void)_removeInternalRedFromTextAttributesOfNegativeValues;
- (id)attributedStringForNil;
- (id)attributedStringForNotANumber;
- (id)attributedStringForZero;
- (id)format;
- (BOOL)hasThousandSeparators;
- (BOOL)localizesFormat;
- (id)roundingBehavior;
- (void)setAttributedStringForNil:(id)arg1;
- (void)setAttributedStringForNotANumber:(id)arg1;
- (void)setAttributedStringForZero:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setHasThousandSeparators:(BOOL)arg1;
- (void)setLocalizationFromDefaults;
- (void)setLocalizesFormat:(BOOL)arg1;
- (void)setRoundingBehavior:(id)arg1;
- (void)setThousandSeparator:(id)arg1;
- (id)thousandSeparator;

// NSNumberFormatter (NSNumberFormatterCompatibility2)

- (void)__oldnf_addInternalRedToTextAttributesOfNegativeValues;
- (void)__oldnf_addThousandSeparators:(id)arg1 withBuffer:(struct { unsigned short *x1; long long x2; unsigned short *x3; long long x4; unsigned short *x5; long long x6; }*)arg2;
- (id)__oldnf_addThousandSeparatorsToFormat:(id)arg1 withBuffer:(struct { unsigned short *x1; long long x2; unsigned short *x3; long long x4; unsigned short *x5; long long x6; }*)arg2;
- (BOOL)__oldnf_containsColorForTextAttributesOfNegativeValues;
- (BOOL)__oldnf_decimalIsNotANumber:(id)arg1;
- (BOOL)__oldnf_getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)__oldnf_numberStringForValueObject:(id)arg1 withBuffer:(struct { unsigned short *x1; long long x2; unsigned short *x3; long long x4; unsigned short *x5; long long x6; }*)arg2 andNegativeFlag:(BOOL)arg3;
- (void)__oldnf_removeInternalRedFromTextAttributesOfNegativeValues;
- (void)__oldnf_setLocalizationFromDefaults;
- (id)__oldnf_stringForObjectValue:(id)arg1;
- (void)__oldnf_surroundValueInString:(unsigned short*)arg1 withLength:(long long*)arg2 andBuffer:(struct { unsigned short *x1; long long x2; unsigned short *x3; long long x4; unsigned short *x5; long long x6; }*)arg3;

// NSNumberFormatter (NSNumberFormatterUnitFormatting)

- (BOOL)checkLocaleChange;
- (BOOL)checkModify;
- (void)clearPropertyBit;
- (void*)getFormatter;
- (void)resetCheckLocaleChange;
- (void)resetCheckModify;
- (void)setPropertyBit;

// NSNumberFormatter (NSObservationSupport)

- (void)receiveObservedValue:(id)arg1;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSNumberFormatter (NSColorPickerAdditions)

+ (id)_hueColorValueFormatter;
+ (id)_percentageColorValueTransformer;

@end
