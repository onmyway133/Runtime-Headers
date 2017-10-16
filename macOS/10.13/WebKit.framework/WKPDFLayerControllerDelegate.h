/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKPDFLayerControllerDelegate : NSObject <PDFLayerControllerDelegate> {
    struct PDFPlugin { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; int x3; struct PluginController {} *x4; int (**x5)(); struct unique_ptr<WebCore::ScrollAnimator, std::__1::default_delete<WebCore::ScrollAnimator> > { struct __compressed_pair<WebCore::ScrollAnimator *, std::__1::default_delete<WebCore::ScrollAnimator> > { struct ScrollAnimator {} *x_1_2_1; } x_6_1_1; } x6; struct WeakPtrFactory<WebCore::ScrollableArea> { struct Ref<WTF::WeakReference<WebCore::ScrollableArea> > { struct WeakReference<WebCore::ScrollableArea> {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit>, std::__1::default_delete<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> > > { struct __compressed_pair<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> *, std::__1::default_delete<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> > > { struct ScrollSnapOffsetsInfo<WebCore::LayoutUnit> {} *x_1_2_1; } x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct IntPoint { int x_11_1_1; int x_11_1_2; } x11; } * _pdfPlugin;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) struct PDFPlugin { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; int x3; struct PluginController {} *x4; int (**x5)(); /* Warning: unhandled struct encoding: '{unique_ptr<WebCore::ScrollAnimator' */ struct x6; }*pdfPlugin; /* unknown property attribute:  6>=[6d]}}{WebMouseEvent=IIdI{IntPoint=ii}{IntPoint=ii}fffiiidI}{IntPoint=ii}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{RetainPtr<WKPDFLayerControllerDelegate>=^v}{IntSize=ii}{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1b1IIIIIIIII}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{RetainPtr<__CFData *>=^v}{RetainPtr<PDFDocument>=^v}I{IntSize=ii}{RefPtr<WebCore::Scrollbar>=^{Scrollbar}}{RefPtr<WebCore::Scrollbar>=^{Scrollbar}}} */
@property (atomic, readonly) Class superclass;

- (void)didChangeAnnotationState;
- (id)initWithPDFPlugin:(struct PDFPlugin { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; int x3; struct PluginController {} *x4; int (**x5)(); struct unique_ptr<WebCore::ScrollAnimator, std::__1::default_delete<WebCore::ScrollAnimator> > { struct __compressed_pair<WebCore::ScrollAnimator *, std::__1::default_delete<WebCore::ScrollAnimator> > { struct ScrollAnimator {} *x_1_2_1; } x_6_1_1; } x6; struct WeakPtrFactory<WebCore::ScrollableArea> { struct Ref<WTF::WeakReference<WebCore::ScrollableArea> > { struct WeakReference<WebCore::ScrollableArea> {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit>, std::__1::default_delete<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> > > { struct __compressed_pair<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> *, std::__1::default_delete<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> > > { struct ScrollSnapOffsetsInfo<WebCore::LayoutUnit> {} *x_1_2_1; } x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct IntPoint { int x_11_1_1; int x_11_1_2; } x11; }*)arg1;
- (void)openWithNativeApplication;
- (void)pdfLayerController:(id)arg1 clickedLinkWithURL:(id)arg2;
- (void)pdfLayerController:(id)arg1 didChangeActiveAnnotation:(id)arg2;
- (void)pdfLayerController:(id)arg1 didChangeContentScaleFactor:(double)arg2;
- (void)pdfLayerController:(id)arg1 didChangeDisplayMode:(int)arg2;
- (void)pdfLayerController:(id)arg1 didChangeSelection:(id)arg2;
- (struct PDFPlugin { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; int x3; struct PluginController {} *x4; int (**x5)(); struct unique_ptr<WebCore::ScrollAnimator, std::__1::default_delete<WebCore::ScrollAnimator> > { struct __compressed_pair<WebCore::ScrollAnimator *, std::__1::default_delete<WebCore::ScrollAnimator> > { struct ScrollAnimator {} *x_1_2_1; } x_6_1_1; } x6; struct WeakPtrFactory<WebCore::ScrollableArea> { struct Ref<WTF::WeakReference<WebCore::ScrollableArea> > { struct WeakReference<WebCore::ScrollableArea> {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit>, std::__1::default_delete<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> > > { struct __compressed_pair<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> *, std::__1::default_delete<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> > > { struct ScrollSnapOffsetsInfo<WebCore::LayoutUnit> {} *x_1_2_1; } x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct IntPoint { int x_11_1_1; int x_11_1_2; } x11; }*)pdfPlugin;
- (void)performSpotlightSearch:(id)arg1;
- (void)performWebSearch:(id)arg1;
- (void)saveToPDF;
- (void)setMouseCursor:(long long)arg1;
- (void)setPdfPlugin:(struct PDFPlugin { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; int x3; struct PluginController {} *x4; int (**x5)(); struct unique_ptr<WebCore::ScrollAnimator, std::__1::default_delete<WebCore::ScrollAnimator> > { struct __compressed_pair<WebCore::ScrollAnimator *, std::__1::default_delete<WebCore::ScrollAnimator> > { struct ScrollAnimator {} *x_1_2_1; } x_6_1_1; } x6; struct WeakPtrFactory<WebCore::ScrollableArea> { struct Ref<WTF::WeakReference<WebCore::ScrollableArea> > { struct WeakReference<WebCore::ScrollableArea> {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit>, std::__1::default_delete<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> > > { struct __compressed_pair<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> *, std::__1::default_delete<WebCore::ScrollSnapOffsetsInfo<WebCore::LayoutUnit> > > { struct ScrollSnapOffsetsInfo<WebCore::LayoutUnit> {} *x_1_2_1; } x_8_1_1; } x8; unsigned int x9; unsigned int x10; struct IntPoint { int x_11_1_1; int x_11_1_2; } x11; }*)arg1;
- (void)showDefinitionForAttributedString:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateScrollPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)writeItemsToPasteboard:(id)arg1 withTypes:(id)arg2;

@end
