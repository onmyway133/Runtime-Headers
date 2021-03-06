/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUINamedColor : CUINamedLookup {
    struct CGColor { } * _cgColor;
    long long  _displayGamut;
}

@property (nonatomic, readonly) struct CGColor { }*cgColor;
@property (nonatomic, readonly) long long displayGamut;

- (struct CGColorSpace { }*)_colorSpaceWithID:(long long)arg1;
- (struct CGColor { }*)cgColor;
- (struct CGColor { }*)cgColorCreateCopyWithColorSpaceID:(long long)arg1;
- (void)dealloc;
- (long long)displayGamut;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end
