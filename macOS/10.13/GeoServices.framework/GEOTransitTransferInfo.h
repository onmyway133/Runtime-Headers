/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTransitTransferInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int transferMuid : 1; 
        unsigned int transferTime : 1; 
    }  _has;
    unsigned long long  _transferMuid;
    unsigned int  _transferTime;
}

@property (nonatomic, readwrite) BOOL hasTransferMuid;
@property (nonatomic, readwrite) BOOL hasTransferTime;
@property (nonatomic, readwrite) unsigned long long transferMuid;
@property (nonatomic, readwrite) unsigned int transferTime;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTransferMuid;
- (BOOL)hasTransferTime;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTransferMuid:(BOOL)arg1;
- (void)setHasTransferTime:(BOOL)arg1;
- (void)setTransferMuid:(unsigned long long)arg1;
- (void)setTransferTime:(unsigned int)arg1;
- (unsigned long long)transferMuid;
- (unsigned int)transferTime;
- (void)writeTo:(id)arg1;

@end
