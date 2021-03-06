/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {
    unsigned int  _cartoId;
    struct { 
        unsigned int cartoId : 1; 
        unsigned int transitTypeEnumValue : 1; 
    }  _has;
    unsigned int  _transitTypeEnumValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned int cartoID;
@property (nonatomic, readwrite) unsigned int cartoId;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) BOOL hasCartoId;
@property (nonatomic, readwrite) BOOL hasTransitTypeEnumValue;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;
@property (nonatomic, readonly) long long iconType;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) unsigned int transitTypeEnumValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned int)cartoId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCartoId;
- (BOOL)hasTransitTypeEnumValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCartoId:(unsigned int)arg1;
- (void)setHasCartoId:(BOOL)arg1;
- (void)setHasTransitTypeEnumValue:(BOOL)arg1;
- (void)setTransitTypeEnumValue:(unsigned int)arg1;
- (unsigned int)transitTypeEnumValue;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPBTransitIcon (GEOTransitExtrasInternal)

- (unsigned int)cartoID;
- (unsigned int)defaultTransitType;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;
- (long long)iconType;

@end
