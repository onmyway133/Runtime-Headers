/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKCameraIconView : IKImageBrowserView

@property (atomic, readwrite) double progress;
@property (atomic, readwrite, copy) NSString *statusText;

- (id)_draggedImageForFreeFormLayoutWithClickedPoint:(struct CGPoint { double x1; double x2; })arg1 hotPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (void)_willInitWithCoder;
- (void)dragImage:(id)arg1 at:(struct CGPoint { double x1; double x2; })arg2 offset:(struct CGSize { double x1; double x2; })arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)iconSizeChanged:(double)arg1;
- (void)installStatusLayer;
- (id)newCellForRepresentedItem:(id)arg1;
- (double)progress;
- (void)removeStatusLayer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setProgress:(double)arg1;
- (void)setSelectionIndexes:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)startDragNDropWithEvent:(id)arg1;
- (id)statusLayer;
- (id)statusText;

@end
