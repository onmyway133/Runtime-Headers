/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOShortTrafficSummary : PBCodable <NSCopying> {
    GEOFormattedString * _detail;
    NSMutableArray * _titles;
}

@property (nonatomic, readwrite, retain) GEOFormattedString *detail;
@property (nonatomic, readonly) BOOL hasDetail;
@property (nonatomic, readwrite, retain) NSMutableArray *titles;

+ (Class)titleType;

- (void).cxx_destruct;
- (void)addTitle:(id)arg1;
- (void)clearTitles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (BOOL)hasDetail;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)titleAtIndex:(unsigned long long)arg1;
- (id)titles;
- (unsigned long long)titlesCount;
- (void)writeTo:(id)arg1;

@end
