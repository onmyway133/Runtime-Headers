/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRTransactionSource : NSObject {
    <MRTransactionSourceDelegate> * _delegate;
    unsigned long long  _name;
    MRTransactionPacketizer * _packetizer;
    NSMutableArray * _packets;
    void * _playerPath;
}

@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) void*playerPath;

- (void)_begin;
- (void)_processMessage:(id)arg1;
- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 playerPath:(void*)arg2 packets:(id)arg3 delegate:(id)arg4;
- (unsigned long long)name;
- (void*)playerPath;

@end
