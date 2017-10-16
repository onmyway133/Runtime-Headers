/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventCommuteWindow : PBCodable <NSCopying> {
    unsigned int  _duration;
    int  _endReason;
    struct { 
        unsigned int startTime : 1; 
        unsigned int duration : 1; 
        unsigned int endReason : 1; 
        unsigned int numberOfAlertingResponses : 1; 
        unsigned int numberOfDoomRoutingRequests : 1; 
        unsigned int predictedExitTime : 1; 
    }  _has;
    unsigned int  _numberOfAlertingResponses;
    unsigned int  _numberOfDoomRoutingRequests;
    NSMutableArray * _predictedDestinations;
    unsigned int  _predictedExitTime;
    double  _startTime;
}

@property (nonatomic, readwrite) unsigned int duration;
@property (nonatomic, readwrite) int endReason;
@property (nonatomic, readwrite) BOOL hasDuration;
@property (nonatomic, readwrite) BOOL hasEndReason;
@property (nonatomic, readwrite) BOOL hasNumberOfAlertingResponses;
@property (nonatomic, readwrite) BOOL hasNumberOfDoomRoutingRequests;
@property (nonatomic, readwrite) BOOL hasPredictedExitTime;
@property (nonatomic, readwrite) BOOL hasStartTime;
@property (nonatomic, readwrite) unsigned int numberOfAlertingResponses;
@property (nonatomic, readwrite) unsigned int numberOfDoomRoutingRequests;
@property (nonatomic, readwrite, retain) NSMutableArray *predictedDestinations;
@property (nonatomic, readwrite) unsigned int predictedExitTime;
@property (nonatomic, readwrite) double startTime;

+ (Class)predictedDestinationType;

- (void).cxx_destruct;
- (int)StringAsEndReason:(id)arg1;
- (void)addPredictedDestination:(id)arg1;
- (void)clearPredictedDestinations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (int)endReason;
- (id)endReasonAsString:(int)arg1;
- (BOOL)hasDuration;
- (BOOL)hasEndReason;
- (BOOL)hasNumberOfAlertingResponses;
- (BOOL)hasNumberOfDoomRoutingRequests;
- (BOOL)hasPredictedExitTime;
- (BOOL)hasStartTime;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfAlertingResponses;
- (unsigned int)numberOfDoomRoutingRequests;
- (id)predictedDestinationAtIndex:(unsigned long long)arg1;
- (id)predictedDestinations;
- (unsigned long long)predictedDestinationsCount;
- (unsigned int)predictedExitTime;
- (BOOL)readFrom:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setEndReason:(int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasEndReason:(BOOL)arg1;
- (void)setHasNumberOfAlertingResponses:(BOOL)arg1;
- (void)setHasNumberOfDoomRoutingRequests:(BOOL)arg1;
- (void)setHasPredictedExitTime:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setNumberOfAlertingResponses:(unsigned int)arg1;
- (void)setNumberOfDoomRoutingRequests:(unsigned int)arg1;
- (void)setPredictedDestinations:(id)arg1;
- (void)setPredictedExitTime:(unsigned int)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void)writeTo:(id)arg1;

@end
