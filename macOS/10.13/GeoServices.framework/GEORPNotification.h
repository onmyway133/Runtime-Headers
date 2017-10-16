/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORPNotification : PBCodable <NSCopying> {
    NSString * _localizedText;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) BOOL hasLocalizedText;
@property (nonatomic, readonly) BOOL hasLocalizedTitle;
@property (nonatomic, readwrite, retain) NSString *localizedText;
@property (nonatomic, readwrite, retain) NSString *localizedTitle;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLocalizedText;
- (BOOL)hasLocalizedTitle;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedText;
- (id)localizedTitle;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setLocalizedText:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)writeTo:(id)arg1;

@end
