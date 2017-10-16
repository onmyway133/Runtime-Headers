/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRAVEndpoint : NSObject {
    MRAVOutputDevice * _designatedGroupLeader;
    MRExternalDevice * _externalDevice;
    NSString * _localizedName;
    NSArray * _outputDevices;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readwrite, retain) MRAVOutputDevice *designatedGroupLeader;
@property (nonatomic, readwrite, retain) MRExternalDevice *externalDevice;
@property (getter=isLocalEndpoint, nonatomic, readonly) BOOL localEndpoint;
@property (nonatomic, readwrite, retain) NSString *localizedName;
@property (nonatomic, readwrite, copy) NSArray *outputDevices;
@property (nonatomic, readwrite, retain) NSString *uniqueIdentifier;

- (void)_connectToExternalDeviceWithCompletion:(id)arg1;
- (void)_initializeExternalDeviceIfPossible;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 replyQueue:(id)arg3 completion:(id)arg4;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3;
- (BOOL)containsOutputDevice:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)designatedGroupLeader;
- (id)externalDevice;
- (void)forceEnableRemoteControllability;
- (id)initWithOutputDevices:(id)arg1;
- (BOOL)isLocalEndpoint;
- (id)localizedName;
- (id)outputDevices;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3;
- (void)setDesignatedGroupLeader:(id)arg1;
- (void)setExternalDevice:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
