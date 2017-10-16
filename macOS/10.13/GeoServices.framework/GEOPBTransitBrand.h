/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPBTransitBrand : PBCodable <NSCopying> {
    unsigned int  _brandIndex;
    struct { 
        unsigned int muid : 1; 
        unsigned int brandIndex : 1; 
    }  _has;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) unsigned int brandIndex;
@property (nonatomic, readwrite) BOOL hasBrandIndex;
@property (nonatomic, readwrite) BOOL hasMuid;
@property (nonatomic, readonly) BOOL hasNameDisplayString;
@property (nonatomic, readonly) BOOL hasStyleAttributes;
@property (nonatomic, readwrite) unsigned long long muid;
@property (nonatomic, readwrite, retain) NSString *nameDisplayString;
@property (nonatomic, readwrite, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned int)brandIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBrandIndex;
- (BOOL)hasMuid;
- (BOOL)hasNameDisplayString;
- (BOOL)hasStyleAttributes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (BOOL)readFrom:(id)arg1;
- (void)setBrandIndex:(unsigned int)arg1;
- (void)setHasBrandIndex:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (id)styleAttributes;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
