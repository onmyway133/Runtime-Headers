/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMiniCard : PBCodable <NSCopying> {
    NSString * _buttonText;
    GEOFormattedString * _detail;
    struct { 
        unsigned int shouldEmphasize : 1; 
    }  _has;
    BOOL  _shouldEmphasize;
    GEOFormattedString * _title;
}

@property (nonatomic, readwrite, retain) NSString *buttonText;
@property (nonatomic, readwrite, retain) GEOFormattedString *detail;
@property (nonatomic, readonly) BOOL hasButtonText;
@property (nonatomic, readonly) BOOL hasDetail;
@property (nonatomic, readwrite) BOOL hasShouldEmphasize;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, readwrite) BOOL shouldEmphasize;
@property (nonatomic, readwrite, retain) GEOFormattedString *title;

- (void).cxx_destruct;
- (id)buttonText;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (BOOL)hasButtonText;
- (BOOL)hasDetail;
- (BOOL)hasShouldEmphasize;
- (BOOL)hasTitle;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setHasShouldEmphasize:(BOOL)arg1;
- (void)setShouldEmphasize:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)shouldEmphasize;
- (id)title;
- (void)writeTo:(id)arg1;

@end
