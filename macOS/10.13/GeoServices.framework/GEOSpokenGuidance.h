/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOSpokenGuidance : PBCodable <NSCopying> {
    int  _alignment;
    NSMutableArray * _announcements;
    unsigned int  _endDesiredTime;
    unsigned int  _exclusiveSetIdentifier;
    struct { 
        unsigned int alignment : 1; 
        unsigned int endDesiredTime : 1; 
        unsigned int exclusiveSetIdentifier : 1; 
        unsigned int numChainedVariants : 1; 
        unsigned int priority : 1; 
        unsigned int repetitionInterval : 1; 
        unsigned int startDesiredTime : 1; 
        unsigned int tapBeforeAnnouncement : 1; 
    }  _has;
    unsigned int  _numChainedVariants;
    unsigned int  _priority;
    unsigned int  _repetitionInterval;
    unsigned int  _startDesiredTime;
    BOOL  _tapBeforeAnnouncement;
    NSMutableArray * _timeGaps;
}

@property (nonatomic, readwrite) int alignment;
@property (nonatomic, readwrite, retain) NSMutableArray *announcements;
@property (nonatomic, readwrite) unsigned int endDesiredTime;
@property (nonatomic, readwrite) unsigned int exclusiveSetIdentifier;
@property (nonatomic, readwrite) BOOL hasAlignment;
@property (nonatomic, readwrite) BOOL hasEndDesiredTime;
@property (nonatomic, readwrite) BOOL hasExclusiveSetIdentifier;
@property (nonatomic, readwrite) BOOL hasNumChainedVariants;
@property (nonatomic, readwrite) BOOL hasPriority;
@property (nonatomic, readwrite) BOOL hasRepetitionInterval;
@property (nonatomic, readwrite) BOOL hasStartDesiredTime;
@property (nonatomic, readwrite) BOOL hasTapBeforeAnnouncement;
@property (nonatomic, readwrite) unsigned int numChainedVariants;
@property (nonatomic, readwrite) unsigned int priority;
@property (nonatomic, readwrite) unsigned int repetitionInterval;
@property (nonatomic, readwrite) unsigned int startDesiredTime;
@property (nonatomic, readwrite) BOOL tapBeforeAnnouncement;
@property (nonatomic, readwrite, retain) NSMutableArray *timeGaps;

+ (Class)announcementType;
+ (Class)timeGapType;

- (void).cxx_destruct;
- (int)StringAsAlignment:(id)arg1;
- (void)addAnnouncement:(id)arg1;
- (void)addTimeGap:(id)arg1;
- (int)alignment;
- (id)alignmentAsString:(int)arg1;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (id)announcements;
- (unsigned long long)announcementsCount;
- (void)clearAnnouncements;
- (void)clearTimeGaps;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endDesiredTime;
- (unsigned int)exclusiveSetIdentifier;
- (BOOL)hasAlignment;
- (BOOL)hasEndDesiredTime;
- (BOOL)hasExclusiveSetIdentifier;
- (BOOL)hasNumChainedVariants;
- (BOOL)hasPriority;
- (BOOL)hasRepetitionInterval;
- (BOOL)hasStartDesiredTime;
- (BOOL)hasTapBeforeAnnouncement;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numChainedVariants;
- (unsigned int)priority;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)repetitionInterval;
- (void)setAlignment:(int)arg1;
- (void)setAnnouncements:(id)arg1;
- (void)setEndDesiredTime:(unsigned int)arg1;
- (void)setExclusiveSetIdentifier:(unsigned int)arg1;
- (void)setHasAlignment:(BOOL)arg1;
- (void)setHasEndDesiredTime:(BOOL)arg1;
- (void)setHasExclusiveSetIdentifier:(BOOL)arg1;
- (void)setHasNumChainedVariants:(BOOL)arg1;
- (void)setHasPriority:(BOOL)arg1;
- (void)setHasRepetitionInterval:(BOOL)arg1;
- (void)setHasStartDesiredTime:(BOOL)arg1;
- (void)setHasTapBeforeAnnouncement:(BOOL)arg1;
- (void)setNumChainedVariants:(unsigned int)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setRepetitionInterval:(unsigned int)arg1;
- (void)setStartDesiredTime:(unsigned int)arg1;
- (void)setTapBeforeAnnouncement:(BOOL)arg1;
- (void)setTimeGaps:(id)arg1;
- (unsigned int)startDesiredTime;
- (BOOL)tapBeforeAnnouncement;
- (id)timeGapAtIndex:(unsigned long long)arg1;
- (id)timeGaps;
- (unsigned long long)timeGapsCount;
- (void)writeTo:(id)arg1;

@end
