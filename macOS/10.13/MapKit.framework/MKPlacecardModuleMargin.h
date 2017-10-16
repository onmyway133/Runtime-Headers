/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlacecardModuleMargin : PBCodable <NSCopying> {
    struct { 
        unsigned int margin : 1; 
        unsigned int topModuleType : 1; 
    }  _has;
    unsigned int  _margin;
    int  _topModuleType;
}

@property (nonatomic, readwrite) BOOL hasMargin;
@property (nonatomic, readwrite) BOOL hasTopModuleType;
@property (nonatomic, readwrite) unsigned int margin;
@property (nonatomic, readwrite) int topModuleType;

- (int)StringAsTopModuleType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMargin;
- (BOOL)hasTopModuleType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)margin;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMargin:(BOOL)arg1;
- (void)setHasTopModuleType:(BOOL)arg1;
- (void)setMargin:(unsigned int)arg1;
- (void)setTopModuleType:(int)arg1;
- (int)topModuleType;
- (id)topModuleTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
