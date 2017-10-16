/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORPProblemRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEORPClientCapabilities * _clientCapabilities;
    GEOPDClientMetadata * _clientMetadata;
    NSData * _devicePushToken;
    NSString * _inputLanguage;
    GEORPProblem * _problem;
    NSString * _problemUuid;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
}

@property (nonatomic, readwrite, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, readwrite, retain) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, readwrite, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, readwrite, retain) NSData *devicePushToken;
@property (nonatomic, readonly) BOOL hasAnalyticMetadata;
@property (nonatomic, readonly) BOOL hasClientCapabilities;
@property (nonatomic, readonly) BOOL hasClientMetadata;
@property (nonatomic, readonly) BOOL hasDevicePushToken;
@property (nonatomic, readonly) BOOL hasInputLanguage;
@property (nonatomic, readonly) BOOL hasProblem;
@property (nonatomic, readonly) BOOL hasProblemUuid;
@property (nonatomic, readonly) BOOL hasUserCredentials;
@property (nonatomic, readonly) BOOL hasUserEmail;
@property (nonatomic, readwrite, retain) NSString *inputLanguage;
@property (nonatomic, readwrite, retain) GEORPProblem *problem;
@property (nonatomic, readwrite, retain) NSString *problemUuid;
@property (nonatomic, readwrite, retain) GEORPUserCredentials *userCredentials;
@property (nonatomic, readwrite, retain) NSString *userEmail;

- (void).cxx_destruct;
- (id)analyticMetadata;
- (id)clientCapabilities;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (BOOL)hasAnalyticMetadata;
- (BOOL)hasClientCapabilities;
- (BOOL)hasClientMetadata;
- (BOOL)hasDevicePushToken;
- (BOOL)hasInputLanguage;
- (BOOL)hasProblem;
- (BOOL)hasProblemUuid;
- (BOOL)hasUserCredentials;
- (BOOL)hasUserEmail;
- (unsigned long long)hash;
- (id)inputLanguage;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problem;
- (id)problemUuid;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setProblem:(id)arg1;
- (void)setProblemUuid:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
- (void)writeTo:(id)arg1;

// GEORPProblemRequest (GEORPProtoExtras)

- (id)initWithProblem:(id)arg1 pushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;

@end