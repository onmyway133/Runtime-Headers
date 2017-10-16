/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
 */

@interface WebCoreNSURLSessionDataTask : NSObject {
    long long  _countOfBytesExpectedToReceive;
    long long  _countOfBytesExpectedToSend;
    long long  _countOfBytesReceived;
    long long  _countOfBytesSent;
    NSURLRequest * _currentRequest;
    NSError * _error;
    NSURLRequest * _originalRequest;
    float  _priority;
    struct RefPtr<WebCore::PlatformMediaResource> { 
        struct PlatformMediaResource {} *m_ptr; 
    }  _resource;
    struct RetainPtr<NSURLResponse> { 
        void *m_ptr; 
    }  _response;
    WebCoreNSURLSession * _session;
    long long  _state;
    NSString * _taskDescription;
    unsigned long long  _taskIdentifier;
}

@property (atomic, readwrite) long long countOfBytesExpectedToReceive;
@property (atomic, readwrite) long long countOfBytesExpectedToSend;
@property (atomic, readwrite) long long countOfBytesReceived;
@property (atomic, readwrite) long long countOfBytesSent;
@property (atomic, readwrite, copy) NSURLRequest *currentRequest;
@property (atomic, readwrite, copy) NSError *error;
@property (atomic, readwrite, copy) NSURLRequest *originalRequest;
@property (atomic, readwrite) float priority;
@property (atomic, readonly, copy) NSURLResponse *response;
@property (atomic, readwrite) WebCoreNSURLSession *session;
@property (atomic, readwrite) long long state;
@property (atomic, readwrite, copy) NSString *taskDescription;
@property (atomic, readwrite) unsigned long long taskIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_finish;
- (void)_resource:(struct PlatformMediaResource { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 loadFinishedWithError:(id)arg2;
- (void)_restart;
- (void)_setDefersLoading:(BOOL)arg1;
- (id)_timingData;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (id)currentRequest;
- (void)dealloc;
- (id)error;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 URL:(id)arg3;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 request:(id)arg3;
- (id)originalRequest;
- (float)priority;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 accessControlCheckFailedWithError:(const struct ResourceError { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; int x4; int x5; bool x6; struct RetainPtr<NSError> { void *x_7_1_1; } x7; }*)arg2;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 loadFailedWithError:(const struct ResourceError { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; int x4; int x5; bool x6; struct RetainPtr<NSError> { void *x_7_1_1; } x7; }*)arg2;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 receivedData:(const char *)arg2 length:(int)arg3;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 receivedRedirect:(const struct ResourceResponse { bool x1; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; } x2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; long long x4; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; struct HTTPHeaderMap { struct HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> > { struct HashTable<WebCore::HTTPHeaderName, WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String> >, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName> > { struct KeyValuePair<WebCore::HTTPHeaderName, WTF::String> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_1_2_1; } x_8_1_1; struct HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_2_2_1; } x_8_1_2; } x8; }*)arg2 request:(struct ResourceRequest { struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_1_1_1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; } x1; double x2; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; unsigned int x_3_1_10; unsigned int x_3_1_11; unsigned int x_3_1_12; unsigned int x_3_1_13; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct HTTPHeaderMap { struct HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> > { struct HashTable<WebCore::HTTPHeaderName, WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String> >, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName> > { struct KeyValuePair<WebCore::HTTPHeaderName, WTF::String> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_1_2_1; } x_5_1_1; struct HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_2_2_1; } x_5_1_2; } x5; }*)arg3;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 receivedResponse:(const struct ResourceResponse { bool x1; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; } x2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; long long x4; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; struct HTTPHeaderMap { struct HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> > { struct HashTable<WebCore::HTTPHeaderName, WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String> >, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName> > { struct KeyValuePair<WebCore::HTTPHeaderName, WTF::String> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_1_2_1; } x_8_1_1; struct HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_2_2_1; } x_8_1_2; } x8; }*)arg2;
- (void)resource:(struct PlatformMediaResource { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 sentBytes:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3;
- (BOOL)resource:(struct PlatformMediaResource { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 shouldCacheResponse:(const struct ResourceResponse { bool x1; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; } x2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; long long x4; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; struct HTTPHeaderMap { struct HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> > { struct HashTable<WebCore::HTTPHeaderName, WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String> >, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName> > { struct KeyValuePair<WebCore::HTTPHeaderName, WTF::String> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_1_2_1; } x_8_1_1; struct HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_2_2_1; } x_8_1_2; } x8; }*)arg2;
- (void)resourceFinished:(struct PlatformMediaResource { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct __compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> > { struct PlatformMediaResourceClient {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1;
- (id)response;
- (void)resume;
- (id)session;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setSession:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (long long)state;
- (void)suspend;
- (id)taskDescription;
- (unsigned long long)taskIdentifier;

@end
