/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface _MTLDebugCommandEncoder : _MTLCommandEncoder <MTLDebugCommandEncoder>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) <MTLDevice> *device;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *label;
@property (atomic, readonly) Class superclass;

- (void)IOLog:(id)arg1;
- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)kprintf:(id)arg1;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end
