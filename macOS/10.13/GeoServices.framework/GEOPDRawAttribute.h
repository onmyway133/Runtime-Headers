/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDRawAttribute : PBCodable <NSCopying> {
    NSString * _key;
    PBUnknownFields * _unknownFields;
    NSString * _value;
}

@property (nonatomic, readonly) BOOL hasKey;
@property (nonatomic, readonly) BOOL hasValue;
@property (nonatomic, readwrite, retain) NSString *key;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) NSString *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasKey;
- (BOOL)hasValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)unknownFields;
- (id)value;
- (void)writeTo:(id)arg1;

@end
