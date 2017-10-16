/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocumentRevisionsStackItem : NSObject {
    BOOL  documentFailedToLoad;
    BOOL  hasLocalData;
    BOOL  hasValidSnapshot;
    BOOL  hasWindowVisible;
    NSDocumentRevisionsStackLayer * layer;
    NSDocumentRevisionsPlaceholderView * placeholderView;
    NSFileVersion * version;
}

@property (atomic, readwrite) BOOL documentFailedToLoad;
@property (atomic, readwrite) BOOL hasLocalData;
@property (atomic, readwrite) BOOL hasValidSnapshot;
@property (atomic, readwrite) BOOL hasWindowVisible;
@property (atomic, readwrite, retain) NSDocumentRevisionsStackLayer *layer;
@property (atomic, readwrite, retain) NSDocumentRevisionsPlaceholderView *placeholderView;
@property (atomic, readwrite, retain) NSFileVersion *version;

+ (id)itemWithVersion:(id)arg1;

- (void)_setupLayerAsPlaceholder:(BOOL)arg1;
- (void)applyParameters:(id)arg1;
- (void)dealloc;
- (BOOL)documentFailedToLoad;
- (BOOL)hasLocalData;
- (BOOL)hasValidSnapshot;
- (BOOL)hasWindowVisible;
- (id)layer;
- (id)placeholderView;
- (void)setDocumentFailedToLoad:(BOOL)arg1;
- (void)setHasLocalData:(BOOL)arg1;
- (void)setHasValidSnapshot:(BOOL)arg1;
- (void)setHasWindowVisible:(BOOL)arg1;
- (void)setLayer:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end