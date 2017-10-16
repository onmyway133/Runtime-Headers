/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface _MTLSamplerState : NSObject <MTLSamplerState> {
    <MTLDevice> * _device;
    NSString * _label;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) <MTLDevice> *device;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSString *label;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) unsigned long long uniqueIdentifier;

- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2;
- (id)label;
- (unsigned long long)uniqueIdentifier;

@end
