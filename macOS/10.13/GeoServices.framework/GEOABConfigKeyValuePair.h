/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOABConfigKeyValuePair : PBCodable <NSCopying> {
    NSString * _abConfigKey;
    GEOABConfigValue * _abConfigValue;
    int  _abConfigValueType;
    struct { 
        unsigned int abConfigValueType : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSString *abConfigKey;
@property (nonatomic, readwrite, retain) GEOABConfigValue *abConfigValue;
@property (nonatomic, readwrite) int abConfigValueType;
@property (nonatomic, readonly) BOOL hasAbConfigKey;
@property (nonatomic, readonly) BOOL hasAbConfigValue;
@property (nonatomic, readwrite) BOOL hasAbConfigValueType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsAbConfigValueType:(id)arg1;
- (id)abConfigKey;
- (id)abConfigValue;
- (int)abConfigValueType;
- (id)abConfigValueTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAbConfigKey;
- (BOOL)hasAbConfigValue;
- (BOOL)hasAbConfigValueType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAbConfigKey:(id)arg1;
- (void)setAbConfigValue:(id)arg1;
- (void)setAbConfigValueType:(int)arg1;
- (void)setHasAbConfigValueType:(BOOL)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
