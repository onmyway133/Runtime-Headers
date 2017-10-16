/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEONetworkSessionTaskTransactionMetrics : PBCodable <NSCopying> {
    double  _connectEnd;
    double  _connectStart;
    double  _domainLookupEnd;
    double  _domainLookupStart;
    double  _fetchStart;
    struct { 
        unsigned int connectEnd : 1; 
        unsigned int connectStart : 1; 
        unsigned int domainLookupEnd : 1; 
        unsigned int domainLookupStart : 1; 
        unsigned int fetchStart : 1; 
        unsigned int requestEnd : 1; 
        unsigned int requestStart : 1; 
        unsigned int responseEnd : 1; 
        unsigned int responseStart : 1; 
        unsigned int secureConnectEnd : 1; 
        unsigned int secureConnectStart : 1; 
        unsigned int protocolName : 1; 
        unsigned int resourceFetchType : 1; 
        unsigned int proxyConnection : 1; 
        unsigned int reusedConnection : 1; 
    }  _has;
    int  _protocolName;
    BOOL  _proxyConnection;
    double  _requestEnd;
    double  _requestStart;
    int  _resourceFetchType;
    double  _responseEnd;
    double  _responseStart;
    BOOL  _reusedConnection;
    double  _secureConnectEnd;
    double  _secureConnectStart;
}

@property (nonatomic, readwrite) double connectEnd;
@property (nonatomic, readwrite) double connectStart;
@property (nonatomic, readwrite) double domainLookupEnd;
@property (nonatomic, readwrite) double domainLookupStart;
@property (nonatomic, readwrite) double fetchStart;
@property (nonatomic, readwrite) BOOL hasConnectEnd;
@property (nonatomic, readwrite) BOOL hasConnectStart;
@property (nonatomic, readwrite) BOOL hasDomainLookupEnd;
@property (nonatomic, readwrite) BOOL hasDomainLookupStart;
@property (nonatomic, readwrite) BOOL hasFetchStart;
@property (nonatomic, readwrite) BOOL hasProtocolName;
@property (nonatomic, readwrite) BOOL hasProxyConnection;
@property (nonatomic, readwrite) BOOL hasRequestEnd;
@property (nonatomic, readwrite) BOOL hasRequestStart;
@property (nonatomic, readwrite) BOOL hasResourceFetchType;
@property (nonatomic, readwrite) BOOL hasResponseEnd;
@property (nonatomic, readwrite) BOOL hasResponseStart;
@property (nonatomic, readwrite) BOOL hasReusedConnection;
@property (nonatomic, readwrite) BOOL hasSecureConnectEnd;
@property (nonatomic, readwrite) BOOL hasSecureConnectStart;
@property (nonatomic, readwrite) int protocolName;
@property (nonatomic, readwrite) BOOL proxyConnection;
@property (nonatomic, readwrite) double requestEnd;
@property (nonatomic, readwrite) double requestStart;
@property (nonatomic, readwrite) int resourceFetchType;
@property (nonatomic, readwrite) double responseEnd;
@property (nonatomic, readwrite) double responseStart;
@property (nonatomic, readwrite) BOOL reusedConnection;
@property (nonatomic, readwrite) double secureConnectEnd;
@property (nonatomic, readwrite) double secureConnectStart;

- (int)StringAsProtocolName:(id)arg1;
- (int)StringAsResourceFetchType:(id)arg1;
- (double)connectEnd;
- (double)connectStart;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)domainLookupEnd;
- (double)domainLookupStart;
- (double)fetchStart;
- (BOOL)hasConnectEnd;
- (BOOL)hasConnectStart;
- (BOOL)hasDomainLookupEnd;
- (BOOL)hasDomainLookupStart;
- (BOOL)hasFetchStart;
- (BOOL)hasProtocolName;
- (BOOL)hasProxyConnection;
- (BOOL)hasRequestEnd;
- (BOOL)hasRequestStart;
- (BOOL)hasResourceFetchType;
- (BOOL)hasResponseEnd;
- (BOOL)hasResponseStart;
- (BOOL)hasReusedConnection;
- (BOOL)hasSecureConnectEnd;
- (BOOL)hasSecureConnectStart;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)protocolName;
- (id)protocolNameAsString:(int)arg1;
- (BOOL)proxyConnection;
- (BOOL)readFrom:(id)arg1;
- (double)requestEnd;
- (double)requestStart;
- (int)resourceFetchType;
- (id)resourceFetchTypeAsString:(int)arg1;
- (double)responseEnd;
- (double)responseStart;
- (BOOL)reusedConnection;
- (double)secureConnectEnd;
- (double)secureConnectStart;
- (void)setConnectEnd:(double)arg1;
- (void)setConnectStart:(double)arg1;
- (void)setDomainLookupEnd:(double)arg1;
- (void)setDomainLookupStart:(double)arg1;
- (void)setFetchStart:(double)arg1;
- (void)setHasConnectEnd:(BOOL)arg1;
- (void)setHasConnectStart:(BOOL)arg1;
- (void)setHasDomainLookupEnd:(BOOL)arg1;
- (void)setHasDomainLookupStart:(BOOL)arg1;
- (void)setHasFetchStart:(BOOL)arg1;
- (void)setHasProtocolName:(BOOL)arg1;
- (void)setHasProxyConnection:(BOOL)arg1;
- (void)setHasRequestEnd:(BOOL)arg1;
- (void)setHasRequestStart:(BOOL)arg1;
- (void)setHasResourceFetchType:(BOOL)arg1;
- (void)setHasResponseEnd:(BOOL)arg1;
- (void)setHasResponseStart:(BOOL)arg1;
- (void)setHasReusedConnection:(BOOL)arg1;
- (void)setHasSecureConnectEnd:(BOOL)arg1;
- (void)setHasSecureConnectStart:(BOOL)arg1;
- (void)setProtocolName:(int)arg1;
- (void)setProxyConnection:(BOOL)arg1;
- (void)setRequestEnd:(double)arg1;
- (void)setRequestStart:(double)arg1;
- (void)setResourceFetchType:(int)arg1;
- (void)setResponseEnd:(double)arg1;
- (void)setResponseStart:(double)arg1;
- (void)setReusedConnection:(BOOL)arg1;
- (void)setSecureConnectEnd:(double)arg1;
- (void)setSecureConnectStart:(double)arg1;
- (void)writeTo:(id)arg1;

@end
