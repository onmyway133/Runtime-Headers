/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDocumentDragButton : NSButton <NSDraggingSource> {
    struct __ddbFlags { 
        unsigned int waitForDrag : 1; 
        unsigned int currentlyDragging : 1; 
        unsigned int shouldDrag : 1; 
        unsigned int RESERVED : 29; 
    }  _ddbFlags;
    NSEvent * mouseDownEvent;
    NSURL * representedURL;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

- (void)_autosaveDocumentIfNeeded;
- (void)_dragFile:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 slideBack:(BOOL)arg3 event:(id)arg4;
- (id)_draggingItemFromPasteboardItem:(id)arg1;
- (struct CGPoint { double x1; double x2; })_filenameWindowDragPoint;
- (void)_showDragError:(int)arg1 forFilename:(id)arg2;
- (id)_textViewForDragging;
- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)originalWindow;
- (id)representedFilename;
- (void)setRepresentedFilename:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;

@end