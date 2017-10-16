/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKPShieldPack : PBCodable <NSCopying> {
    NSMutableArray * _atlas;
    NSMutableArray * _shields;
}

@property (nonatomic, readwrite, retain) NSMutableArray *atlas;
@property (nonatomic, readwrite, retain) NSMutableArray *shields;

- (void)addAtlas:(id)arg1;
- (void)addShields:(id)arg1;
- (id)atlas;
- (id)atlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)atlasCount;
- (void)clearAtlas;
- (void)clearShields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAtlas:(id)arg1;
- (void)setShields:(id)arg1;
- (id)shields;
- (id)shieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shieldsCount;
- (void)writeTo:(id)arg1;

@end
