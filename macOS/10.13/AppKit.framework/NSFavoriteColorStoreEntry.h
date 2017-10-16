/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFavoriteColorStoreEntry : NSObject <NSCopying> {
    NSColor * _color;
    NSString * _customColorClassName;
    NSData * _customColorData;
}

@property (atomic, readonly) NSColor *color;
@property (atomic, readonly, copy) NSString *customColorClassName;
@property (atomic, readonly, copy) NSData *customColorData;

+ (id)customEntryWithColorClassName:(id)arg1 data:(id)arg2 backstopColor:(id)arg3;
+ (id)entryWithColor:(id)arg1;

- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customColorClassName;
- (id)customColorData;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithColor:(id)arg1 customClassName:(id)arg2 customColorData:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
