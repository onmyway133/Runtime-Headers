/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDBinderInfo : NSObject <NSCoding> {
    BOOL  _NLPToken;
    NSString * _name;
    long long  _score;
    BOOL  _topLevel;
    id  _value;
    int  _valueType;
}

@property (atomic, readwrite) BOOL topLevel;

- (BOOL)NLPToken;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)isDummy;
- (id)name;
- (long long)score;
- (void)setNLPToken:(BOOL)arg1;
- (void)setScore:(long long)arg1;
- (void)setTopLevel:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (void)setValueType:(int)arg1;
- (BOOL)topLevel;
- (id)value;
- (int)valueType;

// DDBinderInfo (XMLOutput)

- (id)monxmlAttributes;

@end