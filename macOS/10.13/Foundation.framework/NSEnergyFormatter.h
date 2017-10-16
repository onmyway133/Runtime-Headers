/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSEnergyFormatter : NSFormatter <NSObservable, NSObserver> {
    void * _formatter;
    BOOL  _isForFoodEnergyUse;
    void * _reserved;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isForFoodEnergyUse, atomic, readwrite) BOOL forFoodEnergyUse;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSNumberFormatter *numberFormatter;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) long long unitStyle;

- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isForFoodEnergyUse;
- (id)numberFormatter;
- (void)setForFoodEnergyUse:(BOOL)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setUnitStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromJoules:(double)arg1;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)targetUnitFromJoules:(double)arg1;
- (id)unitStringFromJoules:(double)arg1 usedUnit:(long long*)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)unitStyle;

// NSEnergyFormatter (NSObservationSupport)

- (void)receiveObservedValue:(id)arg1;

@end
