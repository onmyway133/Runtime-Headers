/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMultiTabsState : PBCodable <NSCopying> {
    unsigned int  _currentTabIndex;
    struct { 
        unsigned int currentTabIndex : 1; 
        unsigned int numberOfTabsOpen : 1; 
    }  _has;
    unsigned int  _numberOfTabsOpen;
}

@property (nonatomic, readwrite) unsigned int currentTabIndex;
@property (nonatomic, readwrite) BOOL hasCurrentTabIndex;
@property (nonatomic, readwrite) BOOL hasNumberOfTabsOpen;
@property (nonatomic, readwrite) unsigned int numberOfTabsOpen;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentTabIndex;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCurrentTabIndex;
- (BOOL)hasNumberOfTabsOpen;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfTabsOpen;
- (BOOL)readFrom:(id)arg1;
- (void)setCurrentTabIndex:(unsigned int)arg1;
- (void)setHasCurrentTabIndex:(BOOL)arg1;
- (void)setHasNumberOfTabsOpen:(BOOL)arg1;
- (void)setNumberOfTabsOpen:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end