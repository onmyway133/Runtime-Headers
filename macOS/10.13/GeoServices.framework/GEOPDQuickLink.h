/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDQuickLink : PBCodable <NSCopying> {
    NSMutableArray * _quickLinkItems;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSMutableArray *quickLinkItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)quickLinkItemType;

- (void).cxx_destruct;
- (void)addQuickLinkItem:(id)arg1;
- (void)clearQuickLinkItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)quickLinkItemAtIndex:(unsigned long long)arg1;
- (id)quickLinkItems;
- (unsigned long long)quickLinkItemsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setQuickLinkItems:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
