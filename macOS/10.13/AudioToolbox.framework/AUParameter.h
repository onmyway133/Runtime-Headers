/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface AUParameter : AUParameterNode <NSSecureCoding> {
    BOOL  __localValueStale;
    unsigned long long  _address;
    NSArray * _dependentParameters;
    _AUStaticParameterInfo * _info;
    int  _numRecordingObservers;
    int  _numUIObservers;
    float  _value;
}

@property (nonatomic, readwrite) BOOL _localValueStale;
@property (atomic, readwrite) unsigned long long address;
@property (atomic, readonly, copy) NSArray *dependentParameters;
@property (atomic, readonly) unsigned int flags;
@property (nonatomic, readwrite, retain) _AUStaticParameterInfo *info;
@property (atomic, readonly) float maxValue;
@property (atomic, readonly) float minValue;
@property (nonatomic, readwrite) int numRecordingObservers;
@property (nonatomic, readwrite) int numUIObservers;
@property (atomic, readonly) unsigned int unit;
@property (atomic, readonly, copy) NSString *unitName;
@property (atomic, readwrite) float value;
@property (atomic, readonly, copy) NSArray *valueStrings;

+ (BOOL)supportsSecureCoding;

- (unsigned int)_clumpID;
- (float)_internalValue;
- (BOOL)_localValueStale;
- (void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2;
- (unsigned long long)address;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)dealloc;
- (id)dependentParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
- (float)maxValue;
- (float)minValue;
- (int)numRecordingObservers;
- (int)numUIObservers;
- (void)setAddress:(unsigned long long)arg1;
- (void)setInfo:(id)arg1;
- (void)setNumRecordingObservers:(int)arg1;
- (void)setNumUIObservers:(int)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 extOriginator:(struct AUParameterObserverExtendedToken { unsigned long long x1; })arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;
- (void)setValue:(float)arg1 originator:(void*)arg2;
- (void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3;
- (void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;
- (void)set_clumpID:(unsigned int)arg1;
- (void)set_localValueStale:(BOOL)arg1;
- (id)stringFromValue:(const float*)arg1;
- (unsigned int)unit;
- (id)unitName;
- (float)value;
- (float)valueFromString:(id)arg1;
- (id)valueStrings;

@end