/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding> {
    MIPMultiverseIdentifier * _multiverseIdentifier;
}

@property (nonatomic, readonly) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MIPMultiverseIdentifier *multiverseIdentifier;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) MPMediaItem *representativeItem;

+ (BOOL)canFilterByProperty:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedValueForProperty:(id)arg1 isCached:(BOOL*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (void)invalidateCachedProperties;
- (BOOL)isEqual:(id)arg1;
- (id)mediaLibrary;
- (id)multiverseIdentifier;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)persistentID;
- (id)representativeItem;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
