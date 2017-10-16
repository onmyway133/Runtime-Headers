/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDSearchStructureIntentRequestType : PBCodable <NSCopying> {
    struct { 
        unsigned int intentType : 1; 
        unsigned int structureType : 1; 
    }  _has;
    int  _intentType;
    int  _structureType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) BOOL hasIntentType;
@property (nonatomic, readwrite) BOOL hasStructureType;
@property (nonatomic, readwrite) int intentType;
@property (nonatomic, readwrite) int structureType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsIntentType:(id)arg1;
- (int)StringAsStructureType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIntentType;
- (BOOL)hasStructureType;
- (unsigned long long)hash;
- (int)intentType;
- (id)intentTypeAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIntentType:(BOOL)arg1;
- (void)setHasStructureType:(BOOL)arg1;
- (void)setIntentType:(int)arg1;
- (void)setStructureType:(int)arg1;
- (int)structureType;
- (id)structureTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end