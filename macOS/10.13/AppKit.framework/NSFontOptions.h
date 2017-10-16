/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFontOptions : NSObject {
    NSDictionary * _attributesForNewFavorite;
    NSMutableDictionary * _attributesToAdd;
    NSMutableArray * _attributesToRemove;
    NSMutableDictionary * _favoriteStyles;
    struct { 
        unsigned int isMultiple : 1; 
        unsigned int reserved : 31; 
    }  _flags;
    NSString * _optionsAddTitle;
    NSDictionary * _optionsAttributes;
    NSString * _optionsRemoveTitle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previewRect;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeForOptions;
    NSMutableDictionary * _selectedAttributes;
    NSDictionary * _standardFavoriteStyles;
    NSString * _stringForOptions;
    NSTextView * _textViewForOptions;
    NSWindow * _windowForColorOptions;
    NSWindow * _windowForOptions;
    NSWindow * _windowForSheets;
    id  addFavoritePanel;
    id  backgroundColorWell;
    id  baselineButton;
    id  baselineSlider;
    id  colorOptionsBackgroundColorWell;
    id  colorOptionsFontColorWell;
    id  colorOptionsPanel;
    id  colorOptionsStrikethroughColorWell;
    id  colorOptionsStrokeColorWell;
    id  colorOptionsStrokeMatrix;
    id  colorOptionsStrokeSlider;
    id  colorOptionsUnderlineColorWell;
    id  confirmAddFavoriteButton;
    id  expansionButton;
    id  expansionSlider;
    id  favoriteNameField;
    id  favoritesPullDown;
    id  fontColorWell;
    id  fontField;
    id  includeFontButton;
    id  includeRulerButton;
    id  kerningButton;
    id  kerningSlider;
    id  obliquenessButton;
    id  obliquenessSlider;
    id  optionsAddRemoveButton;
    id  optionsAttributesField;
    id  optionsButtons;
    id  optionsMatrix;
    id  optionsPanel;
    id  optionsPopUp;
    id  optionsPreviewField;
    id  panel;
    id  removeFavoritePanel;
    id  removeFavoritePopUp;
    id  replaceFavoritePanel;
    id  selectButton;
    id  selectByCharStyleButton;
    id  selectByFontButton;
    id  selectByFontFamilyButton;
    id  selectByParStyleButton;
    id  selectPanel;
    id  selectWithinSelectionMatrix;
    id  shadowBlurRadiusSlider;
    id  shadowButton;
    id  shadowHeightSlider;
    id  shadowWidthSlider;
    id  strikethroughColorWell;
    id  strikethroughMatrix;
    id  strikethroughStylePopUp;
    id  strikethroughTypeButton;
    id  strokeColorWell;
    id  strokeMatrix;
    id  strokeSlider;
    id  underlineColorWell;
    id  underlineMatrix;
    id  underlineStylePopUp;
    id  underlineTypeButton;
}

+ (id)sharedFontOptions;

- (void)addFavorite;
- (void)addFavoriteInWindow:(id)arg1;
- (void)cancelSheet:(id)arg1;
- (void)changeOptionsPanelSettings:(id)arg1;
- (void)confirmSheet:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)convertAttributes:(id)arg1;
- (void)dealloc;
- (id)displayStringsForAttributes:(id)arg1 includeBoldItalic:(BOOL)arg2;
- (id)displayStringsForParagraphStyle:(id)arg1;
- (void)enableAll:(BOOL)arg1;
- (id)favoriteAttributesForName:(id)arg1;
- (id)favoriteAttributesNames;
- (BOOL)getStylesPanelTextView:(id*)arg1 window:(id*)arg2;
- (id)init;
- (void)loadUI;
- (void)modifyOptionsViaPanel:(id)arg1;
- (id)optionsAttributes;
- (void)orderFrontColorOptionsPanelInWindow:(id)arg1;
- (void)orderFrontFontOptionsPanel:(id)arg1;
- (void)orderFrontFontPanel:(id)arg1;
- (void)orderFrontStylesPanel:(id)arg1;
- (void)orderFrontStylesPanelInWindow:(id)arg1 textView:(id)arg2;
- (void)removeFavoriteInWindow:(id)arg1;
- (void)saveFavoritesToDefaults;
- (void)selectAllInView:(id)arg1 selectionOnly:(BOOL)arg2 fontFamily:(BOOL)arg3 font:(BOOL)arg4 characterStyle:(BOOL)arg5 paragraphStyle:(BOOL)arg6;
- (void)selectDefaultRange;
- (void)selectFarthestRangeForward:(BOOL)arg1;
- (void)selectNextRangeForward:(BOOL)arg1;
- (id)selectedAttributes;
- (void)setOptionsAttributes:(id)arg1 string:(id)arg2;
- (void)setSelectedAttributes:(id)arg1 isMultiple:(BOOL)arg2;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3;
- (id)storedAttributes;
- (id)stringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)textView:(id)arg1 shouldSetColor:(id)arg2;
- (void)updateColorOptionsUI;
- (void)updateFavoritesFromDefaults;
- (void)updateFavoritesUI;
- (void)updateOptionsUI;
- (void)updateUI;
- (void)windowWillClose:(id)arg1;

@end
