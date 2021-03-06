/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDVenueItemList : PBCodable <NSCopying> {
    NSMutableArray * _items;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, readwrite, retain) NSMutableArray *items;
@property (nonatomic, readwrite, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)itemType;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTitle;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
