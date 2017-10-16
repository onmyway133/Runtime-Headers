/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOVLabelLanguage : PBCodable <NSCopying> {
    unsigned int  _endOffset;
    NSString * _languageLocale;
    unsigned int  _startOffset;
}

@property (nonatomic, readwrite) unsigned int endOffset;
@property (nonatomic, readwrite, retain) NSString *languageLocale;
@property (nonatomic, readwrite) unsigned int startOffset;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endOffset;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)languageLocale;
- (BOOL)readFrom:(id)arg1;
- (void)setEndOffset:(unsigned int)arg1;
- (void)setLanguageLocale:(id)arg1;
- (void)setStartOffset:(unsigned int)arg1;
- (unsigned int)startOffset;
- (void)writeTo:(id)arg1;

@end