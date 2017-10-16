/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORegionalResourceRegion : PBCodable <NSCopying> {
    NSMutableArray * _attributions;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _tileRanges;
    unsigned long long  _tileRangesCount;
    unsigned long long  _tileRangesSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSMutableArray *attributions;
@property (nonatomic, readwrite, retain) NSMutableArray *iconChecksums;
@property (nonatomic, readwrite, retain) NSMutableArray *icons;
@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*tileRanges;
@property (nonatomic, readonly) unsigned long long tileRangesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributionType;
+ (Class)iconChecksumType;
+ (Class)iconType;

- (void).cxx_destruct;
- (void)addAttribution:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addTileRange:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearTileRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
- (void)setIconChecksums:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setTileRanges:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })tileRangeAtIndex:(unsigned long long)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)tileRanges;
- (unsigned long long)tileRangesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
