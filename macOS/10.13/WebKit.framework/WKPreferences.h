/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKPreferences : NSObject <NSCoding, WKObject> {
    struct ObjectStorage<WebKit::WebPreferences> { 
        struct type { 
            unsigned char __lx[112]; 
        } data; 
    }  _preferences;
}

@property (setter=_setAcceleratedDrawingEnabled:, nonatomic, readwrite) BOOL _acceleratedDrawingEnabled;
@property (setter=_setAllowFileAccessFromFileURLs:, nonatomic, readwrite) BOOL _allowFileAccessFromFileURLs;
@property (setter=_setAllowsPictureInPictureMediaPlayback:, nonatomic, readwrite) BOOL _allowsPictureInPictureMediaPlayback;
@property (setter=_setAnimatedImageAsyncDecodingEnabled:, nonatomic, readwrite) BOOL _animatedImageAsyncDecodingEnabled;
@property (atomic, readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (setter=_setApplePayCapabilityDisclosureAllowed:, nonatomic, readwrite) BOOL _applePayCapabilityDisclosureAllowed;
@property (setter=_setCompositingBordersVisible:, nonatomic, readwrite) BOOL _compositingBordersVisible;
@property (setter=_setCompositingRepaintCountersVisible:, nonatomic, readwrite) BOOL _compositingRepaintCountersVisible;
@property (setter=_setDefaultFixedPitchFontSize:, nonatomic, readwrite) unsigned long long _defaultFixedPitchFontSize;
@property (setter=_setDefaultFontSize:, nonatomic, readwrite) unsigned long long _defaultFontSize;
@property (setter=_setDeveloperExtrasEnabled:, nonatomic, readwrite) BOOL _developerExtrasEnabled;
@property (setter=_setDiagnosticLoggingEnabled:, nonatomic, readwrite) BOOL _diagnosticLoggingEnabled;
@property (setter=_setDisplayListDrawingEnabled:, nonatomic, readwrite) BOOL _displayListDrawingEnabled;
@property (setter=_setDOMPasteAllowed:, nonatomic, readwrite) BOOL _domPasteAllowed;
@property (setter=_setEnumeratingAllNetworkInterfacesEnabled:, nonatomic, readwrite) BOOL _enumeratingAllNetworkInterfacesEnabled;
@property (setter=_setFixedPitchFontFamily:, nonatomic, readwrite, copy) NSString *_fixedPitchFontFamily;
@property (setter=_setFullScreenEnabled:, nonatomic, readwrite) BOOL _fullScreenEnabled;
@property (setter=_setHiddenPageDOMTimerThrottlingAutoIncreases:, nonatomic, readwrite) BOOL _hiddenPageDOMTimerThrottlingAutoIncreases;
@property (setter=_setHiddenPageDOMTimerThrottlingEnabled:, nonatomic, readwrite) BOOL _hiddenPageDOMTimerThrottlingEnabled;
@property (setter=_setICECandidateFilteringEnabled:, nonatomic, readwrite) BOOL _iceCandidateFiltertingEnabled;
@property (setter=_setJavaScriptCanAccessClipboard:, nonatomic, readwrite) BOOL _javaScriptCanAccessClipboard;
@property (setter=_setJavaScriptRuntimeFlags:, nonatomic, readwrite) unsigned long long _javaScriptRuntimeFlags;
@property (setter=_setLargeImageAsyncDecodingEnabled:, nonatomic, readwrite) BOOL _largeImageAsyncDecodingEnabled;
@property (setter=_setLoadsImagesAutomatically:, nonatomic, readwrite) BOOL _loadsImagesAutomatically;
@property (setter=_setLogsPageMessagesToSystemConsoleEnabled:, nonatomic, readwrite) BOOL _logsPageMessagesToSystemConsoleEnabled;
@property (setter=_setMediaCaptureRequiresSecureConnection:, nonatomic, readwrite) BOOL _mediaCaptureRequiresSecureConnection;
@property (setter=_setMediaDevicesEnabled:, nonatomic, readwrite) BOOL _mediaDevicesEnabled;
@property (setter=_setMediaDocumentEntersFullscreenAutomatically:, nonatomic, readwrite) BOOL _mediaDocumentEntersFullscreenAutomatically;
@property (setter=_setMockCaptureDevicesEnabled:, nonatomic, readwrite) BOOL _mockCaptureDevicesEnabled;
@property (setter=_setOfflineApplicationCacheIsEnabled:, nonatomic, readwrite) BOOL _offlineApplicationCacheIsEnabled;
@property (setter=_setPageVisibilityBasedProcessSuppressionEnabled:, nonatomic, readwrite) BOOL _pageVisibilityBasedProcessSuppressionEnabled;
@property (setter=_setResourceUsageOverlayVisible:, nonatomic, readwrite) BOOL _resourceUsageOverlayVisible;
@property (setter=_setShouldSuppressKeyboardInputDuringProvisionalNavigation:, nonatomic, readwrite) BOOL _shouldSuppressKeyboardInputDuringProvisionalNavigation;
@property (setter=_setSimpleLineLayoutDebugBordersEnabled:, nonatomic, readwrite) BOOL _simpleLineLayoutDebugBordersEnabled;
@property (setter=_setSimpleLineLayoutEnabled:, nonatomic, readwrite) BOOL _simpleLineLayoutEnabled;
@property (getter=_isStandalone, setter=_setStandalone:, nonatomic, readwrite) BOOL _standalone;
@property (setter=_setStorageBlockingPolicy:, nonatomic, readwrite) long long _storageBlockingPolicy;
@property (setter=_setSubpixelAntialiasedLayerTextEnabled:, nonatomic, readwrite) BOOL _subpixelAntialiasedLayerTextEnabled;
@property (setter=_setTelephoneNumberDetectionIsEnabled:, nonatomic, readwrite) BOOL _telephoneNumberDetectionIsEnabled;
@property (setter=_setTextAutosizingEnabled:, nonatomic, readwrite) BOOL _textAutosizingEnabled;
@property (setter=_setTiledScrollingIndicatorVisible:, nonatomic, readwrite) BOOL _tiledScrollingIndicatorVisible;
@property (setter=_setVisibleDebugOverlayRegions:, nonatomic, readwrite) unsigned long long _visibleDebugOverlayRegions;
@property (setter=_setVisualViewportEnabled:, nonatomic, readwrite) BOOL _visualViewportEnabled;
@property (setter=_setWebRTCLegacyAPIEnabled:, nonatomic, readwrite) BOOL _webRTCLegacyAPIEnabled;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) BOOL javaEnabled;
@property (nonatomic, readwrite) BOOL javaScriptCanOpenWindowsAutomatically;
@property (nonatomic, readwrite) BOOL javaScriptEnabled;
@property (nonatomic, readwrite) double minimumFontSize;
@property (nonatomic, readwrite) BOOL plugInsEnabled;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) BOOL tabFocusesLinks;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)javaEnabled;
- (BOOL)javaScriptCanOpenWindowsAutomatically;
- (BOOL)javaScriptEnabled;
- (double)minimumFontSize;
- (BOOL)plugInsEnabled;
- (void)setJavaEnabled:(BOOL)arg1;
- (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1;
- (void)setJavaScriptEnabled:(BOOL)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (void)setPlugInsEnabled:(BOOL)arg1;
- (void)setTabFocusesLinks:(BOOL)arg1;
- (BOOL)tabFocusesLinks;

// WKPreferences (WKPrivate)

+ (id)_experimentalFeatures;

- (BOOL)_acceleratedDrawingEnabled;
- (BOOL)_allowFileAccessFromFileURLs;
- (BOOL)_allowsPictureInPictureMediaPlayback;
- (BOOL)_animatedImageAsyncDecodingEnabled;
- (BOOL)_applePayCapabilityDisclosureAllowed;
- (BOOL)_compositingBordersVisible;
- (BOOL)_compositingRepaintCountersVisible;
- (unsigned long long)_defaultFixedPitchFontSize;
- (unsigned long long)_defaultFontSize;
- (BOOL)_developerExtrasEnabled;
- (BOOL)_diagnosticLoggingEnabled;
- (BOOL)_displayListDrawingEnabled;
- (BOOL)_domPasteAllowed;
- (BOOL)_enumeratingAllNetworkInterfacesEnabled;
- (id)_fixedPitchFontFamily;
- (BOOL)_fullScreenEnabled;
- (BOOL)_hiddenPageDOMTimerThrottlingAutoIncreases;
- (BOOL)_hiddenPageDOMTimerThrottlingEnabled;
- (BOOL)_iceCandidateFiltertingEnabled;
- (BOOL)_isEnabledForFeature:(id)arg1;
- (BOOL)_isStandalone;
- (BOOL)_javaScriptCanAccessClipboard;
- (unsigned long long)_javaScriptRuntimeFlags;
- (BOOL)_largeImageAsyncDecodingEnabled;
- (BOOL)_loadsImagesAutomatically;
- (BOOL)_logsPageMessagesToSystemConsoleEnabled;
- (BOOL)_mediaCaptureRequiresSecureConnection;
- (BOOL)_mediaDevicesEnabled;
- (BOOL)_mediaDocumentEntersFullscreenAutomatically;
- (BOOL)_mockCaptureDevicesEnabled;
- (BOOL)_offlineApplicationCacheIsEnabled;
- (BOOL)_pageVisibilityBasedProcessSuppressionEnabled;
- (BOOL)_resourceUsageOverlayVisible;
- (void)_setAcceleratedDrawingEnabled:(BOOL)arg1;
- (void)_setAllowFileAccessFromFileURLs:(BOOL)arg1;
- (void)_setAllowsPictureInPictureMediaPlayback:(BOOL)arg1;
- (void)_setAnimatedImageAsyncDecodingEnabled:(BOOL)arg1;
- (void)_setApplePayCapabilityDisclosureAllowed:(BOOL)arg1;
- (void)_setCompositingBordersVisible:(BOOL)arg1;
- (void)_setCompositingRepaintCountersVisible:(BOOL)arg1;
- (void)_setDOMPasteAllowed:(BOOL)arg1;
- (void)_setDefaultFixedPitchFontSize:(unsigned long long)arg1;
- (void)_setDefaultFontSize:(unsigned long long)arg1;
- (void)_setDeveloperExtrasEnabled:(BOOL)arg1;
- (void)_setDiagnosticLoggingEnabled:(BOOL)arg1;
- (void)_setDisplayListDrawingEnabled:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1 forFeature:(id)arg2;
- (void)_setEnumeratingAllNetworkInterfacesEnabled:(BOOL)arg1;
- (void)_setFixedPitchFontFamily:(id)arg1;
- (void)_setFullScreenEnabled:(BOOL)arg1;
- (void)_setHiddenPageDOMTimerThrottlingAutoIncreases:(BOOL)arg1;
- (void)_setHiddenPageDOMTimerThrottlingEnabled:(BOOL)arg1;
- (void)_setICECandidateFilteringEnabled:(BOOL)arg1;
- (void)_setJavaScriptCanAccessClipboard:(BOOL)arg1;
- (void)_setJavaScriptRuntimeFlags:(unsigned long long)arg1;
- (void)_setLargeImageAsyncDecodingEnabled:(BOOL)arg1;
- (void)_setLoadsImagesAutomatically:(BOOL)arg1;
- (void)_setLogsPageMessagesToSystemConsoleEnabled:(BOOL)arg1;
- (void)_setMediaCaptureRequiresSecureConnection:(BOOL)arg1;
- (void)_setMediaDevicesEnabled:(BOOL)arg1;
- (void)_setMediaDocumentEntersFullscreenAutomatically:(BOOL)arg1;
- (void)_setMockCaptureDevicesEnabled:(BOOL)arg1;
- (void)_setOfflineApplicationCacheIsEnabled:(BOOL)arg1;
- (void)_setPageVisibilityBasedProcessSuppressionEnabled:(BOOL)arg1;
- (void)_setResourceUsageOverlayVisible:(BOOL)arg1;
- (void)_setShouldSuppressKeyboardInputDuringProvisionalNavigation:(BOOL)arg1;
- (void)_setSimpleLineLayoutDebugBordersEnabled:(BOOL)arg1;
- (void)_setSimpleLineLayoutEnabled:(BOOL)arg1;
- (void)_setStandalone:(BOOL)arg1;
- (void)_setStorageBlockingPolicy:(long long)arg1;
- (void)_setSubpixelAntialiasedLayerTextEnabled:(BOOL)arg1;
- (void)_setTelephoneNumberDetectionIsEnabled:(BOOL)arg1;
- (void)_setTextAutosizingEnabled:(BOOL)arg1;
- (void)_setTiledScrollingIndicatorVisible:(BOOL)arg1;
- (void)_setVisibleDebugOverlayRegions:(unsigned long long)arg1;
- (void)_setVisualViewportEnabled:(BOOL)arg1;
- (void)_setWebRTCLegacyAPIEnabled:(BOOL)arg1;
- (BOOL)_shouldSuppressKeyboardInputDuringProvisionalNavigation;
- (BOOL)_simpleLineLayoutDebugBordersEnabled;
- (BOOL)_simpleLineLayoutEnabled;
- (long long)_storageBlockingPolicy;
- (BOOL)_subpixelAntialiasedLayerTextEnabled;
- (BOOL)_telephoneNumberDetectionIsEnabled;
- (BOOL)_textAutosizingEnabled;
- (BOOL)_tiledScrollingIndicatorVisible;
- (unsigned long long)_visibleDebugOverlayRegions;
- (BOOL)_visualViewportEnabled;
- (BOOL)_webRTCLegacyAPIEnabled;

@end
