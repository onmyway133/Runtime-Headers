/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTCaptureInput : NSObject {
    long long  _reserved1;
    long long  _reserved2;
    long long  _reserved3;
    QTCaptureSession * _session;
}

- (void)_setSession:(id)arg1;
- (BOOL)addInputUnitsForConnection:(id)arg1 toGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4;
- (int)clockProviderNodeForConnection:(id)arg1;
- (int)connectionGraphNodeForConnection:(id)arg1;
- (unsigned int)connectionUnitOutputNumberForConnection:(id)arg1;
- (id)connections;
- (id)connectionsForMediaType:(id)arg1;
- (id)defaultConnectionForMediaType:(id)arg1;
- (void)graphWillStartForSession:(id)arg1;
- (void)graphWillStopForSession:(id)arg1 dueToError:(id)arg2;
- (id)init;
- (id)notReadyError;
- (void)removeInputUnitsForConnection:(id)arg1 fromGraph:(struct OpaqueCMIOGraph { }*)arg2 ofCaptureSession:(id)arg3;
- (id)session;
- (void)sessionWillUseOutputDecompressionOptions:(id)arg1 forConnection:(id)arg2;

@end
