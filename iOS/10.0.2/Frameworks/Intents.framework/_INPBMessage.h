/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMessage : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributes;
    NSString * _content;
    _INPBDateTime * _dateSent;
    NSString * _groupName;
    NSString * _identifier;
    NSMutableArray * _recipients;
    _INPBContact * _sender;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) _INPBDateTime *dateSent;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasDateSent;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasSender;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *recipients;
@property (nonatomic, retain) _INPBContact *sender;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)recipientType;

- (void).cxx_destruct;
- (void)addAttribute:(int)arg1;
- (void)addRecipient:(id)arg1;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (int*)attributes;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)clearRecipients;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSent;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupName;
- (bool)hasContent;
- (bool)hasDateSent;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasSender;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (id)sender;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setContent:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
