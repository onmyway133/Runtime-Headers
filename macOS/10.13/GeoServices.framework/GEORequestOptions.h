/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying> {
    struct { 
        unsigned int optionUsed : 1; 
    }  _has;
    int  _optionUsed;
    NSMutableArray * _requestOptions;
}

@property (nonatomic, readwrite) BOOL hasOptionUsed;
@property (nonatomic, readwrite) int optionUsed;
@property (nonatomic, readwrite, retain) NSMutableArray *requestOptions;
@property (nonatomic, readonly) <GEOSurchargeType> *selectedSurchargeType;
@property (nonatomic, readonly) unsigned long long selectedSurchargeTypeIndex;
@property (nonatomic, readonly) NSArray *surchargeTypes;

+ (Class)requestOptionType;

- (void).cxx_destruct;
- (void)addRequestOption:(id)arg1;
- (void)clearRequestOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasOptionUsed;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)optionUsed;
- (BOOL)readFrom:(id)arg1;
- (id)requestOptionAtIndex:(unsigned long long)arg1;
- (id)requestOptions;
- (unsigned long long)requestOptionsCount;
- (void)setHasOptionUsed:(BOOL)arg1;
- (void)setOptionUsed:(int)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)writeTo:(id)arg1;

// GEORequestOptions (GEOTransitExtrasInternal)

- (id)selectedSurchargeType;
- (unsigned long long)selectedSurchargeTypeIndex;
- (id)surchargeTypes;

@end
