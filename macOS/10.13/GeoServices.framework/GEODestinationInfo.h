/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEODestinationInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int hasDisplayAddress : 1; 
        unsigned int hasDisplayName : 1; 
        unsigned int hasSpokenAddress : 1; 
        unsigned int hasSpokenName : 1; 
    }  _has;
    BOOL  _hasDisplayAddress;
    BOOL  _hasDisplayName;
    BOOL  _hasSpokenAddress;
    BOOL  _hasSpokenName;
}

@property (nonatomic, readwrite) BOOL hasDisplayAddress;
@property (nonatomic, readwrite) BOOL hasDisplayName;
@property (nonatomic, readwrite) BOOL hasHasDisplayAddress;
@property (nonatomic, readwrite) BOOL hasHasDisplayName;
@property (nonatomic, readwrite) BOOL hasHasSpokenAddress;
@property (nonatomic, readwrite) BOOL hasHasSpokenName;
@property (nonatomic, readwrite) BOOL hasSpokenAddress;
@property (nonatomic, readwrite) BOOL hasSpokenName;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDisplayAddress;
- (BOOL)hasDisplayName;
- (BOOL)hasHasDisplayAddress;
- (BOOL)hasHasDisplayName;
- (BOOL)hasHasSpokenAddress;
- (BOOL)hasHasSpokenName;
- (BOOL)hasSpokenAddress;
- (BOOL)hasSpokenName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasDisplayAddress:(BOOL)arg1;
- (void)setHasDisplayName:(BOOL)arg1;
- (void)setHasHasDisplayAddress:(BOOL)arg1;
- (void)setHasHasDisplayName:(BOOL)arg1;
- (void)setHasHasSpokenAddress:(BOOL)arg1;
- (void)setHasHasSpokenName:(BOOL)arg1;
- (void)setHasSpokenAddress:(BOOL)arg1;
- (void)setHasSpokenName:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
