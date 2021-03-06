/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
 */

@interface IMKInputSession : NSObject <IMKTextInput, IMKUnicodeTextInput, IMKXPCSupport, IMTSMSupport> {
    BOOL  _allowRetryOnInvalidPortException;
    long long  _charactersEntered;
    IMKClient * _client;
    BOOL  _commiting;
    long long  _eventPending;
    int  _eventStatus;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _markedRange;
    NSMutableDictionary * _pendingEvents;
    BOOL  _sessionFinishedPreviously;
    NSMutableDictionary * _supportedEvents;
    BOOL  _supportsDocumentAccess;
    struct OpaqueTSMDocumentID { } * _tsmDocument;
    BOOL  deferredActivateHaveEventsQueued;
    BOOL  deferredActivateHaveInputSessionActionsQueued;
    NSString * deferredActivateInputMode;
    BOOL  deferredActivatePending;
    BOOL  didActivate;
    NSXPCConnection * inputMethodXPCConnection;
    NSMutableDictionary * placeholdersCachedWeakRef;
    NSMutableArray * queuedDeferredEvents;
    NSMutableArray * queuedInputSessionActions;
}

@property (atomic, readwrite) BOOL _allowRetryOnInvalidPortException;
@property (atomic, readwrite) BOOL deferredActivateHaveEventsQueued;
@property (atomic, readwrite) BOOL deferredActivateHaveInputSessionActionsQueued;
@property (nonatomic, readwrite, retain) NSString *deferredActivateInputMode;
@property (atomic, readwrite) BOOL deferredActivatePending;
@property (atomic, readwrite) BOOL didActivate;
@property (nonatomic, readwrite, retain) NSXPCConnection *inputMethodXPCConnection;
@property (nonatomic, readwrite, retain) NSMutableArray *queuedDeferredEvents;
@property (nonatomic, readwrite, retain) NSMutableArray *queuedInputSessionActions;

+ (void)IMKXPCPerformBlockOnMainThreadInMode:(struct __CFString { }*)arg1 performHow:(int)arg2 callerCmd:(SEL)arg3 workBlock:(id)arg4;
+ (id)inputSessionWithClient:(id)arg1 document:(struct OpaqueTSMDocumentID { }*)arg2;

- (void)_addLineInformationFromCarbonEvent:(struct OpaqueEventRef { }*)arg1 toDictionary:(id)arg2;
- (void)_addString:(id)arg1 toEventRef:(struct OpaqueEventRef { }*)arg2;
- (id)_adjustAttachmentAttributes_forInsertText:(id)arg1;
- (id)_adjustChromaticIMKAttributes_forSetMarkedText:(id)arg1;
- (id)_adjustIronwoodAttributes_forInsertText:(id)arg1;
- (id)_adjustIronwoodAttributes_forSetMarkedText:(id)arg1;
- (id)_adjustServerStringAttributes_forInsertText:(id)arg1;
- (id)_adjustServerStringAttributes_forSetMarkedText:(id)arg1;
- (BOOL)_allowRetryOnInvalidPortException;
- (void)_attributesFromRangeViaGetSelectedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 completionHandler:(id)arg2;
- (short)_attributesToHighlightStyle:(id)arg1 fallback:(BOOL)arg2 isChromaticMarkedText:(BOOL)arg3;
- (struct OpaqueEventRef { }*)_blankEvent:(unsigned int)arg1 kind:(unsigned short)arg2;
- (void)_closeInputPalette_withCompletionHandler:(id)arg1;
- (void)_commitOnMouseDown:(struct OpaqueEventRef { }*)arg1 completionHandler:(id)arg2;
- (struct __TISInputSource { }*)_copyPaletteInputSource;
- (void)_copyUniCharsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 intoBuffer:(unsigned short*)arg2 ofLength:(long long)arg3 completionHandler:(id)arg4;
- (void)_coreAttributesFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 whichAttributes:(long long)arg2 completionHandler:(id)arg3;
- (void)_createAndSendOffsetToPointEvent:(long long)arg1 completionHandler:(id)arg2;
- (void)_eventIsOn:(struct OpaqueEventRef { }*)arg1 completionHandler:(id)arg2;
- (id)_glyphAttributesFromEventRef:(struct OpaqueEventRef { }*)arg1 forString:(id)arg2;
- (id)_glyphInfoData:(id)arg1;
- (double)_heightFromFontData:(struct OpaqueEventRef { }*)arg1;
- (void)_postEvent:(struct OpaqueEventRef { }*)arg1 completionHandler:(id)arg2;
- (void)_showHideInputWindow:(BOOL)arg1 completionHandler:(id)arg2;
- (BOOL)_supportsDocumentAccess;
- (struct OpaqueEventRef { }*)_unicodeTextEventFromString:(id)arg1;
- (struct OpaqueEventRef { }*)_unmarkEventFromString:(id)arg1;
- (void)_unmarkIMKMarkedRange;
- (struct OpaqueEventRef { }*)_updateEventFromAttributedString:(id)arg1 pinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 resultShouldUnmark:(BOOL*)arg4 resultLength:(unsigned long long*)arg5;
- (void)_updateIMKMarkedRange:(BOOL)arg1 markedLength:(unsigned long long)arg2 completionHandler:(id)arg3;
- (void)activate;
- (void)activateAfterServerConnection;
- (void)addPendingEvent:(id)arg1 withUniqueSeqNum:(unsigned long long)arg2;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 completionHandler:(id)arg2;
- (id)attributesForCharacterIndex:(unsigned long long)arg1;
- (void)attributesForCharacterIndex:(unsigned long long)arg1 completionHandler:(id)arg2;
- (id)attributesForCharacterIndex:(unsigned long long)arg1 lineHeightRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)attributesForCharacterIndex_andLineRect:(unsigned long long)arg1 completionHandler:(id)arg2;
- (id)bundleIdentifier;
- (void)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 tracking:(long long)arg2 completionHandler:(id)arg3;
- (long long)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 tracking:(long long)arg2 inMarkedRange:(BOOL*)arg3;
- (id)client;
- (void)commitComposition;
- (void)commitPendingInlineSession;
- (id)currentInputSourceBundleID;
- (void)deactivate;
- (unsigned int)deadKeyState;
- (void)dealloc;
- (BOOL)deferredActivateHaveEventsQueued;
- (BOOL)deferredActivateHaveInputSessionActionsQueued;
- (id)deferredActivateInputMode;
- (BOOL)deferredActivatePending;
- (BOOL)didActivate;
- (BOOL)didCommandBySelector:(SEL)arg1;
- (BOOL)didCommandBySelector:(SEL)arg1 completionHandler:(id)arg2;
- (void)doCommandBySelector:(SEL)arg1 commandDictionary:(id)arg2;
- (void)do_coreAttributesFromRange_postEventLoopWithContext:(struct CoreAttributesFromRangeCompletionContext { unsigned short *x1; long long x2; unsigned short *x3; long long x4; long long x5; struct _NSRange { unsigned long long x_6_1_1; unsigned long long x_6_1_2; } x6; struct _NSRange { unsigned long long x_7_1_1; unsigned long long x_7_1_2; } x7; int x8; id x9; struct { long long x_10_1_1; long long x_10_1_2; } x10; struct { long long x_11_1_1; long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct OpaqueEventRef {} *x13; long long x14; BOOL x15; BOOL x16; }*)arg1 initBlockEach:(id)arg2 postEventCompletionEach:(id)arg3 whileConditionBlock:(id)arg4 finalCompletion:(id)arg5;
- (void)enqueueDeferredActivateInputSessionAction:(unsigned int)arg1 timestamp:(double)arg2 withInfo:(id)arg3;
- (void)enqueueEventForDeferredActivate:(struct OpaqueEventRef { }*)arg1;
- (void)finishSession;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 actualRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 completionHandler:(id)arg2;
- (void)handleEvent:(struct OpaqueEventRef { }*)arg1 completionHandler:(id)arg2;
- (void)hidePalettes;
- (void)hidePalettesAtInsertionPoint;
- (void)imkxpc_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 reply:(id)arg2;
- (void)imkxpc_attributesForCharacterIndex:(unsigned long long)arg1 reply:(id)arg2;
- (void)imkxpc_bundleIdentifierWithReply:(id)arg1;
- (void)imkxpc_characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 tracking:(long long)arg2 reply:(id)arg3;
- (void)imkxpc_commitPendingInlineSessionWithReply:(id)arg1;
- (void)imkxpc_currentInputSourceBundleIDWithReply:(id)arg1;
- (void)imkxpc_deadKeyStateWithReply:(id)arg1;
- (void)imkxpc_firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 reply:(id)arg2;
- (void)imkxpc_hidePalettesAtInsertionPointWithReply:(id)arg1;
- (void)imkxpc_incrementalSearchClientGeometryWithReply:(id)arg1;
- (void)imkxpc_inputSessionDoneSleepWithReply:(id)arg1;
- (void)imkxpc_insertText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 validFlags:(unsigned long long)arg3 reply:(id)arg4;
- (void)imkxpc_insertText:(id)arg1 reply:(id)arg2;
- (void)imkxpc_isBottomLineInputContextWithReply:(id)arg1;
- (void)imkxpc_isDictationHiliteCapableInputContextWithReply:(id)arg1;
- (void)imkxpc_isIncrementalSearchInputContextWithReply:(id)arg1;
- (void)imkxpc_isPaletteTerminated:(id)arg1 reply:(id)arg2;
- (void)imkxpc_isTextPlaceholderAwareInputContextWithReply:(id)arg1;
- (void)imkxpc_lengthWithReply:(id)arg1;
- (void)imkxpc_markedRangeValueWithReply:(id)arg1;
- (void)imkxpc_overrideKeyboardWithKeyboardNamed:(id)arg1 reply:(id)arg2;
- (BOOL)imkxpc_passSanityCheckAsyncClient:(SEL)arg1;
- (void)imkxpc_selectInputMode:(id)arg1 reply:(id)arg2;
- (void)imkxpc_selectedRangeWithReply:(id)arg1;
- (void)imkxpc_setMarkedText:(id)arg1 selectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 validFlags:(unsigned long long)arg4 reply:(id)arg5;
- (void)imkxpc_stringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 reply:(id)arg2;
- (void)imkxpc_supportsChromaticMarkedTextWithReply:(id)arg1;
- (void)imkxpc_supportsProperty:(unsigned int)arg1 reply:(id)arg2;
- (void)imkxpc_supportsTextAttachmentInsertionWithReply:(id)arg1;
- (void)imkxpc_supportsUnicodeWithReply:(id)arg1;
- (void)imkxpc_terminatePalette:(id)arg1 reply:(id)arg2;
- (void)imkxpc_uniqueClientIdentifierStringWithReply:(id)arg1;
- (oneway void)imkxpc_updateMenusDictionary:(id)arg1;
- (void)imkxpc_validAttributesForMarkedTextWithReply:(id)arg1;
- (void)imkxpc_windowLevelWithReply:(id)arg1;
- (void)imkxpc_wouldHandleEvent:(unsigned long long)arg1 reply:(id)arg2;
- (unsigned long long)incrementalSearchClientGeometry;
- (id)initWithClient:(id)arg1 document:(struct OpaqueTSMDocumentID { }*)arg2;
- (id)inputMethodXPCConnection;
- (void)inputSessionDoneSleep;
- (id)insertPlaceholderCachedWeakRef:(id)arg1 forKey:(id)arg2;
- (void)insertText:(id)arg1;
- (void)insertText:(id)arg1 completionHandler:(id)arg2;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id)arg3;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 validFlags:(unsigned long long)arg3;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 validFlags:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)invalidateAllPendingEvents;
- (void)invalidateClientGeometry;
- (void)ironwoodInputSessionPlaceholderWasInvalidated:(id)arg1;
- (void)ironwoodInputSessionTextWasCorrected:(id)arg1;
- (BOOL)isBottomLineInputContext;
- (BOOL)isDictationHiliteCapableInputContext;
- (BOOL)isFixTSMIsFromDiscardMarkedText;
- (BOOL)isIncrementalSearchInputContext;
- (BOOL)isPaletteTerminated:(id)arg1;
- (BOOL)isTextPlaceholderAwareInputContext;
- (long long)length;
- (void)length_withCompletionHandler:(id)arg1;
- (id)lookupPlaceholderCachedWeakRef:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (id)markedRangeValue;
- (void)overrideKeyboardWithKeyboardNamed:(id)arg1;
- (id)queuedDeferredEvents;
- (id)queuedInputSessionActions;
- (void)removePlaceholderCachedWeakRef:(id)arg1;
- (void)replyWaitCount_decrementWithLocking;
- (void)replyWaitCount_incrementWithLocking;
- (void)replyWaitCount_lockDecrement;
- (void)replyWaitCount_lockIncrement;
- (int)replyWaitCount_testWithLocking;
- (void)replyWaitCount_unlock;
- (void)resetDeferredActivateInputSessionQueuedActions;
- (void)resetDeferredActivateQueuedEvents;
- (void)selectInputMode:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)selectedRange_withCompletionHandler:(id)arg1;
- (void)sendInputSessionSessAction:(unsigned int)arg1 timestamp:(double)arg2 withInfo:(struct __CFDictionary { }*)arg3;
- (void)sessionConnectionIsInvalid:(id)arg1;
- (void)setDeferredActivateHaveEventsQueued:(BOOL)arg1;
- (void)setDeferredActivateHaveInputSessionActionsQueued:(BOOL)arg1;
- (void)setDeferredActivateInputMode:(id)arg1;
- (void)setDeferredActivatePending:(BOOL)arg1;
- (void)setDidActivate:(BOOL)arg1;
- (void)setInputMethodXPCConnection:(id)arg1;
- (void)setMarkedText:(id)arg1 selectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setMarkedText:(id)arg1 selectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 completionHandler:(id)arg4;
- (void)setMarkedText:(id)arg1 selectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 validFlags:(unsigned long long)arg4;
- (void)setMarkedText:(id)arg1 selectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 validFlags:(unsigned long long)arg4 completionHandler:(id)arg5;
- (void)setQueuedDeferredEvents:(id)arg1;
- (void)setQueuedInputSessionActions:(id)arg1;
- (void)setValue:(id)arg1 forTag:(unsigned int)arg2;
- (void)set_allowRetryOnInvalidPortException:(BOOL)arg1;
- (id)stringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 actualRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)stringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 completionHandler:(id)arg2;
- (BOOL)supportsChromaticMarkedText;
- (BOOL)supportsProperty:(unsigned int)arg1;
- (BOOL)supportsTextAttachmentInsertion;
- (BOOL)supportsUnicode;
- (void)terminatePalette:(id)arg1;
- (id)textInputContext;
- (void)tryCoreAttributesFromRange_CheckForSurrogateCharacter_CopyUniCharsForRangeAdjusted_wTest:(BOOL)arg1 context:(struct CoreAttributesFromRangeCompletionContext { unsigned short *x1; long long x2; unsigned short *x3; long long x4; long long x5; struct _NSRange { unsigned long long x_6_1_1; unsigned long long x_6_1_2; } x6; struct _NSRange { unsigned long long x_7_1_1; unsigned long long x_7_1_2; } x7; int x8; id x9; struct { long long x_10_1_1; long long x_10_1_2; } x10; struct { long long x_11_1_1; long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct OpaqueEventRef {} *x13; long long x14; BOOL x15; BOOL x16; }*)arg2 initialBlock:(id)arg3 continuationBlock:(id)arg4;
- (void)tryCoreAttributesFromRange_CheckForSurrogateCharacter_GetDocLength_CopyUniCharsForRangeAdjusted_wTest:(BOOL)arg1 context:(struct CoreAttributesFromRangeCompletionContext { unsigned short *x1; long long x2; unsigned short *x3; long long x4; long long x5; struct _NSRange { unsigned long long x_6_1_1; unsigned long long x_6_1_2; } x6; struct _NSRange { unsigned long long x_7_1_1; unsigned long long x_7_1_2; } x7; int x8; id x9; struct { long long x_10_1_1; long long x_10_1_2; } x10; struct { long long x_11_1_1; long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct OpaqueEventRef {} *x13; long long x14; BOOL x15; BOOL x16; }*)arg2 nextDispatchTest:(id)arg3 initialBlock:(id)arg4 continuationBlock:(id)arg5;
- (void)tryHandleEventSwitchedInputMode:(struct OpaqueEventRef { }*)arg1 eventWasHandled:(BOOL)arg2 continuationHandler:(id)arg3;
- (void)tryHandleEvent_GetOffsetAndLocationForMouseEvent__withDispatchCondition:(id)arg1 initialization:(id)arg2 dispatchWork:(id)arg3 postEventCompletion:(id)arg4 continuationHandler:(id)arg5;
- (void)tryHandleEvent_commitOnMouseDown_withDispatchCondition:(id)arg1 dispatchWork:(id)arg2 continuation:(id)arg3;
- (void)tryUpdateIMKMarkedRange_withDispatchCondition:(id)arg1 dispatchWork:(id)arg2 continuation:(id)arg3;
- (id)uniqueClientIdentifierString;
- (void)unmarkTextInClient;
- (id)validAttributesForMarkedText;
- (id)valueForTag:(unsigned int)arg1;
- (id)valueForTag:(unsigned int)arg1 completionHandler:(id)arg2;
- (int)windowLevel;
- (void)wouldHandleEvent:(unsigned long long)arg1 completionHandler:(id)arg2;

@end
