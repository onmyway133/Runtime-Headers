/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebEditorSpellCheckResponder : NSObject {
    struct WebEditorClient { int (**x1)(); int (**x2)(); id x3; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x4; void*x5; void*x6; void*x7; int x8; in void*x9; void*x10; const void*x11; void*x12; void*x13; unsigned int x14/* : ? */; void*x15; double x16; int x17; void*x18; out const void*x19; in double x20; out void*x21; void*x22; const void*x23; void*x24; void*x25; void*x26; void*x27; void *x28; } * _client;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _results;
    int  _sequence;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithClient:(struct WebEditorClient { int (**x1)(); int (**x2)(); id x3; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x4; void*x5; void*x6; void*x7; int x8; in void*x9; void*x10; const void*x11; void*x12; void*x13; unsigned int x14/* : ? */; void*x15; double x16; int x17; void*x18; out const void*x19; in double x20; out void*x21; void*x22; const void*x23; void*x24; void*x25; void*x26; void*x27; void *x28; }*)arg1 sequence:(int)arg2 results:(id)arg3;
- (void)perform;

@end
