/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary
 */

@interface TLITunesTone : NSObject {
    NSString * _albumTitle;
    NSString * _artistName;
    NSString * _artworkFile;
    double  _duration;
    NSNumber * _fadeInDurationNumber;
    NSNumber * _fadeOutDurationNumber;
    NSString * _filePath;
    NSString * _genreName;
    NSString * _identifier;
    NSString * _name;
    BOOL  _privateTone;
    BOOL  _protectedContent;
    BOOL  _purchased;
    BOOL  _ringtone;
    NSString * _storeFrontIdentifier;
    unsigned long long  _storeItemIdentifier;
    NSNumber * _syncIdentifier;
}

@property (nonatomic, readonly) NSString *albumTitle;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSString *artworkFile;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSNumber *fadeInDurationNumber;
@property (nonatomic, readonly) NSNumber *fadeOutDurationNumber;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSString *genreName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (getter=isPrivateTone, nonatomic, readonly) BOOL privateTone;
@property (getter=isProtectedContent, nonatomic, readonly) BOOL protectedContent;
@property (getter=isPurchased, nonatomic, readonly) BOOL purchased;
@property (getter=isRingtone, nonatomic, readonly) BOOL ringtone;
@property (nonatomic, readonly) NSString *storeFrontIdentifier;
@property (nonatomic, readonly) unsigned long long storeItemIdentifier;
@property (nonatomic, readonly) NSNumber *syncIdentifier;

+ (id)_identifierForPropertyListRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)albumTitle;
- (id)artistName;
- (id)artworkFile;
- (id)description;
- (double)duration;
- (id)fadeInDurationNumber;
- (id)fadeOutDurationNumber;
- (id)filePath;
- (id)genreName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;
- (id)initWithToneStoreDownload:(id)arg1;
- (BOOL)isDuplicateOfTone:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPrivateTone;
- (BOOL)isProtectedContent;
- (BOOL)isPurchased;
- (BOOL)isRingtone;
- (id)name;
- (id)storeFrontIdentifier;
- (unsigned long long)storeItemIdentifier;
- (id)syncIdentifier;

@end
