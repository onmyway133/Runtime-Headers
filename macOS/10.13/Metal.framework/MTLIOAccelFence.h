/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLIOAccelFence : NSObject <MTLFence> {
    MTLIOAccelDevice<MTLDevice> * _device;
    unsigned int  _fenceIndex;
    NSString * _label;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) <MTLDevice> *device;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite, copy) NSString *label;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1 fenceIndex:(unsigned int)arg2;
- (id)label;
- (void)setLabel:(id)arg1;

@end
