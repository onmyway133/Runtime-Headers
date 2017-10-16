/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface AUAudioUnitPreset : NSObject <NSSecureCoding> {
    NSString * _name;
    long long  _number;
}

@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readwrite) long long number;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (long long)number;
- (void)setName:(id)arg1;
- (void)setNumber:(long long)arg1;

@end
