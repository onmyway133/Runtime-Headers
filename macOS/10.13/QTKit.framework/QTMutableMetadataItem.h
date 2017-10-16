/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTMutableMetadataItem : QTMetadataItem

@property (atomic, readwrite, copy) NSDictionary *extraAttributes;
@property (atomic, readwrite, copy) <NSCopying> *key;
@property (atomic, readwrite, copy) NSString *keySpace;
@property (atomic, readwrite, copy) NSLocale *locale;
@property (atomic, readwrite) struct { long long x1; long long x2; long long x3; } time;
@property (atomic, readwrite, copy) <NSCopying> *value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)extraAttributes;
- (id)key;
- (id)keySpace;
- (id)locale;
- (void)setExtraAttributes:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setKeySpace:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setTime:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setValue:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })time;
- (id)value;

@end