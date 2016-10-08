/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIColor : NSObject <LPCSSText, NSCopying, NSSecureCoding, TSDPathPainter> {
    NSString * _cachedStyleString;
    NSString * _systemColorName;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) CIColor *CIColor;
@property (nonatomic, readonly) double MP_lightness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIColor *invert;
@property (getter=px_isTransparent, nonatomic, readonly) bool px_transparent;
@property (readonly) Class superclass;
@property (getter=_systemColorName, setter=_setSystemColorName:, nonatomic, retain) NSString *systemColorName;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)__halfTransparentBlackColor;
+ (id)__halfTransparentWhiteColor;
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+ (id)_alternateSystemInteractionTintColor;
+ (id)_barHairlineShadowColor;
+ (id)_barStyleBlackHairlineShadowColor;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4;
+ (id)_dimmingViewColor;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)_externalBarBackgroundColor;
+ (id)_externalSystemDarkGrayColor;
+ (id)_externalSystemExtraDarkGrayColor;
+ (id)_externalSystemGrayColor;
+ (id)_externalSystemMidGrayColor;
+ (id)_externalSystemSuperDarkGrayColor;
+ (id)_externalSystemWhiteColor;
+ (id)_grayColorForFontSize:(double)arg1;
+ (double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)_markedTextBackgroundColor;
+ (id)_markedTextBorderColor;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)_systemColorWithName:(id)arg1;
+ (id)_systemDestructiveTintColor;
+ (id)_systemInteractionTintColor;
+ (id)_systemMidGrayTintColor;
+ (id)_systemSelectedColor;
+ (id)_translucentPaperTextureColor;
+ (id)_vibrantDarkFillDodgeColor;
+ (id)_vibrantLightDividerBurnColor;
+ (id)_vibrantLightDividerDarkeningColor;
+ (id)_vibrantLightFillBurnColor;
+ (id)_vibrantLightFillDarkeningColor;
+ (id)_vibrantLightSectionDelimiterDividerBurnColor;
+ (id)_vibrantLightSectionDelimiterDividerDarkeningColor;
+ (id)_webContentBackgroundColor;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)classFallbacksForKeyedArchiver;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)darkGrayColor;
+ (id)darkTextColor;
+ (id)externalSystemGreenColor;
+ (id)externalSystemRedColor;
+ (id)externalSystemTealColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)groupTableViewBackgroundColor;
+ (id)infoTextOverPinStripeTextColor;
+ (void)initialize;
+ (id)insertionPointColor;
+ (id)lightGrayColor;
+ (id)lightTextColor;
+ (id)magentaColor;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)orangeColor;
+ (id)pinStripeColor;
+ (id)purpleColor;
+ (id)redColor;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)selectionGrabberColor;
+ (id)selectionHighlightColor;
+ (bool)supportsSecureCoding;
+ (id)systemBlueColor;
+ (id)systemDarkBlueColor;
+ (id)systemDarkGreenColor;
+ (id)systemDarkOrangeColor;
+ (id)systemDarkPinkColor;
+ (id)systemDarkRedColor;
+ (id)systemDarkTealColor;
+ (id)systemDarkYellowColor;
+ (id)systemGrayColor;
+ (id)systemGreenColor;
+ (id)systemMidGrayColor;
+ (id)systemOrangeColor;
+ (id)systemPinkColor;
+ (id)systemPurpleColor;
+ (id)systemRedColor;
+ (id)systemTealColor;
+ (id)systemYellowColor;
+ (id)tableBackgroundColor;
+ (id)tableCellBackgroundColor;
+ (id)tableCellBlueTextColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)tableCellPlainBackgroundColor;
+ (id)tableCellValue1BlueColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellbackgroundColorCarPlay;
+ (id)tableGroupedSeparatorLightColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tableSelectionColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableSeparatorLightColor;
+ (id)tableShadowColor;
+ (id)textFieldAtomBlueColor;
+ (id)textFieldAtomPurpleColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)whiteColor;
+ (id)yellowColor;

- (void).cxx_destruct;
- (struct CGColor { }*)CGColor;
- (id)CIColor;
- (id)_colorBlendedWithColor:(id)arg1;
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;
- (id)_colorBlendedWithColors:(id)arg1;
- (double)_colorDifferenceFromColor:(id)arg1;
- (bool)_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)_getWhite:(double*)arg1 alpha:(double*)arg2;
- (bool)_isDeepColor;
- (bool)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
- (double)_luminance;
- (double)_luminanceDifferenceFromColor:(id)arg1;
- (void)_setSystemColorName:(id)arg1;
- (id)_systemColorName;
- (double)alphaComponent;
- (struct CGColor { }*)cgColor;
- (Class)classForCoder;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (unsigned long long)hash;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPatternColor;
- (void)set;
- (void)setFill;
- (void)setStroke;
- (id)styleString;
- (id)ui_highlightedColor;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)AV_indicatorBackgroundColor;
+ (id)AV_indicatorForegroundColor;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)_cnui_actionBackgroundColor;
+ (id)_cnui_actionHighlightedBackgroundColor;
+ (id)_cnui_actionTitleColor;
+ (id)ab_colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
+ (id)cardBackgroundInPopoverColor;
+ (id)cardCellBackgroundColor;
+ (id)cardCellReadonlyBackgroundColor;
+ (id)cardCellSeparatorColor;
+ (id)cardLabelReadonlyTextColor;
+ (id)cardLabelSuggestedTextColor;
+ (id)cardValueReadonlyTextColor;
+ (id)cardValueSuggestedTextColor;
+ (id)cardValueTextColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeSeparatorColorWithBlurUnsupported;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)tableViewBackgroundColorOpaque;

- (double)blueComponent;
- (double)brightnessComponent;
- (id)burnWithColor:(id)arg1;
- (double)differenceFromColor:(id)arg1;
- (double)greenComponent;
- (double)hueComponent;
- (bool)isGreenOrYellow;
- (double)luminance;
- (id)overlayWithColor:(id)arg1;
- (double)redComponent;
- (double)saturationComponent;
- (id)soverWithColor:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_colorForTransitLine:(id)arg1;
+ (id)_mapkit_userLocationAccuracyRingFillColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColorSatellite;

- (id)_mapkit_blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (bool)_mapkit_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)_mapkit_isWhite;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)colorWithITColor:(struct ITColor { double x1; double x2; double x3; double x4; })arg1;

- (struct ITColor { double x1; double x2; double x3; double x4; })ITColor;
- (bool)MP_isArtworkColorAnalyzerLightColorForAlgorithm:(long long)arg1;
- (double)MP_lightness;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_colorWithIncreasedAlpha;
- (id)pu_colorWithIncreasedBrightness;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_defaultWebContentBackgroundColor;
+ (id)ss_browserSystemColor;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)color:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4;
+ (id)scn_colorWithC3DColor:(const struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; }*)arg1;

- (double)a;
- (double)b;
- (double)g;
- (double)r;
- (struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })scn_C3DColorIgnoringColorSpace:(bool)arg1 success:(bool*)arg2;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)colorWithComponentRGBA:(struct { float x1; float x2; float x3; float x4; })arg1;
+ (id)colorWithVectorRGBA;

- (double)alpha;
- (double)blue;
- (struct { float x1; float x2; float x3; float x4; })componentRGBA;
- (double)green;
- (double)red;
- (void)vectorRGBA;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (id)_iAd_colorWithRGBA:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)akBoxBorderColor;
+ (id)akBubbleFillColor;
+ (id)akButtonHoverStateColor;
+ (id)akColorPickerBlue;
+ (id)akColorPickerGreen;
+ (id)akColorPickerOrange;
+ (id)akColorPickerPurple;
+ (id)akColorPickerRed;
+ (id)akColorPickerYellow;
+ (id)akColorWithCIColor:(id)arg1;
+ (id)akColorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)akColorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)akRowSeparatorColor;
+ (id)akSystemBlueColor;
+ (id)akSystemGreenColor;
+ (id)akSystemPinkColor;
+ (id)akSystemPurpleColor;
+ (id)akSystemRedColor;
+ (id)akSystemYellowColor;
+ (id)im_colorWithSRGBDescription:(id)arg1;

- (double)akAlphaComponent;
- (id)akBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (bool)akIsEqualToColor:(id)arg1;
- (id)colorUsingSRGBColorSpace;

// Image: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget

- (id)_apw_colorByMultiplyingByFactor:(double)arg1;
- (id)_apw_colorByMultiplyingByRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)alpha;
- (int)colorSpaceModel;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_colorWithServerRGBRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (id)cam_lightenColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo

+ (id)CertUIVerifiedColor;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)colorByBlendingWithColor:(id)arg1;
- (id)colorByBlendingWithColor:(id)arg1 withFraction:(double)arg2;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)_cnui_colorFromData:(id)arg1;

- (id)_cnui_colorData;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (id)ccuiAccessibilityDarkColorVariant;

// Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport

+ (id)colorWithHexValue:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI

- (id)invert;

// Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI

+ (id)fmfOrangeColor;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)fu_platterBlueColor;
+ (id)fu_platterDaliTealColor;
+ (id)fu_platterGreenColor;
+ (id)fu_platterOrangeColor;
+ (id)fu_platterPinkColor;
+ (id)fu_platterPurpleColor;
+ (id)fu_platterRedColor;
+ (id)fu_platterTealBlueColor;
+ (id)fu_platterWhiteColor;
+ (id)fu_platterYellowColor;
+ (id)fu_systemBlueColor;
+ (id)fu_systemGreenColor;
+ (id)fu_systemGreyColor;
+ (id)fu_systemMintColor;
+ (id)fu_systemOrangeColor;
+ (id)fu_systemPinkColor;
+ (id)fu_systemPurpleColor;
+ (id)fu_systemRedColor;
+ (id)fu_systemTealBlueColor;
+ (id)fu_systemTextGreyColor;
+ (id)fu_systemYellowColor;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (double)_gkLuminance;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_keyColor;
+ (id)hu_vibrantGreenTextColor;
+ (id)hu_vibrantRedTextColor;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

- (id)_lp_CSSText;
- (id)_lp_CSSTextHexFormat;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)blTableviewBackgroundColor;
+ (id)colorFromPlist:(id)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)iMovieBlueColor;
+ (id)iMovieDisabledColor;
+ (id)iMoviePluginTintColor;
+ (id)iMovieTintColor;
+ (id)popoverBackgroundColor;
+ (id)randomColor;

- (struct CGColor { }*)_CreateCIELABColor;
- (void)_getCIEL:(double*)arg1 a:(double*)arg2 b:(double*)arg3;
- (void)_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3;
- (void)_getX:(double*)arg1 y:(double*)arg2 z:(double*)arg3;
- (int)colorModel;
- (id)hexString;
- (id)initWithHexString:(id)arg1;
- (bool)isReallySimilarToColor:(id)arg1;
- (bool)isSimilarToColor:(id)arg1;
- (double)perceptualLuminance;
- (id)plistRepresentation;
- (double)whiteComponent;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mt_backgroundColor;
+ (id)mt_cellAccessoryColor;
+ (id)mt_cellHighlightColor;
+ (id)mt_cellSeparatorColor;
+ (id)mt_disabledButtonTintColor;
+ (id)mt_disabledTextColor;
+ (id)mt_foregroundColor;
+ (id)mt_lapResetButtonTextColor;
+ (id)mt_lapResetButtonTintColor;
+ (id)mt_pauseButtonTextColor;
+ (id)mt_pauseButtonTintColor;
+ (id)mt_primaryColor;
+ (id)mt_primaryTextColor;
+ (id)mt_quaternaryColor;
+ (id)mt_secondaryColor;
+ (id)mt_secondaryTextColor;
+ (id)mt_sleepColor;
+ (id)mt_startResumeButtonTextColor;
+ (id)mt_startResumeButtonTintColor;
+ (id)mt_stopButtonTextColor;
+ (id)mt_stopButtonTintColor;
+ (id)mt_stopwatchMajorTickMarkColor;
+ (id)mt_stopwatchMinorTickMarkColor;
+ (id)mt_tertiaryColor;
+ (id)mt_tintColor;
+ (id)mt_wakeColor;
+ (id)mt_worldClockMapLandColor;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

+ (id)colorWithWebColor:(id)arg1;
+ (id)colorWithWebColorName:(id)arg1;
+ (id)colorWithWebHexTriplet:(id)arg1;
+ (id)colorWithWebRgb:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (id)brightenBy:(double)arg1;
- (id)colorByBoostingSaturation:(double)arg1 lightness:(double)arg2;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_colorWithHexString:(id)arg1;
+ (id)fc_colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;

- (id)fc_darken:(double)arg1;
- (id)fc_desaturate:(double)arg1;
- (id)fc_legibleForegroundColor;
- (long long)fc_legibleStatusBarStyle;
- (id)fc_lighten:(double)arg1;
- (id)fc_offsetWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
- (id)fc_saturate:(double)arg1;
- (void)getHue:(double*)arg1 saturation:(double*)arg2 lightness:(double*)arg3 alpha:(double*)arg4;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)ICDarkenedTintColor;
+ (struct UIColor { Class x1; }*)ICGrayColor;
+ (struct UIColor { Class x1; }*)ICGrayTodoButtonColor;
+ (struct UIColor { Class x1; }*)ICGrayTodoButtonHighlightColor;
+ (struct UIColor { Class x1; }*)ICLearnMoreButtonPressedColor;
+ (struct UIColor { Class x1; }*)ICLearnMoreButtonUnpressedColor;
+ (struct UIColor { Class x1; }*)ICListStatusIndicatorColor;
+ (struct UIColor { Class x1; }*)ICLockIconColor;
+ (struct UIColor { Class x1; }*)ICLockIconColorList;
+ (struct UIColor { Class x1; }*)ICRedColor;
+ (struct UIColor { Class x1; }*)ICTintColor;
+ (struct UIColor { Class x1; }*)ICTintedSelectionColor;
+ (struct UIColor { Class x1; }*)ICYellowTodoButtonColor;
+ (struct UIColor { Class x1; }*)ICYellowTodoButtonHighlightColor;
+ (id)ic_colorWith256Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (struct UIColor { Class x1; }*)preferredDefaultFontColor;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)checkerboardColorWithColor:(id)arg1 andColor:(id)arg2 squareSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)grayCheckerboardColor;
+ (id)tableViewCellDarkBlueTextColor;
+ (id)transparentGrayCheckerboardColor;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)colorWithPKColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

+ (id)pr_backgroundColor;
+ (id)pr_darkAccentColor;
+ (id)pr_lightAccentColor;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)alternateSelectedControlColor;

- (bool)px_isTransparent;

// Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI

+ (id)_remoteUI_colorWithString:(id)arg1;
+ (id)_remoteUI_colorWithString:(id)arg1 defaultColor:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_colorWithRGBColorComponents:(id)arg1;
+ (id)safari_colorWithSerializedColorData:(id)arg1;

- (id)safari_colorDataForSerialization;
- (id)safari_rgbColorComponents;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_glyphColor;
+ (id)siriui_highlightColor;
+ (id)siriui_keylineColor;
+ (id)siriui_keylineColorStark;
+ (id)siriui_maskingColor;
+ (id)siriui_maskingHighlightColor;
+ (id)siriui_platterGlyphColor;
+ (id)siriui_platterKeylineColor;
+ (id)siriui_platterSemiTransparentTextColor;
+ (id)siriui_platterTextColor;
+ (id)siriui_platterTextHighlightColor;
+ (id)siriui_primaryTextColor;
+ (id)siriui_secondaryTextColor;
+ (id)siriui_semiTransparentTextColor;
+ (id)siriui_snippetBackgroundColor;
+ (id)siriui_textColor;
+ (id)siriui_textHighlightColor;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (bool)sb_isGrayscale;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (bool)skui_isOpaque;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftUIKit.dylib

- (id)initWithColorLiteralRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)colorInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)randomColor;
+ (id)tsk_segmentedControlTintColor;
+ (id)tsk_sheetBackgroundColor;

- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)grayscaleColor;
- (id)initInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)invertedColor;
- (bool)isOpaque;
- (double)luminance;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)checkerboardColorWithColor:(id)arg1 andColor:(id)arg2 squareSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)grayCheckerboardColor;
+ (id)tableViewCellDarkBlueTextColor;
+ (id)transparentGrayCheckerboardColor;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (id)colorByAlteringOpacityToPercentage:(float)arg1;
- (id)darkerColorByPercentage:(float)arg1;
- (id)tpImageFromColor;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)colorWithStyleString:(id)arg1;

- (id)initWithStyleString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsu_darkInsertSwatchBackgroundColor;
+ (id)tsu_insertPaneBackgroundColor;
+ (id)tsu_keynoteCanvasBackgroundColor;
+ (id)tsu_keynoteCanvasDarkBackgroundColor;
+ (id)tsu_keynoteDefaultApplicationToolbarTitleColor;
+ (id)tsu_keynoteNavigationBarBackgroundColor;
+ (id)tsu_keynoteNavigatorBackgroundColor;
+ (id)tsu_keynoteNavigatorDividerColor;
+ (id)tsu_keynoteToolbarTintColor;
+ (id)tsu_navigatorSelectionFocusedHighlightColor;
+ (id)tsu_navigatorSelectionHighlightColor;
+ (id)tsu_progressViewTintColor;
+ (id)tsu_progressViewTrackTintColor;
+ (id)tsu_rowItemDividersColor;
+ (id)tsu_sidebarActiveTintColor;
+ (id)tsu_sidebarBackgroundColor;
+ (id)tsu_sidebarCellBackgroundColor;
+ (id)tsu_sidebarInactiveCellTintColor;
+ (id)tsu_sidebarInactiveTintColor;
+ (id)tsu_sidebarNavigationBarBackgroundColor;
+ (id)tsu_sidebarNavigationBarTintColor;
+ (id)tsu_sidebarNavigationBarTitleColor;
+ (id)tsu_sidebarPlaybackButtonTintColor;
+ (id)tsu_sidebarPressedStateColor;
+ (id)tsu_sidebarPrimaryContentColor;
+ (id)tsu_sidebarSecondaryContentColor;
+ (id)tsu_sidebarSegmentedCellTintColor;
+ (id)tsu_sidebarSegmentedControlTintColor;
+ (id)tsu_sidebarTableViewCellTintColor;
+ (id)tsu_sidebarTopTabTextColor;
+ (id)tsu_sliderMaximumTrackTintColor;
+ (id)tsu_sliderMinimumTrackTintColor;
+ (id)tsu_sliderThumbTintColor;
+ (id)tsu_switchOffOutlineColor;
+ (id)tsu_switchOnTintColor;
+ (id)tsu_switchTintColor;
+ (id)tsu_tableViewCellDarkBlueTextColor;

@end
