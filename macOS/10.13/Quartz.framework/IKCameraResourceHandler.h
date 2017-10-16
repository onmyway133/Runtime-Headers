/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKCameraResourceHandler : NSObject <NSTableViewDataSource, NSTableViewDelegate> {
    IKCameraDeviceViewHandler * _deviceHandler;
    long long  _outstandingMetadataRequests;
    long long  _outstandingThumbnailRequests;
    BOOL  _paused;
    NSMutableArray * _queue;
    NSArrayController * _queueController;
    NSWindow * _window;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) IKCameraDeviceViewHandler *deviceHandler;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) long long outstandingMetadataRequests;
@property (atomic, readwrite) long long outstandingThumbnailRequests;
@property (atomic, readwrite) NSMutableArray *queue;
@property (atomic, readwrite) NSArrayController *queueController;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) NSWindow *window;

+ (id)sharedResourceHandler;

- (void)awakeFromNib;
- (id)deviceHandler;
- (void)didDownloadMetadata:(id)arg1;
- (void)didDownloadThumbnail:(id)arg1;
- (void)doDownloadNextResource;
- (void)downloadNextResource;
- (id)init;
- (long long)outstandingMetadataRequests;
- (long long)outstandingThumbnailRequests;
- (void)pauseRH;
- (id)queue;
- (id)queueController;
- (void)recheckDownloadState;
- (void)removeItem:(id)arg1;
- (void)requestMetadata:(id)arg1;
- (void)requestThumbnail:(id)arg1;
- (void)reset;
- (void)resumeRH;
- (void)resync;
- (void)setDeviceHandler:(id)arg1;
- (void)setOutstandingMetadataRequests:(long long)arg1;
- (void)setOutstandingThumbnailRequests:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueueController:(id)arg1;
- (void)setWindow:(id)arg1;
- (BOOL)shouldProcessItem:(id)arg1;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)window;

@end
