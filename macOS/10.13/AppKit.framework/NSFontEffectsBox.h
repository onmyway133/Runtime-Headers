/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFontEffectsBox : NSBox <NSToolbarDelegate> {
    id  _angleDial;
    id  _angleLabel;
    NSMutableDictionary * _attributesToAdd;
    NSMutableArray * _attributesToRemove;
    id  _blurSlider;
    int  _colorState;
    id  _documentColorButton;
    struct __feblags { 
        unsigned int showUnderline : 1; 
        unsigned int showStrikethrough : 1; 
        unsigned int showTextColor : 1; 
        unsigned int showDocumentColor : 1; 
        unsigned int showShadowEffects : 1; 
        unsigned int updatingAttributes : 1; 
        unsigned int reserved : 26; 
    }  _febFlags;
    /* Warning: unhandled array encoding: '[5@]' */ id  _febUnused;
    id  _mainControlsBox;
    id  _mainEffectsBox;
    id  _opacitySlider;
    id  _radiusSlider;
    id  _shadowAngleDialToolbarItem;
    int  _shadowBlur;
    id  _shadowBlurSliderToolbarItem;
    id  _shadowControlsBox;
    id  _shadowOffsetSliderToolbarItem;
    id  _shadowOpacitySliderToolbarItem;
    id  _shadowToggleButton;
    id  _strikeButton;
    id  _textColorButton;
    id  _underlineButton;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void)_changeColorToColor:(id)arg1;
- (void)_changeDocumentColor:(id)arg1;
- (void)_changeShadowAngle:(id)arg1;
- (void)_changeShadowBlur:(id)arg1;
- (void)_changeShadowOpacity:(id)arg1;
- (void)_changeTextColor:(id)arg1;
- (id)_currentShadowForFont:(id)arg1;
- (id)_documentBackgroundColor;
- (id)_foregroundColor;
- (BOOL)_ignoreBadFirstResponders;
- (long long)_lineStyleForLineStyleButton:(id)arg1;
- (void)_openEffectsButton:(id)arg1;
- (void)_orderFrontModalColorPanel;
- (void)_sendCarbonNotificationFor:(unsigned long long)arg1 tags:(const unsigned int*)arg2 withValuePtrs:(const void**)arg3 andSizes:(const unsigned long long*)arg4;
- (void)_sendCarbonNotificationForTag:(unsigned int)arg1 withValuePtr:(const void*)arg2 andSize:(unsigned long long)arg3;
- (BOOL)_sendChangeAttributesActionIfSupported;
- (void)_setAttributes:(id)arg1 isMultiple:(BOOL)arg2;
- (long long)_strikethroughStyle;
- (void)_toggleShadow:(id)arg1;
- (long long)_underlineStyle;
- (void)_validateDocumentColor:(BOOL)arg1;
- (void)_validateFontPanelFontAttributes:(id)arg1;
- (void)_validateShadowEffect:(BOOL)arg1;
- (void)_validateStrikethrough:(BOOL)arg1;
- (void)_validateTextColor:(BOOL)arg1;
- (void)_validateUnderline:(BOOL)arg1;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (void)awakeFromNib;
- (void*)carbonNotificationProc;
- (void)changeColor:(id)arg1;
- (id)convertAttributes:(id)arg1;
- (BOOL)shadowsEnabled;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;

@end
