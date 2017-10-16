/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTExportSession : NSObject {
    QTExportSessionInternal * _internal;
}

@property (getter=isCancelled, atomic, readonly) BOOL cancelled;
@property (atomic, readwrite) <QTExportSessionDelegate> *delegate;
@property (atomic, readonly, copy) QTExportOptions *exportOptions;
@property (getter=isFinished, atomic, readonly) BOOL finished;
@property (atomic, readonly) double progress;
@property (getter=isRunning, atomic, readonly) BOOL running;

- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)errorForRainForestError:(int)arg1;
- (id)exportOptions;
- (id)initWithMovie:(id)arg1 exportOptions:(id)arg2 outputURL:(id)arg3 error:(id*)arg4;
- (id)initWithOptions:(id)arg1 outputURL:(id)arg2 error:(id*)arg3;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isRunning;
- (id)localizedExportSessionOutputSummary;
- (double)progress;
- (void)run;
- (int)runState;
- (void)setDelegate:(id)arg1;
- (void)setExportCompleted:(int)arg1;
- (void)setProgress:(double)arg1;
- (void)setRunState:(int)arg1;
- (BOOL)validateDestinationFileType:(id*)arg1;
- (BOOL)waitUntilFinished:(id*)arg1;

@end
