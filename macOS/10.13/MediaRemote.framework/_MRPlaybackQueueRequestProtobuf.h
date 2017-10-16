/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {
    double  _artworkHeight;
    double  _artworkWidth;
    NSMutableArray * _contentItemIdentifiers;
    _MRPlaybackQueueContextProtobuf * _context;
    struct { 
        unsigned int artworkHeight : 1; 
        unsigned int artworkWidth : 1; 
        unsigned int length : 1; 
        unsigned int location : 1; 
        unsigned int includeInfo : 1; 
        unsigned int includeLanguageOptions : 1; 
        unsigned int includeLyrics : 1; 
        unsigned int includeMetadata : 1; 
        unsigned int includeSections : 1; 
        unsigned int returnContentItemAssetsInUserCompletion : 1; 
    }  _has;
    BOOL  _includeInfo;
    BOOL  _includeLanguageOptions;
    BOOL  _includeLyrics;
    BOOL  _includeMetadata;
    BOOL  _includeSections;
    int  _length;
    int  _location;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSString * _requestID;
    BOOL  _returnContentItemAssetsInUserCompletion;
}

@property (nonatomic, readwrite) double artworkHeight;
@property (nonatomic, readwrite) double artworkWidth;
@property (nonatomic, readwrite, retain) NSMutableArray *contentItemIdentifiers;
@property (nonatomic, readwrite, retain) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic, readwrite) BOOL hasArtworkHeight;
@property (nonatomic, readwrite) BOOL hasArtworkWidth;
@property (nonatomic, readonly) BOOL hasContext;
@property (nonatomic, readwrite) BOOL hasIncludeInfo;
@property (nonatomic, readwrite) BOOL hasIncludeLanguageOptions;
@property (nonatomic, readwrite) BOOL hasIncludeLyrics;
@property (nonatomic, readwrite) BOOL hasIncludeMetadata;
@property (nonatomic, readwrite) BOOL hasIncludeSections;
@property (nonatomic, readwrite) BOOL hasLength;
@property (nonatomic, readwrite) BOOL hasLocation;
@property (nonatomic, readonly) BOOL hasPlayerPath;
@property (nonatomic, readonly) BOOL hasRequestID;
@property (nonatomic, readwrite) BOOL hasReturnContentItemAssetsInUserCompletion;
@property (nonatomic, readwrite) BOOL includeInfo;
@property (nonatomic, readwrite) BOOL includeLanguageOptions;
@property (nonatomic, readwrite) BOOL includeLyrics;
@property (nonatomic, readwrite) BOOL includeMetadata;
@property (nonatomic, readwrite) BOOL includeSections;
@property (nonatomic, readwrite) int length;
@property (nonatomic, readwrite) int location;
@property (nonatomic, readwrite, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readwrite, retain) NSString *requestID;
@property (nonatomic, readwrite) BOOL returnContentItemAssetsInUserCompletion;

+ (Class)contentItemIdentifiersType;

- (void)addContentItemIdentifiers:(id)arg1;
- (double)artworkHeight;
- (double)artworkWidth;
- (void)clearContentItemIdentifiers;
- (id)contentItemIdentifiers;
- (id)contentItemIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentItemIdentifiersCount;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArtworkHeight;
- (BOOL)hasArtworkWidth;
- (BOOL)hasContext;
- (BOOL)hasIncludeInfo;
- (BOOL)hasIncludeLanguageOptions;
- (BOOL)hasIncludeLyrics;
- (BOOL)hasIncludeMetadata;
- (BOOL)hasIncludeSections;
- (BOOL)hasLength;
- (BOOL)hasLocation;
- (BOOL)hasPlayerPath;
- (BOOL)hasRequestID;
- (BOOL)hasReturnContentItemAssetsInUserCompletion;
- (unsigned long long)hash;
- (BOOL)includeInfo;
- (BOOL)includeLanguageOptions;
- (BOOL)includeLyrics;
- (BOOL)includeMetadata;
- (BOOL)includeSections;
- (BOOL)isEqual:(id)arg1;
- (int)length;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (BOOL)readFrom:(id)arg1;
- (id)requestID;
- (BOOL)returnContentItemAssetsInUserCompletion;
- (void)setArtworkHeight:(double)arg1;
- (void)setArtworkWidth:(double)arg1;
- (void)setContentItemIdentifiers:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasArtworkHeight:(BOOL)arg1;
- (void)setHasArtworkWidth:(BOOL)arg1;
- (void)setHasIncludeInfo:(BOOL)arg1;
- (void)setHasIncludeLanguageOptions:(BOOL)arg1;
- (void)setHasIncludeLyrics:(BOOL)arg1;
- (void)setHasIncludeMetadata:(BOOL)arg1;
- (void)setHasIncludeSections:(BOOL)arg1;
- (void)setHasLength:(BOOL)arg1;
- (void)setHasLocation:(BOOL)arg1;
- (void)setHasReturnContentItemAssetsInUserCompletion:(BOOL)arg1;
- (void)setIncludeInfo:(BOOL)arg1;
- (void)setIncludeLanguageOptions:(BOOL)arg1;
- (void)setIncludeLyrics:(BOOL)arg1;
- (void)setIncludeMetadata:(BOOL)arg1;
- (void)setIncludeSections:(BOOL)arg1;
- (void)setLength:(int)arg1;
- (void)setLocation:(int)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setReturnContentItemAssetsInUserCompletion:(BOOL)arg1;
- (void)writeTo:(id)arg1;

// _MRPlaybackQueueRequestProtobuf (MRPlaybackQueueRequestAdditions)

+ (void)initialize;

- (id)customDescription;
- (id)customDictionaryRepresentation;

@end
