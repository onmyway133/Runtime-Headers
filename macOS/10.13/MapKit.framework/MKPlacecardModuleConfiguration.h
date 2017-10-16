/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlacecardModuleConfiguration : PBCodable <NSCopying> {
    NSMutableArray * _entries;
    struct { 
        unsigned int version : 1; 
    }  _has;
    unsigned int  _version;
}

@property (nonatomic, readwrite, retain) NSMutableArray *entries;
@property (nonatomic, readwrite) BOOL hasVersion;
@property (nonatomic, readwrite) unsigned int version;

+ (Class)entriesType;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (BOOL)hasVersion;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setHasVersion:(BOOL)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
