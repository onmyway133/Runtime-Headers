/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying> {
    int  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int interactedItemIndex : 1; 
        unsigned int listType : 1; 
    }  _has;
    int  _interactedItemIndex;
    int  _listType;
    NSMutableArray * _proactiveItems;
}

@property (nonatomic, readwrite) int duration;
@property (nonatomic, readwrite) BOOL hasDuration;
@property (nonatomic, readwrite) BOOL hasInteractedItemIndex;
@property (nonatomic, readwrite) BOOL hasListType;
@property (nonatomic, readwrite) int interactedItemIndex;
@property (nonatomic, readwrite) int listType;
@property (nonatomic, readwrite, retain) NSMutableArray *proactiveItems;

+ (Class)proactiveItemType;

- (void).cxx_destruct;
- (int)StringAsListType:(id)arg1;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duration;
- (BOOL)hasDuration;
- (BOOL)hasInteractedItemIndex;
- (BOOL)hasListType;
- (unsigned long long)hash;
- (int)interactedItemIndex;
- (BOOL)isEqual:(id)arg1;
- (int)listType;
- (id)listTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (id)proactiveItems;
- (unsigned long long)proactiveItemsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasInteractedItemIndex:(BOOL)arg1;
- (void)setHasListType:(BOOL)arg1;
- (void)setInteractedItemIndex:(int)arg1;
- (void)setListType:(int)arg1;
- (void)setProactiveItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end