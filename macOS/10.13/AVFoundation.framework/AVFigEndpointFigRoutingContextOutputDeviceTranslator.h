/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVFigEndpointFigRoutingContextOutputDeviceTranslator : NSObject <AVFigRoutingContextOutputDeviceTranslator>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)sharedOutputDeviceTranslator;

- (void)addOutputDevice:(id)arg1 toRoutingContext:(struct OpaqueFigRoutingContext { }*)arg2;
- (id)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (id)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (void)removeOutputDevice:(id)arg1 fromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg2;
- (BOOL)setOutputDevice:(id)arg1 withOptions:(struct __CFDictionary { }*)arg2 onRoutingContext:(struct OpaqueFigRoutingContext { }*)arg3;
- (void)setOutputDevices:(id)arg1 withOptions:(struct __CFDictionary { }*)arg2 onRoutingContext:(struct OpaqueFigRoutingContext { }*)arg3;

@end
