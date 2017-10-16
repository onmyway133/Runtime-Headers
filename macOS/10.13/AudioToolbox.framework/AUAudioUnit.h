/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface AUAudioUnit : NSObject {
    long long  _MIDIOutputBufferSizeHint;
    id  _MIDIOutputEventBlock;
    BOOL  _allParameterValues;
    NSString * _audioUnitShortName;
    struct NSViewController { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 28; unsigned int x13 : 0; } * _cachedViewController;
    BOOL  _canProcessInPlace;
    NSArray * _channelMap;
    struct OpaqueAudioComponent { } * _component;
    struct AudioComponentDescription { 
        unsigned int componentType; 
        unsigned int componentSubType; 
        unsigned int componentManufacturer; 
        unsigned int componentFlags; 
        unsigned int componentFlagsMask; 
    }  _componentDescription;
    NSString * _componentName;
    unsigned int  _componentVersion;
    NSString * _contextName;
    AUAudioUnitPreset * _currentPreset;
    NSArray * _factoryPresets;
    NSURL * _iconURL;
    double  _latency;
    unsigned int  _maximumFramesToRender;
    id  _musicalContextBlock;
    struct RealtimeState { 
        struct CAMutex { 
            int (**_vptr$CAMutex)(); 
            char *mName; 
            struct _opaque_pthread_t {} *mOwner; 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } mMutex; 
        } mMutex; 
        struct RenderObserverList { 
            struct TThreadSafeList<RenderObserver> { 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mActiveList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mPendingList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mFreeList; 
            } mObservers; 
            bool mTouched; 
        } renderObserverList; 
        struct AUEventSchedule { 
            struct AURenderEventAllocator {} *mAllocator; 
            struct TAtomicStack<AURenderEventStruct> { 
                struct AURenderEventStruct {} *mHead; 
            } mAddedEventStack; 
            union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_0_2_1; void*x_0_2_2; void*x_0_2_3; in double x_0_2_4; void*x_0_2_5; const void*x_0_2_6; void x_0_2_7; void*x_0_2_8; in void*x_0_2_9; } *mScheduleHead; 
            AUAudioUnit *mOwningAU; 
        } eventSchedule; 
    }  _realtimeState;
    long long  _renderQuality;
    BOOL  _renderResourcesAllocated;
    BOOL  _renderingOffline;
    BOOL  _shouldBypassEffect;
    BOOL  _supportsMPE;
    double  _tailTime;
    id  _transportStateBlock;
    long long  _virtualMIDICableCount;
}

@property (atomic, readwrite) long long MIDIOutputBufferSizeHint;
@property (atomic, readwrite, copy) id MIDIOutputEventBlock;
@property (atomic, readonly, copy) NSArray *MIDIOutputNames;
@property (atomic, readonly) BOOL allParameterValues;
@property (atomic, readonly, copy) NSString *audioUnitName;
@property (atomic, readonly, copy) NSString *audioUnitShortName;
@property (atomic, readonly) BOOL canProcessInPlace;
@property (atomic, readonly, copy) NSArray *channelCapabilities;
@property (atomic, readwrite, copy) NSArray *channelMap;
@property (atomic, readonly) struct OpaqueAudioComponent { }*component;
@property (atomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } componentDescription;
@property (atomic, readonly, copy) NSString *componentName;
@property (atomic, readonly) unsigned int componentVersion;
@property (atomic, readwrite, copy) NSString *contextName;
@property (atomic, readwrite, retain) AUAudioUnitPreset *currentPreset;
@property (atomic, readonly, copy) NSArray *factoryPresets;
@property (atomic, readwrite, copy) NSDictionary *fullState;
@property (atomic, readwrite, copy) NSDictionary *fullStateForDocument;
@property (nonatomic, readonly) NSURL *iconURL;
@property (atomic, readonly) AUAudioUnitBusArray *inputBusses;
@property (nonatomic, readonly) id internalRenderBlock;
@property (atomic, readonly) double latency;
@property (atomic, readonly, copy) NSString *manufacturerName;
@property (atomic, readwrite) unsigned int maximumFramesToRender;
@property (getter=isMusicDeviceOrEffect, atomic, readonly) BOOL musicDeviceOrEffect;
@property (atomic, readwrite, copy) id musicalContextBlock;
@property (atomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (atomic, readonly) AUParameterTree *parameterTree;
@property (atomic, readonly) BOOL providesUserInterface;
@property (atomic, readonly) id renderBlock;
@property (atomic, readwrite) long long renderQuality;
@property (atomic, readonly) BOOL renderResourcesAllocated;
@property (getter=isRenderingOffline, atomic, readwrite) BOOL renderingOffline;
@property (atomic, readonly) id scheduleMIDIEventBlock;
@property (atomic, readonly) id scheduleParameterBlock;
@property (atomic, readwrite) BOOL shouldBypassEffect;
@property (atomic, readonly) BOOL supportsMPE;
@property (atomic, readonly) double tailTime;
@property (atomic, readwrite, copy) id transportStateBlock;
@property (atomic, readonly) long long virtualMIDICableCount;

+ (id)auAudioUnitForAudioUnit:(struct ComponentInstanceRecord { long long x1[1]; }*)arg1;
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 completionHandler:(id)arg3;
+ (id)keyPathsForValuesAffectingAllParameterValues;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)MIDIOutputBufferSizeHint;
- (id)MIDIOutputEventBlock;
- (id)MIDIOutputNames;
- (void)addRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (BOOL)allParameterValues;
- (BOOL)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)audioUnitName;
- (id)audioUnitShortName;
- (struct NSViewController { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 28; unsigned int x13 : 0; }*)cachedViewController;
- (BOOL)canProcessInPlace;
- (id)channelCapabilities;
- (id)channelMap;
- (struct OpaqueAudioComponent { }*)component;
- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })componentDescription;
- (id)componentName;
- (unsigned int)componentVersion;
- (id)contextName;
- (id)currentPreset;
- (void)dealloc;
- (void)deallocateRenderResources;
- (struct AUEventSchedule { struct AURenderEventAllocator {} *x1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_1_1; } x2; union { /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_3_1_1; void*x_3_1_2; void*x_3_1_3; in double x_3_1_4; void*x_3_1_5; const void*x_3_1_6; void x_3_1_7; void*x_3_1_8; in void*x_3_1_9; } *x3; id x4; }*)eventSchedule;
- (id)factoryPresets;
- (id)fullState;
- (id)fullStateForDocument;
- (id)iconURL;
- (id)init;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 error:(id*)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id)internalRenderBlock;
- (void)invalidateAudioUnit;
- (BOOL)isMusicDeviceOrEffect;
- (BOOL)isRenderingOffline;
- (double)latency;
- (id)manufacturerName;
- (unsigned int)maximumFramesToRender;
- (id)musicalContextBlock;
- (id)outputBusses;
- (id)parameterTree;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (BOOL)providesUserInterface;
- (void)removeRenderObserver:(long long)arg1;
- (void)removeRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (id)renderBlock;
- (long long)renderQuality;
- (BOOL)renderResourcesAllocated;
- (void)requestViewControllerWithCompletionHandler:(id)arg1;
- (void)reset;
- (id)scheduleMIDIEventBlock;
- (id)scheduleParameterBlock;
- (void)selectViewConfiguration:(id)arg1;
- (void)setCachedViewController:(struct NSViewController { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 28; unsigned int x13 : 0; }*)arg1;
- (void)setChannelMap:(id)arg1;
- (void)setContextName:(id)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setFullState:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (void)setMIDIOutputBufferSizeHint:(long long)arg1;
- (void)setMIDIOutputEventBlock:(id)arg1;
- (void)setMaximumFramesToRender:(unsigned int)arg1;
- (void)setMusicalContextBlock:(id)arg1;
- (void)setRenderQuality:(long long)arg1;
- (void)setRenderingOffline:(BOOL)arg1;
- (void)setShouldBypassEffect:(BOOL)arg1;
- (void)setTransportStateBlock:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)shouldBypassEffect;
- (id)supportedViewConfigurations:(id)arg1;
- (BOOL)supportsMPE;
- (double)tailTime;
- (long long)tokenByAddingRenderObserver:(id)arg1;
- (id)transportStateBlock;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)virtualMIDICableCount;

// AUAudioUnit (AUAudioUnitImplementation)

+ (void)registerSubclass:(Class)arg1 asComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 name:(id)arg3 version:(unsigned int)arg4;

- (void)setRenderResourcesAllocated:(BOOL)arg1;
- (BOOL)shouldChangeToFormat:(id)arg1 forBus:(id)arg2;

@end
