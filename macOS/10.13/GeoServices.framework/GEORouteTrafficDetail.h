/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORouteTrafficDetail : PBCodable <NSCopying> {
    struct { 
        unsigned int routeTrafficCondition : 1; 
    }  _has;
    int  _routeTrafficCondition;
    NSString * _spokenRouteName;
    NSString * _unabbreviatedRouteName;
    NSString * _writtenRouteName;
}

@property (nonatomic, readwrite) BOOL hasRouteTrafficCondition;
@property (nonatomic, readonly) BOOL hasSpokenRouteName;
@property (nonatomic, readonly) BOOL hasUnabbreviatedRouteName;
@property (nonatomic, readonly) BOOL hasWrittenRouteName;
@property (nonatomic, readwrite) int routeTrafficCondition;
@property (nonatomic, readwrite, retain) NSString *spokenRouteName;
@property (nonatomic, readwrite, retain) NSString *unabbreviatedRouteName;
@property (nonatomic, readwrite, retain) NSString *writtenRouteName;

- (void).cxx_destruct;
- (int)StringAsRouteTrafficCondition:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRouteTrafficCondition;
- (BOOL)hasSpokenRouteName;
- (BOOL)hasUnabbreviatedRouteName;
- (BOOL)hasWrittenRouteName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)routeTrafficCondition;
- (id)routeTrafficConditionAsString:(int)arg1;
- (void)setHasRouteTrafficCondition:(BOOL)arg1;
- (void)setRouteTrafficCondition:(int)arg1;
- (void)setSpokenRouteName:(id)arg1;
- (void)setUnabbreviatedRouteName:(id)arg1;
- (void)setWrittenRouteName:(id)arg1;
- (id)spokenRouteName;
- (id)unabbreviatedRouteName;
- (void)writeTo:(id)arg1;
- (id)writtenRouteName;

@end
