/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebPDFRepresentation : NSObject <WebDocumentRepresentation>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (Class)PDFDocumentClass;
+ (id)postScriptMIMETypes;
+ (id)supportedMIMETypes;

- (BOOL)canProvideDocumentSource;
- (id)convertPostScriptDataSourceToPDF:(id)arg1;
- (id)documentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)setDataSource:(id)arg1;
- (id)title;

@end