/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CAStateTransitionElement : NSObject <NSCopying, NSSecureCoding> {
    CAAnimation * _animation;
    BOOL  _enabled;
    NSString * _key;
    CALayer * _target;
}

@property (nonatomic, readwrite, retain) CAAnimation *animation;
@property (nonatomic, readwrite) double beginTime;
@property (nonatomic, readwrite) double duration;
@property (getter=isEnabled, atomic, readwrite) BOOL enabled;
@property (nonatomic, readwrite, copy) NSString *key;
@property (nonatomic, readwrite) CALayer *target;

+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (id)animation;
- (double)beginTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (double)duration;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (id)key;
- (void)setAnimation:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setKey:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
