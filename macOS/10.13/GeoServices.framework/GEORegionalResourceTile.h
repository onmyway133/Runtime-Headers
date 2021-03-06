/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORegionalResourceTile : PBCodable <NSCopying> {
    NSMutableArray * _attributions;
    NSMutableArray * _childrens;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    PBUnknownFields * _unknownFields;
    unsigned int  _x;
    unsigned int  _y;
    unsigned int  _z;
}

@property (nonatomic, readwrite, retain) NSMutableArray *attributions;
@property (nonatomic, readwrite, retain) NSMutableArray *childrens;
@property (nonatomic, readwrite, retain) NSMutableArray *iconChecksums;
@property (nonatomic, readwrite, retain) NSMutableArray *icons;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite) unsigned int x;
@property (nonatomic, readwrite) unsigned int y;
@property (nonatomic, readwrite) unsigned int z;

+ (Class)attributionType;
+ (Class)childrenType;
+ (Class)iconChecksumType;
+ (Class)iconType;

- (void).cxx_destruct;
- (void)addAttribution:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (id)childrenAtIndex:(unsigned long long)arg1;
- (id)childrens;
- (unsigned long long)childrensCount;
- (void)clearAttributions;
- (void)clearChildrens;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (id)iconChecksums;
- (unsigned long long)iconChecksumsCount;
- (id)icons;
- (unsigned long long)iconsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setChildrens:(id)arg1;
- (void)setIconChecksums:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setX:(unsigned int)arg1;
- (void)setY:(unsigned int)arg1;
- (void)setZ:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (unsigned int)x;
- (unsigned int)y;
- (unsigned int)z;

// GEORegionalResourceTile (GEOResourceManifestManagerAdditions)

- (BOOL)containsTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end
