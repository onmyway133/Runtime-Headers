/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapsDestinationsWidget : PBCodable <NSCopying> {
    BOOL  _everExpanded;
    struct { 
        unsigned int tappedItemIndex : 1; 
        unsigned int everExpanded : 1; 
        unsigned int initiallyExpanded : 1; 
    }  _has;
    BOOL  _initiallyExpanded;
    NSMutableArray * _proactiveItems;
    int  _tappedItemIndex;
}

@property (nonatomic, readwrite) BOOL everExpanded;
@property (nonatomic, readwrite) BOOL hasEverExpanded;
@property (nonatomic, readwrite) BOOL hasInitiallyExpanded;
@property (nonatomic, readwrite) BOOL hasTappedItemIndex;
@property (nonatomic, readwrite) BOOL initiallyExpanded;
@property (nonatomic, readwrite, retain) NSMutableArray *proactiveItems;
@property (nonatomic, readwrite) int tappedItemIndex;

+ (Class)proactiveItemType;

- (void).cxx_destruct;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)everExpanded;
- (BOOL)hasEverExpanded;
- (BOOL)hasInitiallyExpanded;
- (BOOL)hasTappedItemIndex;
- (unsigned long long)hash;
- (BOOL)initiallyExpanded;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (id)proactiveItems;
- (unsigned long long)proactiveItemsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setEverExpanded:(BOOL)arg1;
- (void)setHasEverExpanded:(BOOL)arg1;
- (void)setHasInitiallyExpanded:(BOOL)arg1;
- (void)setHasTappedItemIndex:(BOOL)arg1;
- (void)setInitiallyExpanded:(BOOL)arg1;
- (void)setProactiveItems:(id)arg1;
- (void)setTappedItemIndex:(int)arg1;
- (int)tappedItemIndex;
- (void)writeTo:(id)arg1;

@end
