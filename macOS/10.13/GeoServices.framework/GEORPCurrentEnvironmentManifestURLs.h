/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {
    NSString * _environmentDisplayName;
    NSString * _environmentReleaseName;
    NSMutableArray * _urls;
}

@property (nonatomic, readwrite, retain) NSString *environmentDisplayName;
@property (nonatomic, readwrite, retain) NSString *environmentReleaseName;
@property (nonatomic, readonly) BOOL hasEnvironmentDisplayName;
@property (nonatomic, readonly) BOOL hasEnvironmentReleaseName;
@property (nonatomic, readwrite, retain) NSMutableArray *urls;

+ (Class)urlType;

- (void).cxx_destruct;
- (void)addUrl:(id)arg1;
- (void)clearUrls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environmentDisplayName;
- (id)environmentReleaseName;
- (BOOL)hasEnvironmentDisplayName;
- (BOOL)hasEnvironmentReleaseName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEnvironmentDisplayName:(id)arg1;
- (void)setEnvironmentReleaseName:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urlAtIndex:(unsigned long long)arg1;
- (id)urls;
- (unsigned long long)urlsCount;
- (void)writeTo:(id)arg1;

@end
