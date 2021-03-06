/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOAttributeKeyValue : PBCodable <NSCopying> {
    NSString * _attributeKey;
    NSString * _attributeValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSString *attributeKey;
@property (nonatomic, readwrite, retain) NSString *attributeValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)attributeKey;
- (id)attributeValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributeKey:(id)arg1;
- (void)setAttributeValue:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
