/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLocalizedName : PBCodable <NSCopying> {
    struct { 
        unsigned int nameRank : 1; 
        unsigned int isDefault : 1; 
    }  _has;
    BOOL  _isDefault;
    NSString * _languageCode;
    NSString * _name;
    unsigned int  _nameRank;
    NSString * _nameType;
    NSString * _phoneticName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) BOOL hasIsDefault;
@property (nonatomic, readonly) BOOL hasLanguageCode;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readwrite) BOOL hasNameRank;
@property (nonatomic, readonly) BOOL hasNameType;
@property (nonatomic, readonly) BOOL hasPhoneticName;
@property (nonatomic, readwrite) BOOL isDefault;
@property (nonatomic, readwrite, retain) NSString *languageCode;
@property (nonatomic, readwrite, retain) NSString *name;
@property (nonatomic, readwrite) unsigned int nameRank;
@property (nonatomic, readwrite, retain) NSString *nameType;
@property (nonatomic, readwrite, retain) NSString *phoneticName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsDefault;
- (BOOL)hasLanguageCode;
- (BOOL)hasName;
- (BOOL)hasNameRank;
- (BOOL)hasNameType;
- (BOOL)hasPhoneticName;
- (unsigned long long)hash;
- (BOOL)isDefault;
- (BOOL)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)nameRank;
- (id)nameType;
- (id)phoneticName;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsDefault:(BOOL)arg1;
- (void)setHasNameRank:(BOOL)arg1;
- (void)setIsDefault:(BOOL)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameRank:(unsigned int)arg1;
- (void)setNameType:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOLocalizedName (PlaceDataExtras)

- (id)initWithPlaceDataLocalizedString:(id)arg1;

@end
