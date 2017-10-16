/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTCaptureFileOutputPauseOperationDescriptor : NSObject <QTCaptureOperationDescriptor> {
    BOOL  _shouldPause;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)operationThatShouldPause:(BOOL)arg1;

- (id)init;
- (id)initOperationThatShouldPause:(BOOL)arg1;
- (id)operationDescriptorCoalescedWithExistingOperationDescriptor:(id)arg1;
- (BOOL)shouldPause;

@end
