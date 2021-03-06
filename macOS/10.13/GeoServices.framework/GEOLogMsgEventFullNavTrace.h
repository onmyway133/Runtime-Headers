/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventFullNavTrace : PBCodable <NSCopying> {
    NSData * _navTraceData;
}

@property (nonatomic, readonly) BOOL hasNavTraceData;
@property (nonatomic, readwrite, retain) NSData *navTraceData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNavTraceData;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)navTraceData;
- (BOOL)readFrom:(id)arg1;
- (void)setNavTraceData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
