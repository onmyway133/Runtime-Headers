/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventGenericAppError : PBCodable <NSCopying> {
    long long  _appErrorCode;
    NSString * _appErrorDomain;
    struct { 
        unsigned int appErrorCode : 1; 
    }  _has;
}

@property (nonatomic, readwrite) long long appErrorCode;
@property (nonatomic, readwrite, retain) NSString *appErrorDomain;
@property (nonatomic, readwrite) BOOL hasAppErrorCode;
@property (nonatomic, readonly) BOOL hasAppErrorDomain;

- (void).cxx_destruct;
- (long long)appErrorCode;
- (id)appErrorDomain;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAppErrorCode;
- (BOOL)hasAppErrorDomain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAppErrorCode:(long long)arg1;
- (void)setAppErrorDomain:(id)arg1;
- (void)setHasAppErrorCode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
