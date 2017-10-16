/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface AUParameterNode : NSObject {
    NSString * _displayName;
    NSString * _identifier;
    id  _impl_implementorDisplayNameWithLengthCallback;
    id  _impl_implementorStringFromValueCallback;
    id  _impl_implementorValueFromStringCallback;
    id  _impl_implementorValueObserver;
    id  _impl_implementorValueProvider;
    unsigned long long  _indexInGroup;
    struct AUObserverList { struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_1_1_1; struct AULocalParameterObserver {} **x_1_1_2; struct __compressed_pair<AULocalParameterObserver **, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_3_2_1; } x_1_1_3; } x1; } * _observerList;
    AUParameterGroup * _parentNode;
}

@property (atomic, readonly, copy) NSString *displayName;
@property (atomic, readonly, copy) NSString *identifier;
@property (atomic, readwrite, copy) id impl_implementorDisplayNameWithLengthCallback;
@property (atomic, readwrite, copy) id impl_implementorStringFromValueCallback;
@property (atomic, readwrite, copy) id impl_implementorValueFromStringCallback;
@property (atomic, readwrite, copy) id impl_implementorValueObserver;
@property (atomic, readwrite, copy) id impl_implementorValueProvider;
@property (atomic, readwrite, copy) id implementorDisplayNameWithLengthCallback;
@property (atomic, readwrite, copy) id implementorStringFromValueCallback;
@property (atomic, readwrite, copy) id implementorValueFromStringCallback;
@property (atomic, readwrite, copy) id implementorValueObserver;
@property (atomic, readwrite, copy) id implementorValueProvider;
@property (nonatomic, readwrite) unsigned long long indexInGroup;
@property (atomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readwrite) /* Warning: unhandled struct encoding: '{AUObserverList={vector<AULocalParameterObserver *' */ struct *observerList; /* unknown property attribute:  std::__1::allocator<AULocalParameterObserver *> >=^^{AULocalParameterObserver}}}} */
@property (nonatomic, readwrite) AUParameterGroup *parentNode;

- (void*)_addRecObserver:(id)arg1 autoObserver:(id)arg2;
- (void)_deserialize:(struct CADeserializer { struct __CFData {} *x1; char *x2; char *x3; char *x4; bool x5; }*)arg1;
- (void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2;
- (id)_rootParent;
- (void)_serialize:(struct CASerializer { struct __CFData {} *x1; }*)arg1;
- (void)_walkTree:(int)arg1 callback:(id)arg2;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)displayNameWithLength:(long long)arg1;
- (id)identifier;
- (id)impl_implementorDisplayNameWithLengthCallback;
- (id)impl_implementorStringFromValueCallback;
- (id)impl_implementorValueFromStringCallback;
- (id)impl_implementorValueObserver;
- (id)impl_implementorValueProvider;
- (unsigned long long)indexInGroup;
- (id)initWithID:(id)arg1 name:(id)arg2;
- (BOOL)isGroup;
- (id)keyPath;
- (struct AUObserverList { struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_1_1_1; struct AULocalParameterObserver {} **x_1_1_2; struct __compressed_pair<AULocalParameterObserver **, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_3_2_1; } x_1_1_3; } x1; }*)observerList;
- (id)parentNode;
- (void)removeParameterObserver:(void*)arg1;
- (void)setImpl_implementorDisplayNameWithLengthCallback:(id)arg1;
- (void)setImpl_implementorStringFromValueCallback:(id)arg1;
- (void)setImpl_implementorValueFromStringCallback:(id)arg1;
- (void)setImpl_implementorValueObserver:(id)arg1;
- (void)setImpl_implementorValueProvider:(id)arg1;
- (void)setIndexInGroup:(unsigned long long)arg1;
- (void)setObserverList:(struct AUObserverList { struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_1_1_1; struct AULocalParameterObserver {} **x_1_1_2; struct __compressed_pair<AULocalParameterObserver **, std::__1::allocator<AULocalParameterObserver *> > { struct AULocalParameterObserver {} **x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)setParentNode:(id)arg1;
- (void*)tokenByAddingParameterAutomationObserver:(id)arg1;
- (void*)tokenByAddingParameterObserver:(id)arg1;
- (void*)tokenByAddingParameterRecordingObserver:(id)arg1;

// AUParameterNode (AUParameterNodeImplementation)

- (id)implementorDisplayNameWithLengthCallback;
- (id)implementorStringFromValueCallback;
- (id)implementorValueFromStringCallback;
- (id)implementorValueObserver;
- (id)implementorValueProvider;
- (void)setImplementorDisplayNameWithLengthCallback:(id)arg1;
- (void)setImplementorStringFromValueCallback:(id)arg1;
- (void)setImplementorValueFromStringCallback:(id)arg1;
- (void)setImplementorValueObserver:(id)arg1;
- (void)setImplementorValueProvider:(id)arg1;

@end