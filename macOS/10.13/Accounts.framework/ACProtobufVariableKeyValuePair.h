/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
 */

@interface ACProtobufVariableKeyValuePair : PBCodable <NSCopying> {
    NSString * _key;
    ACProtobufVariableValue * _value;
}

@property (nonatomic, readwrite, retain) NSString *key;
@property (nonatomic, readwrite, retain) ACProtobufVariableValue *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

// ACProtobufVariableKeyValuePair (Helpers)

- (id)initWithObjectValue:(id)arg1 forKey:(id)arg2;

@end
