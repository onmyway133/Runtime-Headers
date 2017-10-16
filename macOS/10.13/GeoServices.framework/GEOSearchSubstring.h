/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOSearchSubstring : PBCodable <NSCopying> {
    int  _beginIndex;
    int  _endIndex;
    NSMutableArray * _spanDatas;
    int  _stringType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) int beginIndex;
@property (nonatomic, readwrite) int endIndex;
@property (nonatomic, readwrite, retain) NSMutableArray *spanDatas;
@property (nonatomic, readwrite) int stringType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)spanDataType;

- (void).cxx_destruct;
- (int)StringAsStringType:(id)arg1;
- (void)addSpanData:(id)arg1;
- (int)beginIndex;
- (void)clearSpanDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)endIndex;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBeginIndex:(int)arg1;
- (void)setEndIndex:(int)arg1;
- (void)setSpanDatas:(id)arg1;
- (void)setStringType:(int)arg1;
- (id)spanDataAtIndex:(unsigned long long)arg1;
- (id)spanDatas;
- (unsigned long long)spanDatasCount;
- (int)stringType;
- (id)stringTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
