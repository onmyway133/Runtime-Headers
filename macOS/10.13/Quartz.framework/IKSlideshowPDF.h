/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKSlideshowPDF : IKSlideshowElement {
    PDFDocument * _pdfDocument;
}

@property (atomic, readwrite, retain) PDFDocument *pdfDocument;

- (id)debugState;
- (id)initWithPDFDocument:(id)arg1 dataSourceHandler:(id)arg2 index:(unsigned long long)arg3 subIndex:(unsigned long long)arg4;
- (void)load:(BOOL)arg1;
- (void)loadThumbnail:(BOOL)arg1;
- (void)loadThumbnail:(BOOL)arg1 currentCount:(unsigned long long)arg2;
- (void)loadThumbnailIfNeeded;
- (id)pdfDocument;
- (void)setMarkedForExport:(BOOL)arg1;
- (void)setPdfDocument:(id)arg1;
- (void)setThumbnail:(struct CGImage { }*)arg1;
- (void)setupSiblings;
- (struct CGImage { }*)thumbnail;

@end
