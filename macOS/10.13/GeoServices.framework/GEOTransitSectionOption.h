/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTransitSectionOption : PBCodable <NSCopying> {
    unsigned int  _defaultSectionIndex;
    struct { 
        unsigned int defaultSectionIndex : 1; 
    }  _has;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _sections;
}

@property (nonatomic, readwrite) unsigned int defaultSectionIndex;
@property (nonatomic, readwrite) BOOL hasDefaultSectionIndex;
@property (nonatomic, readonly) unsigned int*sections;
@property (nonatomic, readonly) unsigned long long sectionsCount;

- (void)addSection:(unsigned int)arg1;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)defaultSectionIndex;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDefaultSectionIndex;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)sectionAtIndex:(unsigned long long)arg1;
- (unsigned int*)sections;
- (unsigned long long)sectionsCount;
- (void)setDefaultSectionIndex:(unsigned int)arg1;
- (void)setHasDefaultSectionIndex:(BOOL)arg1;
- (void)setSections:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
