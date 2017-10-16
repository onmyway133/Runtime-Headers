/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVVCAudioBuffer : NSObject {
    void * _impl;
}

@property (atomic, readonly) int bytesCapacity;
@property (atomic, readwrite) int bytesDataSize;
@property (atomic, readonly) int channels;
@property (atomic, readonly) void*data;
@property (atomic, readonly) int packetDescriptionCapacity;
@property (atomic, readonly) int packetDescriptionCount;
@property (atomic, readonly) struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*packetDescriptions;
@property (atomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*streamDescription;
@property (atomic, readonly) unsigned long long timeStamp;

- (int)bytesCapacity;
- (int)bytesDataSize;
- (int)channels;
- (void*)data;
- (int)packetDescriptionCapacity;
- (int)packetDescriptionCount;
- (struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)packetDescriptions;
- (void)setBytesDataSize:(int)arg1;
- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)arg1 count:(int)arg2;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)streamDescription;
- (unsigned long long)timeStamp;

// AVVCAudioBuffer (AVVCAudioBufferPriv)

- (void)dealloc;
- (void)finalize;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; struct AudioStreamBasicDescription { double x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; unsigned int x_8_1_6; unsigned int x_8_1_7; unsigned int x_8_1_8; unsigned int x_8_1_9; } x8; }*)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3;

@end
